#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
class DHAOLPGKOAP;
class NFHKMGFPINI;

#define KHKFODPFGEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB404FE0)
#define KHKFODPFGEA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB404F80)
#define KHKFODPFGEA_GET_DAY_OFFSET UNITYSDK_OFFSET(0xB404F60)
#define KHKFODPFGEA_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xB404FC0)
#define KHKFODPFGEA_GET_MATCH_OFFSET UNITYSDK_OFFSET(0xB404FA0)
#define KHKFODPFGEA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xB404F90)
#define KHKFODPFGEA_SET_DAY_OFFSET UNITYSDK_OFFSET(0xB404F70)
#define KHKFODPFGEA_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xB404FD0)
#define KHKFODPFGEA_SET_MATCH_OFFSET UNITYSDK_OFFSET(0xB404FB0)

inline static constexpr unsigned int KHKFODPFGEA_TypeDefinitionIndex = 81662;

	class KHKFODPFGEA : public ::System::Object
	{
	public:
		::DHAOLPGKOAP* _Match_k__BackingField; // 0x10
		::NFHKMGFPINI* _Development_k__BackingField; // 0x18
		::System::UInt32 _Day_k__BackingField; // 0x20
		::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFODPFGEA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Day()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFODPFGEA_GET_DAY_OFFSET))(this);
		}

		::System::Void set_Day(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHKFODPFGEA_SET_DAY_OFFSET))(this, a1);
		}

		::RPG::GameCore::B51RacingContentType get_ContentType()
		{
			return ((::RPG::GameCore::B51RacingContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFODPFGEA_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::RPG::GameCore::B51RacingContentType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingContentType))((::PBYTE)hIl2Cpp + KHKFODPFGEA_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::DHAOLPGKOAP* get_Match()
		{
			return ((::DHAOLPGKOAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFODPFGEA_GET_MATCH_OFFSET))(this);
		}

		::System::Void set_Match(::DHAOLPGKOAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHAOLPGKOAP*))((::PBYTE)hIl2Cpp + KHKFODPFGEA_SET_MATCH_OFFSET))(this, a1);
		}

		::NFHKMGFPINI* get_Development()
		{
			return ((::NFHKMGFPINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKFODPFGEA_GET_DEVELOPMENT_OFFSET))(this);
		}

		::System::Void set_Development(::NFHKMGFPINI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFHKMGFPINI*))((::PBYTE)hIl2Cpp + KHKFODPFGEA_SET_DEVELOPMENT_OFFSET))(this, a1);
		}

	};

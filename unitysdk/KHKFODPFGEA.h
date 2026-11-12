#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingContentType.h"
#include "unitysdk/System/Object.h"
class DHAOLPGKOAP;
class NFHKMGFPINI;

#define KHKFODPFGEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA0AF0)
#define KHKFODPFGEA_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBCA0A90)
#define KHKFODPFGEA_GET_DAY_OFFSET UNITYSDK_OFFSET(0xBCA0A70)
#define KHKFODPFGEA_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xBCA0AD0)
#define KHKFODPFGEA_GET_MATCH_OFFSET UNITYSDK_OFFSET(0xBCA0AB0)
#define KHKFODPFGEA_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBCA0AA0)
#define KHKFODPFGEA_SET_DAY_OFFSET UNITYSDK_OFFSET(0xBCA0A80)
#define KHKFODPFGEA_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0xBCA0AE0)
#define KHKFODPFGEA_SET_MATCH_OFFSET UNITYSDK_OFFSET(0xBCA0AC0)

inline static constexpr unsigned int KHKFODPFGEA_TypeDefinitionIndex = 84444;

	class KHKFODPFGEA : public ::System::Object
	{
	public:
		::NFHKMGFPINI* _Development_k__BackingField; // 0x10
		::DHAOLPGKOAP* _Match_k__BackingField; // 0x18
		::RPG::GameCore::B51RacingContentType _ContentType_k__BackingField; // 0x20
		::System::UInt32 _Day_k__BackingField; // 0x24
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

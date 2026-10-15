#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define OGAIPOKKFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE46DB0)
#define OGAIPOKKFGH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBE46B90)
#define OGAIPOKKFGH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBE46BD0)
#define OGAIPOKKFGH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE46880)
#define OGAIPOKKFGH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBE46890)

inline static constexpr unsigned int OGAIPOKKFGH_TypeDefinitionIndex = 56159;

	class OGAIPOKKFGH : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x10
		::System::Int32 ACHILGIPGKL; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x1C
		::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAIPOKKFGH_ELEPDOMDAGA_OFFSET))(this);
		}

	};

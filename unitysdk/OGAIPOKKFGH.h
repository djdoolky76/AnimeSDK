#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define OGAIPOKKFGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4E370)
#define OGAIPOKKFGH_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBE4E150)
#define OGAIPOKKFGH_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBE4E190)
#define OGAIPOKKFGH_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE4DE40)
#define OGAIPOKKFGH_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBE4DE50)

inline static constexpr unsigned int OGAIPOKKFGH_TypeDefinitionIndex = 56159;

	class OGAIPOKKFGH : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x10
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::System::Int32 ACHILGIPGKL; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x24
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define GKOGPFNACPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA8720)
#define GKOGPFNACPB_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15AA8630)
#define GKOGPFNACPB_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15AA8670)
#define GKOGPFNACPB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15AA8430)
#define GKOGPFNACPB_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15AA8440)

inline static constexpr unsigned int GKOGPFNACPB_TypeDefinitionIndex = 56156;

	class GKOGPFNACPB : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10
		::System::UInt32 HLKCKMIGJFJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFNACPB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFNACPB_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFNACPB_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFNACPB_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFNACPB_ELEPDOMDAGA_OFFSET))(this);
		}

	};

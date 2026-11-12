#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define PNMAFFNLEGB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC80B30)
#define PNMAFFNLEGB_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xCC80A10)
#define PNMAFFNLEGB_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xCC80A50)
#define PNMAFFNLEGB_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCC807D0)
#define PNMAFFNLEGB_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xCC807E0)

inline static constexpr unsigned int PNMAFFNLEGB_TypeDefinitionIndex = 57338;

	class PNMAFFNLEGB : public ::DBGDNLLDPFI
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x10
		::System::Boolean ICMOLOJEKDF; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMAFFNLEGB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMAFFNLEGB_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMAFFNLEGB_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMAFFNLEGB_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMAFFNLEGB_ELEPDOMDAGA_OFFSET))(this);
		}

	};

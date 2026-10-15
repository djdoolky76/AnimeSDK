#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MIICJEMGPKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB959FE0)
#define MIICJEMGPKE_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB959E50)
#define MIICJEMGPKE_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB959E90)
#define MIICJEMGPKE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB959BC0)
#define MIICJEMGPKE_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB959BD0)

inline static constexpr unsigned int MIICJEMGPKE_TypeDefinitionIndex = 56154;

	class MIICJEMGPKE : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* AFHDFCPCKGF; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIICJEMGPKE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIICJEMGPKE_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIICJEMGPKE_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIICJEMGPKE_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIICJEMGPKE_ELEPDOMDAGA_OFFSET))(this);
		}

	};

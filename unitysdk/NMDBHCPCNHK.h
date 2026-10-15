#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class NMDBHCPCNHK;
namespace System { class String; }

#define NMDBHCPCNHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2077F0)
#define NMDBHCPCNHK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D207800)
#define NMDBHCPCNHK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2077C0)

inline static constexpr unsigned int NMDBHCPCNHK_TypeDefinitionIndex = 22441;

	class NMDBHCPCNHK : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* KEFNJGCFHGH; // 0x18
		::System::String* PFDLMJILKBK; // 0x20
		::System::Boolean MHKKCHLPABL; // 0x28
		::System::Boolean AHEEAFKFALM; // 0x29
		::System::Boolean HIDPIGLKPFB; // 0x2A
		::System::Boolean CLJEBKODGHK; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDBHCPCNHK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMDBHCPCNHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMDBHCPCNHK*))((::PBYTE)hIl2Cpp + NMDBHCPCNHK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMDBHCPCNHK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMDBHCPCNHK*))((::PBYTE)hIl2Cpp + NMDBHCPCNHK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};

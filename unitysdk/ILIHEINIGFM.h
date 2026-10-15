#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAnchorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ILIHEINIGFM;
namespace System { class String; }

#define ILIHEINIGFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF210D0)
#define ILIHEINIGFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF20DC0)

inline static constexpr unsigned int ILIHEINIGFM_TypeDefinitionIndex = 11256;

	class ILIHEINIGFM : public ::System::Object
	{
	public:
		::System::String* CLCFMLOGBAN; // 0x10
		::System::String* KOIJMGCHFII; // 0x18
		::System::String* HAEBLLPPDHO; // 0x20
		::System::String* CGANPPICDAM; // 0x28
		::System::String* BBDAFOAINPD; // 0x30
		::System::String* BDACPPLKLGL; // 0x38
		::RPG::GameCore::DiceCombatAnchorType HPLKADFDFAI; // 0x40
		::System::Single KIPAGNCANAJ; // 0x44
		::System::UInt32 NIDFIGFJJLL; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHEINIGFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ILIHEINIGFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ILIHEINIGFM*))((::PBYTE)hIl2Cpp + ILIHEINIGFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

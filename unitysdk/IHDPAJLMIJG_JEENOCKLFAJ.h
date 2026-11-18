#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define IHDPAJLMIJG_JEENOCKLFAJ_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x16F6C0F0)
#define IHDPAJLMIJG_JEENOCKLFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6A450)

inline static constexpr unsigned int IHDPAJLMIJG_JEENOCKLFAJ_TypeDefinitionIndex = 84047;

class IHDPAJLMIJG_JEENOCKLFAJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_JEENOCKLFAJ__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_JEENOCKLFAJ_FDLNIEGEOLI_OFFSET))(this, IMGBAKKLEMJ, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}
};

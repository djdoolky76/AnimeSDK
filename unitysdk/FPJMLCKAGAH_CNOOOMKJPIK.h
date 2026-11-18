#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define FPJMLCKAGAH_CNOOOMKJPIK_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x116C6740)
#define FPJMLCKAGAH_CNOOOMKJPIK_KDBDLOFDILP_OFFSET UNITYSDK_OFFSET(0x116C67E0)
#define FPJMLCKAGAH_CNOOOMKJPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x116C6730)

inline static constexpr unsigned int FPJMLCKAGAH_CNOOOMKJPIK_TypeDefinitionIndex = 75450;

class FPJMLCKAGAH_CNOOOMKJPIK : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJMLCKAGAH_CNOOOMKJPIK__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FPJMLCKAGAH_CNOOOMKJPIK_FDLNIEGEOLI_OFFSET))(this, IMGBAKKLEMJ, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void KDBDLOFDILP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJMLCKAGAH_CNOOOMKJPIK_KDBDLOFDILP_OFFSET))(this);
	}
};

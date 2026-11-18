#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define LIGMMKPFLDN_JELDBNLIMPF_ELBDIHJGENK_OFFSET UNITYSDK_OFFSET(0x15DFECC0)
#define LIGMMKPFLDN_JELDBNLIMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFECB0)

inline static constexpr unsigned int LIGMMKPFLDN_JELDBNLIMPF_TypeDefinitionIndex = 41407;

class LIGMMKPFLDN_JELDBNLIMPF : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* BFDPPMDEOFF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGMMKPFLDN_JELDBNLIMPF__CTOR_OFFSET))(this);
	}

	::System::Void ELBDIHJGENK(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LIGMMKPFLDN_JELDBNLIMPF_ELBDIHJGENK_OFFSET))(this, IMGBAKKLEMJ, ECAJMFPANNE, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}
};

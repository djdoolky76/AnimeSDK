#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define FCDPECJMCMF_CAHMKDCLCDI_OKIHADHOGEC_OFFSET UNITYSDK_OFFSET(0x156B43F0)
#define FCDPECJMCMF_CAHMKDCLCDI__CTOR_OFFSET UNITYSDK_OFFSET(0x156B43E0)

inline static constexpr unsigned int FCDPECJMCMF_CAHMKDCLCDI_TypeDefinitionIndex = 91746;

class FCDPECJMCMF_CAHMKDCLCDI : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* DMPEOJCCCLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDPECJMCMF_CAHMKDCLCDI__CTOR_OFFSET))(this);
	}

	::System::Void OKIHADHOGEC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FCDPECJMCMF_CAHMKDCLCDI_OKIHADHOGEC_OFFSET))(this, KECKGDFIALJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }

#define MMDMCHNBLBJ_FKMDPEKOGAB_ODGPMFIAINF_OFFSET UNITYSDK_OFFSET(0x14070320)
#define MMDMCHNBLBJ_FKMDPEKOGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14070310)

inline static constexpr unsigned int MMDMCHNBLBJ_FKMDPEKOGAB_TypeDefinitionIndex = 44700;

class MMDMCHNBLBJ_FKMDPEKOGAB : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_FKMDPEKOGAB__CTOR_OFFSET))(this);
	}

	::System::Boolean ODGPMFIAINF(::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_FKMDPEKOGAB_ODGPMFIAINF_OFFSET))(this, EJCBEJMGFAJ);
	}
};

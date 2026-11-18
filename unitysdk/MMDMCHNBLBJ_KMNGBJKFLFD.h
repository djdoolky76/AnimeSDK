#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }

#define MMDMCHNBLBJ_KMNGBJKFLFD_PIFBMCODHEJ_OFFSET UNITYSDK_OFFSET(0x11F61230)
#define MMDMCHNBLBJ_KMNGBJKFLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F61220)

inline static constexpr unsigned int MMDMCHNBLBJ_KMNGBJKFLFD_TypeDefinitionIndex = 44701;

class MMDMCHNBLBJ_KMNGBJKFLFD : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_KMNGBJKFLFD__CTOR_OFFSET))(this);
	}

	::System::Boolean PIFBMCODHEJ(::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_KMNGBJKFLFD_PIFBMCODHEJ_OFFSET))(this, EJCBEJMGFAJ);
	}
};

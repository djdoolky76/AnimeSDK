#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { template <typename T> class EcsCallbackAction_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMDMCHNBLBJ_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x18B58DA0)
#define MMDMCHNBLBJ_MPNCOHINNPB_OFFSET UNITYSDK_OFFSET(0x18B58BE0)
#define MMDMCHNBLBJ_PAIPNCMNDBO_OFFSET UNITYSDK_OFFSET(0x18B58AB0)
#define MMDMCHNBLBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B58A30)

inline static constexpr unsigned int MMDMCHNBLBJ_TypeDefinitionIndex = 44699;

class MMDMCHNBLBJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Nap::NapECS::EcsCallbackAction_1<::System::Action_1<::MoleMole::Battle::Entity*>*>*>* GPAOEGOJHDA; // 0x10
	::System::Int32 AIBIEFAOFBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ__CTOR_OFFSET))(this);
	}

	::System::Void PAIPNCMNDBO(::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_PAIPNCMNDBO_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void MPNCOHINNPB(::System::Action_1<::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_MPNCOHINNPB_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void DKDJDEJHABH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MMDMCHNBLBJ_DKDJDEJHABH_OFFSET))(this, KECKGDFIALJ);
	}
};

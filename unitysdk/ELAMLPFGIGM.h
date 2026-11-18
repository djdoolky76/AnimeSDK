#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GDIACAHPLBB_GHADOMFGCCC.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELAMLPFGIGM_EKOAIDCMPCE_OFFSET UNITYSDK_OFFSET(0x17243330)

inline static constexpr unsigned int ELAMLPFGIGM_TypeDefinitionIndex = 40912;

class ELAMLPFGIGM : public ::System::Object
{
public:
	static ::MoleMole::EntityHandle EKOAIDCMPCE(::System::Int32 AKGHKOKPPKK, ::GDIACAHPLBB_GHADOMFGCCC JLPLKNIFMON, ::System::UInt64 NAKJNPACCEO, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* CKHMMFCFKMD)
	{
		return ((::MoleMole::EntityHandle(*)(::System::Int32, ::GDIACAHPLBB_GHADOMFGCCC, ::System::UInt64, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + ELAMLPFGIGM_EKOAIDCMPCE_OFFSET))(AKGHKOKPPKK, JLPLKNIFMON, NAKJNPACCEO, CKHMMFCFKMD);
	}
};

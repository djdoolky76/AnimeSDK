#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBGLMEFFMKB_LOKPIKHPFKE_KPINHEDDILM_OFFSET UNITYSDK_OFFSET(0x11CECD50)
#define FBGLMEFFMKB_LOKPIKHPFKE__CTOR_OFFSET UNITYSDK_OFFSET(0x11CECD40)

inline static constexpr unsigned int FBGLMEFFMKB_LOKPIKHPFKE_TypeDefinitionIndex = 42512;

class FBGLMEFFMKB_LOKPIKHPFKE : public ::System::Object
{
public:
	::System::Int32 PAFPKHKIHCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_LOKPIKHPFKE__CTOR_OFFSET))(this);
	}

	::System::Void KPINHEDDILM(::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + FBGLMEFFMKB_LOKPIKHPFKE_KPINHEDDILM_OFFSET))(this, FNGBEJKAECI);
	}
};

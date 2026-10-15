#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class BCGKEELAOEA;
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class MEJIFBJMJOF;
class NBGAENHBEIF;

#define NBHDFJLLFBN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBABCB60)
#define NBHDFJLLFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBABCAA0)

inline static constexpr unsigned int NBHDFJLLFBN_TypeDefinitionIndex = 62622;

	class NBHDFJLLFBN : public ::System::Object
	{
	public:
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x10
		::NBGAENHBEIF* BHBLMPMNJKM; // 0x18
		::HPJEECIEDAB* PLOCCENMDOI; // 0x20
		::System::Void _ctor(::NBGAENHBEIF* a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NBGAENHBEIF*, ::HPJEECIEDAB*, ::DNIAIFGHFLM*))((::PBYTE)hIl2Cpp + NBHDFJLLFBN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::MEJIFBJMJOF* BPLPBPMEODA(::APCGKBOPGJL a1, ::DPHIFKIPMLI* a2, ::Il2CppArray<::System::UInt32>* a3, ::Il2CppArray<::BCGKEELAOEA*>* a4)
		{
			return ((::MEJIFBJMJOF*(*)(::PVOID, ::APCGKBOPGJL, ::DPHIFKIPMLI*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::BCGKEELAOEA*>*))((::PBYTE)hIl2Cpp + NBHDFJLLFBN_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

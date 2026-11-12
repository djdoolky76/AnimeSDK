#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class BCGKEELAOEA;
class DNIAIFGHFLM;
class DPHIFKIPMLI;
class HPJEECIEDAB;
class KFMGKJPDLNB;
class MEJIFBJMJOF;
class NBGAENHBEIF;

#define NBHDFJLLFBN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC3484E0)
#define NBHDFJLLFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC348420)

inline static constexpr unsigned int NBHDFJLLFBN_TypeDefinitionIndex = 64050;

	class NBHDFJLLFBN : public ::System::Object
	{
	public:
		::HPJEECIEDAB* PLOCCENMDOI; // 0x10
		::DNIAIFGHFLM* GOHMGCHLKLM; // 0x18
		::NBGAENHBEIF* BHBLMPMNJKM; // 0x20
		::System::Void _ctor(::NBGAENHBEIF* a1, ::HPJEECIEDAB* a2, ::DNIAIFGHFLM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NBGAENHBEIF*, ::HPJEECIEDAB*, ::DNIAIFGHFLM*))((::PBYTE)hIl2Cpp + NBHDFJLLFBN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::MEJIFBJMJOF* BPLPBPMEODA(::APCGKBOPGJL a1, ::DPHIFKIPMLI* a2, ::KFMGKJPDLNB* a3, ::Il2CppArray<::System::UInt32>* a4, ::Il2CppArray<::BCGKEELAOEA*>* a5)
		{
			return ((::MEJIFBJMJOF*(*)(::PVOID, ::APCGKBOPGJL, ::DPHIFKIPMLI*, ::KFMGKJPDLNB*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::BCGKEELAOEA*>*))((::PBYTE)hIl2Cpp + NBHDFJLLFBN_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};

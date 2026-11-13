#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IACBBGPHHJM_BBHLKMHFLKJ_OFFSET UNITYSDK_OFFSET(0x19412970)
#define IACBBGPHHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x194124D0)
#define IACBBGPHHJM_EICIFNFMNLI_OFFSET UNITYSDK_OFFSET(0x19412550)
#define IACBBGPHHJM_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x194124C0)
#define IACBBGPHHJM_GGBHOGKNLAO_OFFSET UNITYSDK_OFFSET(0x19412630)
#define IACBBGPHHJM_GMPMOBOBHNA_OFFSET UNITYSDK_OFFSET(0x194127D0)
#define IACBBGPHHJM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19412510)
#define IACBBGPHHJM_KFKPGJFAKNJ_OFFSET UNITYSDK_OFFSET(0x194128B0)

inline static constexpr unsigned int IACBBGPHHJM_TypeDefinitionIndex = 80166;

	class IACBBGPHHJM : public ::System::Object
	{
	public:
		::System::Random* __Random_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IACBBGPHHJM_CTOR_OFFSET))(this, a1);
		}

		::System::Random* get__Random()
		{
			return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACBBGPHHJM_GET__RANDOM_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACBBGPHHJM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Int32 EICIFNFMNLI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IACBBGPHHJM_EICIFNFMNLI_OFFSET))(this, a1, a2);
		}

		::System::Void GGBHOGKNLAO(::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::System::Int32))((::PBYTE)hIl2Cpp + IACBBGPHHJM_GGBHOGKNLAO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMPMOBOBHNA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IACBBGPHHJM_GMPMOBOBHNA_OFFSET))(this, a1);
		}

		::System::Double KFKPGJFAKNJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IACBBGPHHJM_KFKPGJFAKNJ_OFFSET))(this);
		}

		::System::Int32 BBHLKMHFLKJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IACBBGPHHJM_BBHLKMHFLKJ_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJLELNJPEA;
class PDEFOKILHLE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPMAIAEDIHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD082D0)
#define NPMAIAEDIHK_FOKPGFJKKAJ_OFFSET UNITYSDK_OFFSET(0xBD08410)
#define NPMAIAEDIHK_GET__CONDITIONS_OFFSET UNITYSDK_OFFSET(0xBD082C0)
#define NPMAIAEDIHK_GET__EXPRESSION_OFFSET UNITYSDK_OFFSET(0xBD082B0)
#define NPMAIAEDIHK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBD082E0)

inline static constexpr unsigned int NPMAIAEDIHK_TypeDefinitionIndex = 63274;

	class NPMAIAEDIHK : public ::System::Object
	{
	public:
		::PDEFOKILHLE* __Expression_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::IAJLELNJPEA*>* __Conditions_k__BackingField; // 0x18
		::System::Void _ctor(::PDEFOKILHLE* a1, ::System::Collections::Generic::List_1<::IAJLELNJPEA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PDEFOKILHLE*, ::System::Collections::Generic::List_1<::IAJLELNJPEA*>*))((::PBYTE)hIl2Cpp + NPMAIAEDIHK_CTOR_OFFSET))(this, a1, a2);
		}

		::PDEFOKILHLE* get__Expression()
		{
			return ((::PDEFOKILHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMAIAEDIHK_GET__EXPRESSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IAJLELNJPEA*>* get__Conditions()
		{
			return ((::System::Collections::Generic::List_1<::IAJLELNJPEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMAIAEDIHK_GET__CONDITIONS_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMAIAEDIHK_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void FOKPGFJKKAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMAIAEDIHK_FOKPGFJKKAJ_OFFSET))(this);
		}

	};

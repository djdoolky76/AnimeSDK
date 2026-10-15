#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFDIEEHGJED.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPIDPHFLMMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA39920)
#define MPIDPHFLMMM_EIGDBCEEPJF_OFFSET UNITYSDK_OFFSET(0xBA39660)
#define MPIDPHFLMMM_LBGLEMCBFFN_OFFSET UNITYSDK_OFFSET(0xBA397C0)
#define MPIDPHFLMMM_MKEIHAPPOMK_OFFSET UNITYSDK_OFFSET(0xBA39490)

inline static constexpr unsigned int MPIDPHFLMMM_TypeDefinitionIndex = 77702;

	class MPIDPHFLMMM : public ::DFDIEEHGJED
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NJLINBKDBGI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIDPHFLMMM_CTOR_OFFSET))(this);
		}

		::System::Void MKEIHAPPOMK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MPIDPHFLMMM_MKEIHAPPOMK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EIGDBCEEPJF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MPIDPHFLMMM_EIGDBCEEPJF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LBGLEMCBFFN(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MPIDPHFLMMM_LBGLEMCBFFN_OFFSET))(this, a1, a2, a3, a4);
		}

	};

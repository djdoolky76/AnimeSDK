#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"
class GAHPNAEGACM;
class GEDMHFPPBHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJPNJAKPNDL_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xBC25A00)
#define NJPNJAKPNDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC25830)
#define NJPNJAKPNDL_EKFJDDKDABB_OFFSET UNITYSDK_OFFSET(0xBC25870)
#define NJPNJAKPNDL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBC25990)

inline static constexpr unsigned int NJPNJAKPNDL_TypeDefinitionIndex = 71200;

	class NJPNJAKPNDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GAHPNAEGACM*>* IIBHBGNDFLC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPNJAKPNDL_CTOR_OFFSET))(this);
		}

		::System::Void EKFJDDKDABB(::RPG::Client::ActionBarItemAction a1, ::GEDMHFPPBHN* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::GEDMHFPPBHN*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NJPNJAKPNDL_EKFJDDKDABB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPNJAKPNDL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPNJAKPNDL_BPDIGKDIJKN_OFFSET))(this);
		}

	};

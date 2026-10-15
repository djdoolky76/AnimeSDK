#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPKIKHMONOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB822A80)
#define LPKIKHMONOF_HFIFIEKBACF_OFFSET UNITYSDK_OFFSET(0xB822930)
#define LPKIKHMONOF_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0xB8229A0)
#define LPKIKHMONOF_LJAHDMJLMCE_OFFSET UNITYSDK_OFFSET(0xB8229F0)
#define LPKIKHMONOF_OHHOHMEIKEM_OFFSET UNITYSDK_OFFSET(0xB822B30)

	class LPKIKHMONOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* DLKNHBOMIJF; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* FKHEFMGFKED; // 0x18
		::System::Int32 MBNLJEMMPNC; // 0x20
		::System::Single HBAMPJPOOLM; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPKIKHMONOF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HFIFIEKBACF(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPKIKHMONOF_HFIFIEKBACF_OFFSET))(this, a1);
		}

		::System::Int32 IMIKJMCGGML()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKIKHMONOF_IMIKJMCGGML_OFFSET))(this);
		}

		::System::Int32 LJAHDMJLMCE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKIKHMONOF_LJAHDMJLMCE_OFFSET))(this);
		}

		::System::Void OHHOHMEIKEM(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LPKIKHMONOF_OHHOHMEIKEM_OFFSET))(this, a1, a2, a3);
		}

	};

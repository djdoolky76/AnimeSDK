#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOGLEMMMDAC_BPFFEDDNDGC_CTOR_OFFSET UNITYSDK_OFFSET(0xC191150)

	class BOGLEMMMDAC_BPFFEDDNDGC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* MODHBNJHAEP; // 0x10
		::Il2CppArray<::System::Object*>* BDIAMMKNGLA; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* MBMPMMMJGGC; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_BPFFEDDNDGC_CTOR_OFFSET))(this, a1);
		}

	};

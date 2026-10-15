#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCGEJNALKKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B5A0)

	class DCGEJNALKKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* EONKAJJFGNP; // 0x10
		::System::Boolean MKELNFDKKJK; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 LLLMGKILJPF; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGEJNALKKB_CTOR_OFFSET))(this);
		}

	};

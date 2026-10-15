#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EKPOLIPHPIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15519870)

	class EKPOLIPHPIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* ONDPCNNKLOE; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KJEBCFIOPHB; // 0x18
		::UnityEngine::Transform* KBBHFADBJCP; // 0x20
		::System::Boolean AAAHCOIMADJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 IGCDCFGJMCL; // 0x2C
		::UnityEngine::Vector3 HDKDECNKEEC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPOLIPHPIK_CTOR_OFFSET))(this);
		}

	};

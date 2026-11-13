#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EKPOLIPHPIK_CTOR_OFFSET UNITYSDK_OFFSET(0x199A3250)

inline static constexpr unsigned int EKPOLIPHPIK_TypeDefinitionIndex = 52972;

	class EKPOLIPHPIK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* KBBHFADBJCP; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* ONDPCNNKLOE; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KJEBCFIOPHB; // 0x20
		::UnityEngine::Vector3 HDKDECNKEEC; // 0x28
		::System::Int32 IGCDCFGJMCL; // 0x34
		::System::Boolean AAAHCOIMADJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPOLIPHPIK_CTOR_OFFSET))(this);
		}

	};

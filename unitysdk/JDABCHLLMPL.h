#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define JDABCHLLMPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB8F220)
#define JDABCHLLMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8F270)

inline static constexpr unsigned int JDABCHLLMPL_TypeDefinitionIndex = 42963;

	class JDABCHLLMPL : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GFOOBKCLNAD; // 0x10
		::UnityEngine::Transform* FLEOJOGLCBD; // 0x18
		::System::Single KKHAELMENEH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDABCHLLMPL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDABCHLLMPL_CLEAR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Rigidbody; }

#define LAHPDJJAJNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90C760)

inline static constexpr unsigned int LAHPDJJAJNA_TypeDefinitionIndex = 43196;

	class LAHPDJJAJNA : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* LLBAAKBKFLC; // 0x10
		::System::Single NGFAGMJHKJO; // 0x18
		::UnityEngine::Vector3 IKNAAOPEKFP; // 0x1C
		::UnityEngine::Vector3 NIBGNGICDOO; // 0x28
		::UnityEngine::Vector3 EAHFKEGAHKE; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHPDJJAJNA_CTOR_OFFSET))(this);
		}

	};

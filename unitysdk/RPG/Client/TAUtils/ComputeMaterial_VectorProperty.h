#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }

#define RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_VECTORPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE18CC20)

namespace RPG::Client::TAUtils
{
	class ComputeMaterial_VectorProperty : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Vector4 value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_COMPUTEMATERIAL_VECTORPROPERTY_CTOR_OFFSET))(this);
		}

	};
}

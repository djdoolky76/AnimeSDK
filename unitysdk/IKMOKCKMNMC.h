#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define IKMOKCKMNMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1648E360)

inline static constexpr unsigned int IKMOKCKMNMC_TypeDefinitionIndex = 73191;

	class IKMOKCKMNMC : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* CBPPPOEMCLF; // 0x10
		::System::String* HMDFOHBBIOH; // 0x18
		::UnityEngine::Object* CNADDNANHBL; // 0x20
		::System::Boolean JLPDFMCJAIG; // 0x28
		::System::Boolean LJLAPMEGMEA; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMOKCKMNMC_CTOR_OFFSET))(this);
		}

	};

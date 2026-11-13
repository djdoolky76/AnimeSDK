#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define BCFDIOHHLOM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D743B0)

inline static constexpr unsigned int BCFDIOHHLOM_TypeDefinitionIndex = 58769;

	class BCFDIOHHLOM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFDIOHHLOM_CTOR_OFFSET))(this);
		}

	};

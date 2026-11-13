#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define BOXMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B617580)

inline static constexpr unsigned int BoxMaterial_TypeDefinitionIndex = 48117;

	class BoxMaterial : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* MaterialList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOXMATERIAL_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_BCMLJEIDFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1991BAD0)

inline static constexpr unsigned int CharacterLineLightGroup_BCMLJEIDFBN_TypeDefinitionIndex = 48493;

	class CharacterLineLightGroup_BCMLJEIDFBN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NGGEBBDBPLC; // 0x10
		::UnityEngine::Color BNAIPPHEIJO; // 0x18
		::UnityEngine::Vector3 LHLDIPIMOML; // 0x28
		::System::Int32 CBAOEKFNHLH; // 0x34
		::UnityEngine::Vector3 OAIEPPNKEHA; // 0x38
		::System::Int32 FKMABDEDNHO; // 0x44
		::UnityEngine::Vector3 KHOECFJFKIB; // 0x48
		::System::Single BCLLNPOPCIM; // 0x54
		::UnityEngine::Vector3 EDGBMAMBBNM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_BCMLJEIDFBN_CTOR_OFFSET))(this);
		}

	};

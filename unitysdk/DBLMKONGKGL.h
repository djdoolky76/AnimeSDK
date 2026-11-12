#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CameraBlendCurve; }

#define DBLMKONGKGL_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8EF70)

inline static constexpr unsigned int DBLMKONGKGL_TypeDefinitionIndex = 71600;

	class DBLMKONGKGL : public ::System::Object
	{
	public:
		::RPG::Client::CameraBlendCurve* NLIFDJHPHLP; // 0x10
		::UnityEngine::Vector3 KMNMAFDBCEK; // 0x18
		::UnityEngine::Vector3 OKEIJHOGFFC; // 0x24
		::System::Single FLFLMEHJFPI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLMKONGKGL_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace TA::EnvironmentSystem { class HeightMapData; }
namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define AFF1C51B9231EEC3_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x285C7C0)
#define AFF1C51B9231EEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x285CAF0)

inline static constexpr unsigned int AFF1C51B9231EEC3_TypeDefinitionIndex = 16038;

class AFF1C51B9231EEC3 : public ::ABEBA93AD61764EF
{
public:
	::System::Int32 B59F8F616F856B91; // 0x18
	::UnityEngine::Vector3 FE94C8ECFF4D2533; // 0x1C
	::UnityEngine::Vector3 E22AFB5F1B6ED779; // 0x28
	::UnityEngine::Vector2 F870AE69B1231C82; // 0x34
	::UnityEngine::Vector2 FEDEF9E0AAB1DA73; // 0x3C
	::UnityEngine::Vector2 E99F159731DA1A43; // 0x44
	::UnityEngine::Vector2 E92C7279142F7DFF; // 0x4C
	::UnityEngine::Vector3 FB6A3FF5AB230EA0; // 0x54
	::System::Single ECF75AA1EC470C00; // 0x60
	::System::Single F95A98C5BBF3B6C7; // 0x64
	::UnityEngine::B196ACFA9D2AE729* EE78683097C85174; // 0x68
	::UnityEngine::FAED0374422E783A* EC3ABBE04BA59D40; // 0x70
	::UnityEngine::Mesh* A44D79489096FDB9; // 0x78
	::UnityEngine::Material* F9E2CFB0BAA4C7AC; // 0x80
	::TA::EnvironmentSystem::HeightMapData* E55B2386ABCC1609; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFF1C51B9231EEC3__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::AFF1C51B9231EEC3* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::AFF1C51B9231EEC3*))((::PBYTE)hIl2Cpp + AFF1C51B9231EEC3_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::SpringBone { class SpringManager; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ABC_SPRINGBONE_TEMPAVATARCONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x22D84D0)
#define ABC_SPRINGBONE_TEMPAVATARCONTROLLER_EB7190F1D72CAFDF_OFFSET UNITYSDK_OFFSET(0x22D80E0)
#define ABC_SPRINGBONE_TEMPAVATARCONTROLLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x22D8370)
#define ABC_SPRINGBONE_TEMPAVATARCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int TempAvatarController_TypeDefinitionIndex = 7281;

	class TempAvatarController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* rootM; // 0x20
		::UnityEngine::Vector3 B34462F0AECB49D4; // 0x28
		::UnityEngine::Quaternion A759C1FAD7DEA9D5; // 0x34
		::UnityEngine::Vector3 B8B31398659C3F60; // 0x44
		::ABC::SpringBone::SpringManager* FF9897F7C291D777; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPAVATARCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPAVATARCONTROLLER_F328E4D8818B1E12_OFFSET))(this);
		}

		::UnityEngine::Transform* EB7190F1D72CAFDF(::UnityEngine::Transform* EFE497ABF6BF98D8, ::System::String* F79B4D487F303AB2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPAVATARCONTROLLER_EB7190F1D72CAFDF_OFFSET))(this, EFE497ABF6BF98D8, F79B4D487F303AB2);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_TEMPAVATARCONTROLLER_E02954280801633F_OFFSET))(this);
		}
	};
}

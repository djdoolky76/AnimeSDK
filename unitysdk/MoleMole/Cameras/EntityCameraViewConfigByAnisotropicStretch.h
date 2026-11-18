#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LKBDBNHPFGK.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x11E69450)
#define MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11E69360)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int EntityCameraViewConfigByAnisotropicStretch_TypeDefinitionIndex = 90808;

	class EntityCameraViewConfigByAnisotropicStretch : public ::System::Object
	{
	public:
		::System::String* mainPointHorizontal; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* attachPointsHorizontal; // 0x18
		::System::Single stretchRatioHorizontal; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* mainPointVertical; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* attachPointsVertical; // 0x30
		::System::Single stretchRatioVertical; // 0x38
		::UnityEngine::Vector3 offset; // 0x3C
		::System::Single fallbackVerticalRatio; // 0x48
		::System::Single heightExtension; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH__CTOR_OFFSET))(this);
		}

		::System::Void PKOGNPKCHHE(::System::UInt32 BKLGNCBNEGM, ::LKBDBNHPFGK& DENJNGAAIME)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::LKBDBNHPFGK&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ENTITYCAMERAVIEWCONFIGBYANISOTROPICSTRETCH_PKOGNPKCHHE_OFFSET))(this, BKLGNCBNEGM, DENJNGAAIME);
		}
	};
}

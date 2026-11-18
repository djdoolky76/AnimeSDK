#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CameraFrustumPlanesProvider; }

#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECAF460)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAF4A0)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C___CCTOR_B__13_0_OFFSET UNITYSDK_OFFSET(0x1ECAF4B0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CameraFrustumPlanesProvider___c_TypeDefinitionIndex = 37719;

	class CameraFrustumPlanesProvider___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider___c_TypeDefinitionIndex)->GetStaticField(0x2BF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CameraFrustumPlanesProvider* __cctor_b__13_0()
		{
			return ((::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER___C___CCTOR_B__13_0_OFFSET))(this);
		}
	};
}

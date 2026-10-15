#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC00EB0)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_JALJLLCDHHL_OFFSET UNITYSDK_OFFSET(0xDC00F80)
#define RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xDC00CE0)

namespace RPG::Client
{
	class PointsAnimRenderModule_PointsAnimRendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* Materials; // 0x18
		::System::UInt32 RenderingLayerMask; // 0x20
		::RPG::Client::TAUtils::SimpleTransform LocalTransform; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_CTOR_OFFSET))(this);
		}

		::System::Boolean JALJLLCDHHL(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_JALJLLCDHHL_OFFSET))(this, a1);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POINTSANIMRENDERMODULE_POINTSANIMRENDERERPACKAGE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}

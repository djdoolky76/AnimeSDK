#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DEBEAKKOHLN;

#define RPG_CLIENT_CHENLINGFESMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCAD1A40)
#define RPG_CLIENT_CHENLINGFESMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCAD19E0)
#define RPG_CLIENT_CHENLINGFESMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xCAD18F0)

namespace RPG::Client
{
	class ChenLingFesModelView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DEBEAKKOHLN* _RendererCache; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESMODELVIEW_ONDESTROY_OFFSET))(this);
		}

	};
}

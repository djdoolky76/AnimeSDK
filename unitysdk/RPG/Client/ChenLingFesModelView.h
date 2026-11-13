#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DEBEAKKOHLN;

#define RPG_CLIENT_CHENLINGFESMODELVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9AA60)
#define RPG_CLIENT_CHENLINGFESMODELVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CC9AA00)
#define RPG_CLIENT_CHENLINGFESMODELVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x1CC9A910)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesModelView_TypeDefinitionIndex = 62846;

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

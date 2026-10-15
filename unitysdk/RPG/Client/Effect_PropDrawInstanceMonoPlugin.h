#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD61C20)
#define RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_SETINSTANCEMATRICES_OFFSET UNITYSDK_OFFSET(0xCD61B70)

namespace RPG::Client
{
	class Effect_PropDrawInstanceMonoPlugin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void SetInstanceMatrices(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PROPDRAWINSTANCEMONOPLUGIN_SETINSTANCEMATRICES_OFFSET))(this, a1);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define AMPNMIBFGAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1558F860)
#define AMPNMIBFGAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1558F8A0)
#define AMPNMIBFGAM___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1558F8B0)

	class AMPNMIBFGAM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::GameObject*, ::RPG::Client::Prop::ChimeraPreparationState>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::GameObject*, ::RPG::Client::Prop::ChimeraPreparationState>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F660);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMPNMIBFGAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPNMIBFGAM___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState __ctor_b__5_0(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AMPNMIBFGAM___C___CTOR_B__5_0_OFFSET))(this, a1);
		}

	};

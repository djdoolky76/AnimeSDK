#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PIPELINECAMERAENGINE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB2D160)
#define RPG_CLIENT_PIPELINECAMERAENGINE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2D190)
#define RPG_CLIENT_PIPELINECAMERAENGINE___C___ONWORLDSHIFTING_B__56_0_OFFSET UNITYSDK_OFFSET(0xDB2D1A0)

namespace RPG::Client
{
	class PipelineCameraEngine___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x211E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x211E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnWorldShifting_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C___ONWORLDSHIFTING_B__56_0_OFFSET))(this);
		}

	};
}

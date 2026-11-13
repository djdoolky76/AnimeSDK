#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFADAC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFADB00)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsIssueTabItemControl___c_TypeDefinitionIndex = 83172;

	class LimaoNewsIssueTabItemControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x31930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSISSUETABITEMCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}

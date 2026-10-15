#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMIGGGFOGCN;
namespace System { class Object; }

#define KMIGGGFOGCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89BBF0)
#define KMIGGGFOGCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89BC30)
#define KMIGGGFOGCN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E89BC40)

	class KMIGGGFOGCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x227E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMIGGGFOGCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN___C_CTOR_OFFSET))(this);
		}

		::KMIGGGFOGCN* __cctor_b__18_0()
		{
			return ((::KMIGGGFOGCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIGGGFOGCN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

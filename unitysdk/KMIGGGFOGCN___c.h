#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMIGGGFOGCN;
namespace System { class Object; }

#define KMIGGGFOGCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86E620)
#define KMIGGGFOGCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E660)
#define KMIGGGFOGCN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E86E670)

inline static constexpr unsigned int KMIGGGFOGCN___c_TypeDefinitionIndex = 29850;

	class KMIGGGFOGCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F130);
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

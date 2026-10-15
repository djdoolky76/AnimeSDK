#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBCPGPMNECG;
namespace System { class Object; }

#define FBCPGPMNECG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E304B20)
#define FBCPGPMNECG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E304B50)
#define FBCPGPMNECG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E304B60)

inline static constexpr unsigned int FBCPGPMNECG___c_TypeDefinitionIndex = 29010;

	class FBCPGPMNECG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCPGPMNECG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG___C_CTOR_OFFSET))(this);
		}

		::FBCPGPMNECG* __cctor_b__28_0()
		{
			return ((::FBCPGPMNECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCPGPMNECG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

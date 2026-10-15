#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOOPILHHNFD;
namespace System { class Object; }

#define LOOPILHHNFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C71F0)
#define LOOPILHHNFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C7230)
#define LOOPILHHNFD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9C7240)

inline static constexpr unsigned int LOOPILHHNFD___c_TypeDefinitionIndex = 28095;

	class LOOPILHHNFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOOPILHHNFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPILHHNFD___C_CTOR_OFFSET))(this);
		}

		::LOOPILHHNFD* __cctor_b__38_0()
		{
			return ((::LOOPILHHNFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPILHHNFD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

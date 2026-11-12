#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGCPEPIOIO;
namespace System { class Object; }

#define EAGCPEPIOIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F509090)
#define EAGCPEPIOIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5090D0)
#define EAGCPEPIOIO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5090E0)

inline static constexpr unsigned int EAGCPEPIOIO___c_TypeDefinitionIndex = 29357;

	class EAGCPEPIOIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGCPEPIOIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO___C_CTOR_OFFSET))(this);
		}

		::EAGCPEPIOIO* __cctor_b__23_0()
		{
			return ((::EAGCPEPIOIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

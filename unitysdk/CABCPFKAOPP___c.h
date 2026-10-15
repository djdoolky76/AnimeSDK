#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABCPFKAOPP;
namespace System { class Object; }

#define CABCPFKAOPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0270C0)
#define CABCPFKAOPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E027100)
#define CABCPFKAOPP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E027110)

inline static constexpr unsigned int CABCPFKAOPP___c_TypeDefinitionIndex = 27058;

	class CABCPFKAOPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABCPFKAOPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP___C_CTOR_OFFSET))(this);
		}

		::CABCPFKAOPP* __cctor_b__38_0()
		{
			return ((::CABCPFKAOPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCPFKAOPP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

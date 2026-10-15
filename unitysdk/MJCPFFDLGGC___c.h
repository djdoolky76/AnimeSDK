#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJCPFFDLGGC;
namespace System { class Object; }

#define MJCPFFDLGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA46020)
#define MJCPFFDLGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA46060)
#define MJCPFFDLGGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA46070)

inline static constexpr unsigned int MJCPFFDLGGC___c_TypeDefinitionIndex = 32973;

	class MJCPFFDLGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJCPFFDLGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC___C_CTOR_OFFSET))(this);
		}

		::MJCPFFDLGGC* __cctor_b__28_0()
		{
			return ((::MJCPFFDLGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

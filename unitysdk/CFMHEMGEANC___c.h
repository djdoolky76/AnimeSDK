#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFMHEMGEANC;
namespace System { class Object; }

#define CFMHEMGEANC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1CAF0)
#define CFMHEMGEANC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD1CB30)
#define CFMHEMGEANC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD1CB40)

inline static constexpr unsigned int CFMHEMGEANC___c_TypeDefinitionIndex = 33586;

	class CFMHEMGEANC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xACF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFMHEMGEANC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC___C_CTOR_OFFSET))(this);
		}

		::CFMHEMGEANC* __cctor_b__23_0()
		{
			return ((::CFMHEMGEANC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

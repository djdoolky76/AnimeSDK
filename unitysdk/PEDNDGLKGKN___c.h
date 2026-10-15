#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEDNDGLKGKN;
namespace System { class Object; }

#define PEDNDGLKGKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7AC0)
#define PEDNDGLKGKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE7B00)
#define PEDNDGLKGKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEE7B10)

inline static constexpr unsigned int PEDNDGLKGKN___c_TypeDefinitionIndex = 32079;

	class PEDNDGLKGKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x308F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C_CTOR_OFFSET))(this);
		}

		::PEDNDGLKGKN* __cctor_b__28_0()
		{
			return ((::PEDNDGLKGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

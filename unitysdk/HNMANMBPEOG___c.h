#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNMANMBPEOG;
namespace System { class Object; }

#define HNMANMBPEOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3980)
#define HNMANMBPEOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B39C0)
#define HNMANMBPEOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B39D0)

inline static constexpr unsigned int HNMANMBPEOG___c_TypeDefinitionIndex = 33701;

	class HNMANMBPEOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMANMBPEOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG___C_CTOR_OFFSET))(this);
		}

		::HNMANMBPEOG* __cctor_b__28_0()
		{
			return ((::HNMANMBPEOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMANMBPEOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

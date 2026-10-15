#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKNFAFFEHDL;
namespace System { class Object; }

#define HKNFAFFEHDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B75C0)
#define HKNFAFFEHDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B7600)
#define HKNFAFFEHDL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B7610)

inline static constexpr unsigned int HKNFAFFEHDL___c_TypeDefinitionIndex = 26722;

	class HKNFAFFEHDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNFAFFEHDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL___C_CTOR_OFFSET))(this);
		}

		::HKNFAFFEHDL* __cctor_b__28_0()
		{
			return ((::HKNFAFFEHDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

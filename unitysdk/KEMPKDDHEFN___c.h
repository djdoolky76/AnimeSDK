#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEMPKDDHEFN;
namespace System { class Object; }

#define KEMPKDDHEFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E3B20)
#define KEMPKDDHEFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E3B60)
#define KEMPKDDHEFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7E3B70)

inline static constexpr unsigned int KEMPKDDHEFN___c_TypeDefinitionIndex = 33383;

	class KEMPKDDHEFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C_CTOR_OFFSET))(this);
		}

		::KEMPKDDHEFN* __cctor_b__23_0()
		{
			return ((::KEMPKDDHEFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

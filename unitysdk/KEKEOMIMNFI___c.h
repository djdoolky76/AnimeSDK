#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEKEOMIMNFI;
namespace System { class Object; }

#define KEKEOMIMNFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DFB30)
#define KEKEOMIMNFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DFB70)
#define KEKEOMIMNFI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7DFB80)

inline static constexpr unsigned int KEKEOMIMNFI___c_TypeDefinitionIndex = 26706;

	class KEKEOMIMNFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEKEOMIMNFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI___C_CTOR_OFFSET))(this);
		}

		::KEKEOMIMNFI* __cctor_b__28_0()
		{
			return ((::KEKEOMIMNFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKEOMIMNFI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMKJAANLKB;
namespace System { class Object; }

#define KLMKJAANLKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC0BC0)
#define KLMKJAANLKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC0C00)
#define KLMKJAANLKB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FDC0C10)

inline static constexpr unsigned int KLMKJAANLKB___c_TypeDefinitionIndex = 27055;

	class KLMKJAANLKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMKJAANLKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB___C_CTOR_OFFSET))(this);
		}

		::KLMKJAANLKB* __cctor_b__18_0()
		{
			return ((::KLMKJAANLKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMKJAANLKB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

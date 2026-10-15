#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHNBCLPNDFI;
namespace System { class Object; }

#define HHNBCLPNDFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55FA70)
#define HHNBCLPNDFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55FAB0)
#define HHNBCLPNDFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E55FAC0)

inline static constexpr unsigned int HHNBCLPNDFI___c_TypeDefinitionIndex = 29271;

	class HHNBCLPNDFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNBCLPNDFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI___C_CTOR_OFFSET))(this);
		}

		::HHNBCLPNDFI* __cctor_b__23_0()
		{
			return ((::HHNBCLPNDFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNBCLPNDFI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

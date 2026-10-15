#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GECHEPGEIKF;
namespace System { class Object; }

#define GECHEPGEIKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E425AA0)
#define GECHEPGEIKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E425AE0)
#define GECHEPGEIKF___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E425AF0)

inline static constexpr unsigned int GECHEPGEIKF___c_TypeDefinitionIndex = 28561;

	class GECHEPGEIKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GECHEPGEIKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECHEPGEIKF___C_CTOR_OFFSET))(this);
		}

		::GECHEPGEIKF* __cctor_b__53_0()
		{
			return ((::GECHEPGEIKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GECHEPGEIKF___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

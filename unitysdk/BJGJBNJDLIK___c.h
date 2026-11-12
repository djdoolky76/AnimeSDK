#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJGJBNJDLIK;
namespace System { class Object; }

#define BJGJBNJDLIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F167FF0)
#define BJGJBNJDLIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F168030)
#define BJGJBNJDLIK___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F168040)

inline static constexpr unsigned int BJGJBNJDLIK___c_TypeDefinitionIndex = 26023;

	class BJGJBNJDLIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C_CTOR_OFFSET))(this);
		}

		::BJGJBNJDLIK* __cctor_b__68_0()
		{
			return ((::BJGJBNJDLIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGJBNJDLIK___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};

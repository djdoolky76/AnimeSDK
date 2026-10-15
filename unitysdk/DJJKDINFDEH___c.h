#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJJKDINFDEH;
namespace System { class Object; }

#define DJJKDINFDEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19F560)
#define DJJKDINFDEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19F590)
#define DJJKDINFDEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E19F5A0)

inline static constexpr unsigned int DJJKDINFDEH___c_TypeDefinitionIndex = 35053;

	class DJJKDINFDEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x330B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJJKDINFDEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH___C_CTOR_OFFSET))(this);
		}

		::DJJKDINFDEH* __cctor_b__28_0()
		{
			return ((::DJJKDINFDEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJKDINFDEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

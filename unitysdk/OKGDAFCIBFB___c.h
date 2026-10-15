#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKGDAFCIBFB;
namespace System { class Object; }

#define OKGDAFCIBFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE99630)
#define OKGDAFCIBFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE99670)
#define OKGDAFCIBFB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE99680)

inline static constexpr unsigned int OKGDAFCIBFB___c_TypeDefinitionIndex = 33741;

	class OKGDAFCIBFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKGDAFCIBFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB___C_CTOR_OFFSET))(this);
		}

		::OKGDAFCIBFB* __cctor_b__28_0()
		{
			return ((::OKGDAFCIBFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGDAFCIBFB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

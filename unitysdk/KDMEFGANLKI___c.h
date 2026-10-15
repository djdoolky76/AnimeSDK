#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMEFGANLKI;
namespace System { class Object; }

#define KDMEFGANLKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D68C0)
#define KDMEFGANLKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D68F0)
#define KDMEFGANLKI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7D6900)

inline static constexpr unsigned int KDMEFGANLKI___c_TypeDefinitionIndex = 25359;

	class KDMEFGANLKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMEFGANLKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI___C_CTOR_OFFSET))(this);
		}

		::KDMEFGANLKI* __cctor_b__33_0()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMEFGANLKI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

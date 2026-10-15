#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFKMKMPKIEF;
namespace System { class Object; }

#define MFKMKMPKIEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1AD70)
#define MFKMKMPKIEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1ADB0)
#define MFKMKMPKIEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA1ADC0)

	class MFKMKMPKIEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C_CTOR_OFFSET))(this);
		}

		::MFKMKMPKIEF* __cctor_b__33_0()
		{
			return ((::MFKMKMPKIEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKMKMPKIEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

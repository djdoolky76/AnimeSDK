#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPJPHILONME;
namespace System { class Object; }

#define CPJPHILONME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13FFB0)
#define CPJPHILONME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13FFF0)
#define CPJPHILONME___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E140000)

	class CPJPHILONME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x229A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPJPHILONME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME___C_CTOR_OFFSET))(this);
		}

		::CPJPHILONME* __cctor_b__33_0()
		{
			return ((::CPJPHILONME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

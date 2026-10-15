#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBDLJKEBPHM;
namespace System { class Object; }

#define FBDLJKEBPHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E332D40)
#define FBDLJKEBPHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E332D80)
#define FBDLJKEBPHM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E332D90)

	class FBDLJKEBPHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBDLJKEBPHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM___C_CTOR_OFFSET))(this);
		}

		::FBDLJKEBPHM* __cctor_b__33_0()
		{
			return ((::FBDLJKEBPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBDLJKEBPHM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

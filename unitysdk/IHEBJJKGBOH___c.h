#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHEBJJKGBOH;
namespace System { class Object; }

#define IHEBJJKGBOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65AAF0)
#define IHEBJJKGBOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65AB30)
#define IHEBJJKGBOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E65AB40)

	class IHEBJJKGBOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C_CTOR_OFFSET))(this);
		}

		::IHEBJJKGBOH* __cctor_b__33_0()
		{
			return ((::IHEBJJKGBOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHEBJJKGBOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAOAFJLCIMO;
namespace System { class Object; }

#define HAOAFJLCIMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50AF30)
#define HAOAFJLCIMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50AF60)
#define HAOAFJLCIMO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E50AF70)

	class HAOAFJLCIMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAOAFJLCIMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO___C_CTOR_OFFSET))(this);
		}

		::HAOAFJLCIMO* __cctor_b__18_0()
		{
			return ((::HAOAFJLCIMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOAFJLCIMO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

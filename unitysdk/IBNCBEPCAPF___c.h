#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBNCBEPCAPF;
namespace System { class Object; }

#define IBNCBEPCAPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61B1C0)
#define IBNCBEPCAPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B200)
#define IBNCBEPCAPF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E61B210)

	class IBNCBEPCAPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C_CTOR_OFFSET))(this);
		}

		::IBNCBEPCAPF* __cctor_b__18_0()
		{
			return ((::IBNCBEPCAPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

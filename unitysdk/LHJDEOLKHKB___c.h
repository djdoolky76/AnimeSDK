#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHJDEOLKHKB;
namespace System { class Object; }

#define LHJDEOLKHKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E963E30)
#define LHJDEOLKHKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E963E70)
#define LHJDEOLKHKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E963E80)

	class LHJDEOLKHKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x419D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJDEOLKHKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB___C_CTOR_OFFSET))(this);
		}

		::LHJDEOLKHKB* __cctor_b__33_0()
		{
			return ((::LHJDEOLKHKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJDEOLKHKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

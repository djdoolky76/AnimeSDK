#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMPNLCOOGGD;
namespace System { class Object; }

#define IMPNLCOOGGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BC4F0)
#define IMPNLCOOGGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BC530)
#define IMPNLCOOGGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6BC540)

	class IMPNLCOOGGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMPNLCOOGGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD___C_CTOR_OFFSET))(this);
		}

		::IMPNLCOOGGD* __cctor_b__33_0()
		{
			return ((::IMPNLCOOGGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

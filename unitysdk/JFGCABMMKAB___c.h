#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFGCABMMKAB;
namespace System { class Object; }

#define JFGCABMMKAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72ADF0)
#define JFGCABMMKAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72AE20)
#define JFGCABMMKAB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E72AE30)

	class JFGCABMMKAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGCABMMKAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB___C_CTOR_OFFSET))(this);
		}

		::JFGCABMMKAB* __cctor_b__43_0()
		{
			return ((::JFGCABMMKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFGCABMMKAB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

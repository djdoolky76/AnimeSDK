#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAFNLKNKPBD;
namespace System { class Object; }

#define IAFNLKNKPBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E604960)
#define IAFNLKNKPBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6049A0)
#define IAFNLKNKPBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6049B0)

	class IAFNLKNKPBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFNLKNKPBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD___C_CTOR_OFFSET))(this);
		}

		::IAFNLKNKPBD* __cctor_b__28_0()
		{
			return ((::IAFNLKNKPBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFNLKNKPBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

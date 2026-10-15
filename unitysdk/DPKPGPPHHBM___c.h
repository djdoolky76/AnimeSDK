#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPKPGPPHHBM;
namespace System { class Object; }

#define DPKPGPPHHBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2131A0)
#define DPKPGPPHHBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2131E0)
#define DPKPGPPHHBM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2131F0)

	class DPKPGPPHHBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x461B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C_CTOR_OFFSET))(this);
		}

		::DPKPGPPHHBM* __cctor_b__28_0()
		{
			return ((::DPKPGPPHHBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKPGPPHHBM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

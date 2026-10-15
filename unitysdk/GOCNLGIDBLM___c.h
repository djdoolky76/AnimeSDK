#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCNLGIDBLM;
namespace System { class Object; }

#define GOCNLGIDBLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC300)
#define GOCNLGIDBLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EC340)
#define GOCNLGIDBLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4EC350)

	class GOCNLGIDBLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCNLGIDBLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM___C_CTOR_OFFSET))(this);
		}

		::GOCNLGIDBLM* __cctor_b__28_0()
		{
			return ((::GOCNLGIDBLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCNLGIDBLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

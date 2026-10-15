#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKIKOGNAECK;
namespace System { class Object; }

#define BKIKOGNAECK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF59710)
#define BKIKOGNAECK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF59750)
#define BKIKOGNAECK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF59760)

	class BKIKOGNAECK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKIKOGNAECK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK___C_CTOR_OFFSET))(this);
		}

		::BKIKOGNAECK* __cctor_b__28_0()
		{
			return ((::BKIKOGNAECK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIKOGNAECK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKFIKEAJFP;
namespace System { class Object; }

#define KIKFIKEAJFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E861E80)
#define KIKFIKEAJFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E861EC0)
#define KIKFIKEAJFP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E861ED0)

	class KIKFIKEAJFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C_CTOR_OFFSET))(this);
		}

		::KIKFIKEAJFP* __cctor_b__28_0()
		{
			return ((::KIKFIKEAJFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

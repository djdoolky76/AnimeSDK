#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPBDFINJGH;
namespace System { class Object; }

#define ELPBDFINJGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBC80)
#define ELPBDFINJGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DBCC0)
#define ELPBDFINJGH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2DBCD0)

	class ELPBDFINJGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPBDFINJGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH___C_CTOR_OFFSET))(this);
		}

		::ELPBDFINJGH* __cctor_b__33_0()
		{
			return ((::ELPBDFINJGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPBDFINJGH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

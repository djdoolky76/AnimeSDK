#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLLJIHLMKDI;
namespace System { class Object; }

#define FLLJIHLMKDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA0D0)
#define FLLJIHLMKDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA100)
#define FLLJIHLMKDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3DA110)

	class FLLJIHLMKDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C_CTOR_OFFSET))(this);
		}

		::FLLJIHLMKDI* __cctor_b__28_0()
		{
			return ((::FLLJIHLMKDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLJIHLMKDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

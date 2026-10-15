#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKPLFBLIDFF;
namespace System { class Object; }

#define OKPLFBLIDFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA2E40)
#define OKPLFBLIDFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA2E70)
#define OKPLFBLIDFF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEA2E80)

	class OKPLFBLIDFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x234A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKPLFBLIDFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF___C_CTOR_OFFSET))(this);
		}

		::OKPLFBLIDFF* __cctor_b__38_0()
		{
			return ((::OKPLFBLIDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPLFBLIDFF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

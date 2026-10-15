#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJPOKDFLDBJ;
namespace System { class Object; }

#define GJPOKDFLDBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AD8C0)
#define GJPOKDFLDBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AD8F0)
#define GJPOKDFLDBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4AD900)

	class GJPOKDFLDBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJPOKDFLDBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ___C_CTOR_OFFSET))(this);
		}

		::GJPOKDFLDBJ* __cctor_b__28_0()
		{
			return ((::GJPOKDFLDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

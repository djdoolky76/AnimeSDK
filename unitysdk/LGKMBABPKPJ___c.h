#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGKMBABPKPJ;
namespace System { class Object; }

#define LGKMBABPKPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E956010)
#define LGKMBABPKPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956050)
#define LGKMBABPKPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E956060)

	class LGKMBABPKPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKMBABPKPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ___C_CTOR_OFFSET))(this);
		}

		::LGKMBABPKPJ* __cctor_b__28_0()
		{
			return ((::LGKMBABPKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKMBABPKPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

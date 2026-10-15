#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNJMMFCCGFN;
namespace System { class Object; }

#define DNJMMFCCGFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F8200)
#define DNJMMFCCGFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F8240)
#define DNJMMFCCGFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F8250)

	class DNJMMFCCGFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x408E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C_CTOR_OFFSET))(this);
		}

		::DNJMMFCCGFN* __cctor_b__28_0()
		{
			return ((::DNJMMFCCGFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJMMFCCGFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

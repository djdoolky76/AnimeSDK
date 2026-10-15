#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMGBEEPNNHH;
namespace System { class Object; }

#define FMGBEEPNNHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E3690)
#define FMGBEEPNNHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E36D0)
#define FMGBEEPNNHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E36E0)

	class FMGBEEPNNHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C_CTOR_OFFSET))(this);
		}

		::FMGBEEPNNHH* __cctor_b__28_0()
		{
			return ((::FMGBEEPNNHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

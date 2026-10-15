#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOBAMBNCFDP;
namespace System { class Object; }

#define FOBAMBNCFDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7940)
#define FOBAMBNCFDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7980)
#define FOBAMBNCFDP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F7990)

	class FOBAMBNCFDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBAMBNCFDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP___C_CTOR_OFFSET))(this);
		}

		::FOBAMBNCFDP* __cctor_b__28_0()
		{
			return ((::FOBAMBNCFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

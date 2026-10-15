#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOMCONFODHH;
namespace System { class Object; }

#define FOMCONFODHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF540)
#define FOMCONFODHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FF580)
#define FOMCONFODHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3FF590)

	class FOMCONFODHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOMCONFODHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH___C_CTOR_OFFSET))(this);
		}

		::FOMCONFODHH* __cctor_b__28_0()
		{
			return ((::FOMCONFODHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCONFODHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

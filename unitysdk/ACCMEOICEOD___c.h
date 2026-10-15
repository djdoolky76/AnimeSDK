#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACCMEOICEOD;
namespace System { class Object; }

#define ACCMEOICEOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD85C0)
#define ACCMEOICEOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD8600)
#define ACCMEOICEOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDD8610)

	class ACCMEOICEOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACCMEOICEOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD___C_CTOR_OFFSET))(this);
		}

		::ACCMEOICEOD* __cctor_b__23_0()
		{
			return ((::ACCMEOICEOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCMEOICEOD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

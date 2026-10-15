#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGLOBODDMA;
namespace System { class Object; }

#define HPGLOBODDMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F65A0)
#define HPGLOBODDMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F65E0)
#define HPGLOBODDMA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F65F0)

	class HPGLOBODDMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x509C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGLOBODDMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA___C_CTOR_OFFSET))(this);
		}

		::HPGLOBODDMA* __cctor_b__23_0()
		{
			return ((::HPGLOBODDMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGLOBODDMA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

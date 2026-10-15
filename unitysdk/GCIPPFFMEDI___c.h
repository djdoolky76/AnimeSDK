#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCIPPFFMEDI;
namespace System { class Object; }

#define GCIPPFFMEDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43F070)
#define GCIPPFFMEDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43F0B0)
#define GCIPPFFMEDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E43F0C0)

	class GCIPPFFMEDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCIPPFFMEDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI___C_CTOR_OFFSET))(this);
		}

		::GCIPPFFMEDI* __cctor_b__23_0()
		{
			return ((::GCIPPFFMEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

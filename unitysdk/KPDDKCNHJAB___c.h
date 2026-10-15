#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDDKCNHJAB;
namespace System { class Object; }

#define KPDDKCNHJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BAEB0)
#define KPDDKCNHJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BAEF0)
#define KPDDKCNHJAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8BAF00)

	class KPDDKCNHJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C_CTOR_OFFSET))(this);
		}

		::KPDDKCNHJAB* __cctor_b__23_0()
		{
			return ((::KPDDKCNHJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

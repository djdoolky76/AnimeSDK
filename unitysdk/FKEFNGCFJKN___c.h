#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKEFNGCFJKN;
namespace System { class Object; }

#define FKEFNGCFJKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AE2D0)
#define FKEFNGCFJKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AE310)
#define FKEFNGCFJKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3AE320)

	class FKEFNGCFJKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKEFNGCFJKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN___C_CTOR_OFFSET))(this);
		}

		::FKEFNGCFJKN* __cctor_b__23_0()
		{
			return ((::FKEFNGCFJKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEFNGCFJKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

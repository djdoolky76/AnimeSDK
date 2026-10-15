#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEILNCDMAH;
namespace System { class Object; }

#define FCEILNCDMAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E345110)
#define FCEILNCDMAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E345140)
#define FCEILNCDMAH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E345150)

	class FCEILNCDMAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEILNCDMAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH___C_CTOR_OFFSET))(this);
		}

		::FCEILNCDMAH* __cctor_b__23_0()
		{
			return ((::FCEILNCDMAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEILNCDMAH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

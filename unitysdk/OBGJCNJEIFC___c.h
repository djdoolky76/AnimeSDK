#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBGJCNJEIFC;
namespace System { class Object; }

#define OBGJCNJEIFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAEE70)
#define OBGJCNJEIFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAEEB0)
#define OBGJCNJEIFC___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EBAEEC0)

	class OBGJCNJEIFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBGJCNJEIFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGJCNJEIFC___C_CTOR_OFFSET))(this);
		}

		::OBGJCNJEIFC* __cctor_b__48_0()
		{
			return ((::OBGJCNJEIFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGJCNJEIFC___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};

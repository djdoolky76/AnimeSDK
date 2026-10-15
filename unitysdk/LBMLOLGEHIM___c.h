#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMLOLGEHIM;
namespace System { class Object; }

#define LBMLOLGEHIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DFA20)
#define LBMLOLGEHIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DFA60)
#define LBMLOLGEHIM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8DFA70)

	class LBMLOLGEHIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBMLOLGEHIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM___C_CTOR_OFFSET))(this);
		}

		::LBMLOLGEHIM* __cctor_b__23_0()
		{
			return ((::LBMLOLGEHIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLOLGEHIM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

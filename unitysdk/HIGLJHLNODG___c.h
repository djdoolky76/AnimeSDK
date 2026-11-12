#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIGLJHLNODG;
namespace System { class Object; }

#define HIGLJHLNODG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F890690)
#define HIGLJHLNODG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8906D0)
#define HIGLJHLNODG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8906E0)

inline static constexpr unsigned int HIGLJHLNODG___c_TypeDefinitionIndex = 26946;

	class HIGLJHLNODG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGLJHLNODG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG___C_CTOR_OFFSET))(this);
		}

		::HIGLJHLNODG* __cctor_b__23_0()
		{
			return ((::HIGLJHLNODG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGLJHLNODG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

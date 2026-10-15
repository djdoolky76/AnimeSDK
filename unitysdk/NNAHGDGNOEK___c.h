#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAHGDGNOEK;
namespace System { class Object; }

#define NNAHGDGNOEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB50EA0)
#define NNAHGDGNOEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB50EE0)
#define NNAHGDGNOEK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB50EF0)

inline static constexpr unsigned int NNAHGDGNOEK___c_TypeDefinitionIndex = 34928;

	class NNAHGDGNOEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAHGDGNOEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK___C_CTOR_OFFSET))(this);
		}

		::NNAHGDGNOEK* __cctor_b__23_0()
		{
			return ((::NNAHGDGNOEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAHGDGNOEK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

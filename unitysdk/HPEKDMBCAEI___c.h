#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPEKDMBCAEI;
namespace System { class Object; }

#define HPEKDMBCAEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C7280)
#define HPEKDMBCAEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C72C0)
#define HPEKDMBCAEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5C72D0)

inline static constexpr unsigned int HPEKDMBCAEI___c_TypeDefinitionIndex = 31665;

	class HPEKDMBCAEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C_CTOR_OFFSET))(this);
		}

		::HPEKDMBCAEI* __cctor_b__23_0()
		{
			return ((::HPEKDMBCAEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPEKDMBCAEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

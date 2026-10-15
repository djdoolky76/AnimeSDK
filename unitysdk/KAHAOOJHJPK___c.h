#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAHAOOJHJPK;
namespace System { class Object; }

#define KAHAOOJHJPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B1500)
#define KAHAOOJHJPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B1540)
#define KAHAOOJHJPK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7B1550)

inline static constexpr unsigned int KAHAOOJHJPK___c_TypeDefinitionIndex = 29431;

	class KAHAOOJHJPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAHAOOJHJPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK___C_CTOR_OFFSET))(this);
		}

		::KAHAOOJHJPK* __cctor_b__23_0()
		{
			return ((::KAHAOOJHJPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

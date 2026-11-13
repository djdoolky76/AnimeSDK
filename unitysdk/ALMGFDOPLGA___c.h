#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALMGFDOPLGA;
namespace System { class Object; }

#define ALMGFDOPLGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2001FA80)
#define ALMGFDOPLGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2001FAB0)
#define ALMGFDOPLGA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2001FAC0)

inline static constexpr unsigned int ALMGFDOPLGA___c_TypeDefinitionIndex = 34050;

	class ALMGFDOPLGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALMGFDOPLGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA___C_CTOR_OFFSET))(this);
		}

		::ALMGFDOPLGA* __cctor_b__23_0()
		{
			return ((::ALMGFDOPLGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMGFDOPLGA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFMGAFOBPC;
namespace System { class Object; }

#define LIFMGAFOBPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC8E670)
#define LIFMGAFOBPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC8E6B0)
#define LIFMGAFOBPC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC8E6C0)

inline static constexpr unsigned int LIFMGAFOBPC___c_TypeDefinitionIndex = 31862;

	class LIFMGAFOBPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFMGAFOBPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC___C_CTOR_OFFSET))(this);
		}

		::LIFMGAFOBPC* __cctor_b__23_0()
		{
			return ((::LIFMGAFOBPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGAFOBPC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGADDFICJF;
namespace System { class Object; }

#define MNGADDFICJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F972A40)
#define MNGADDFICJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F972A80)
#define MNGADDFICJF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F972A90)

inline static constexpr unsigned int MNGADDFICJF___c_TypeDefinitionIndex = 31611;

	class MNGADDFICJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGADDFICJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGADDFICJF___C_CTOR_OFFSET))(this);
		}

		::MNGADDFICJF* __cctor_b__43_0()
		{
			return ((::MNGADDFICJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGADDFICJF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

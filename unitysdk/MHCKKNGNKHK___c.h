#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHCKKNGNKHK;
namespace System { class Object; }

#define MHCKKNGNKHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD7DE10)
#define MHCKKNGNKHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7DE40)
#define MHCKKNGNKHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD7DE50)

inline static constexpr unsigned int MHCKKNGNKHK___c_TypeDefinitionIndex = 28409;

	class MHCKKNGNKHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C_CTOR_OFFSET))(this);
		}

		::MHCKKNGNKHK* __cctor_b__28_0()
		{
			return ((::MHCKKNGNKHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCKKNGNKHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDKCEFMKPOB;
namespace System { class Object; }

#define GDKCEFMKPOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73AAD0)
#define GDKCEFMKPOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73AB00)
#define GDKCEFMKPOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F73AB10)

inline static constexpr unsigned int GDKCEFMKPOB___c_TypeDefinitionIndex = 32350;

	class GDKCEFMKPOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x576A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDKCEFMKPOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB___C_CTOR_OFFSET))(this);
		}

		::GDKCEFMKPOB* __cctor_b__23_0()
		{
			return ((::GDKCEFMKPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKCEFMKPOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

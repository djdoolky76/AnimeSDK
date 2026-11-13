#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFDAIBDBFEA;
namespace System { class Object; }

#define EFDAIBDBFEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20493B10)
#define EFDAIBDBFEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20493B50)
#define EFDAIBDBFEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20493B60)

inline static constexpr unsigned int EFDAIBDBFEA___c_TypeDefinitionIndex = 33564;

	class EFDAIBDBFEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ABA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDAIBDBFEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA___C_CTOR_OFFSET))(this);
		}

		::EFDAIBDBFEA* __cctor_b__38_0()
		{
			return ((::EFDAIBDBFEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDAIBDBFEA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

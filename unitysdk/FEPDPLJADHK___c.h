#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEPDPLJADHK;
namespace System { class Object; }

#define FEPDPLJADHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33C8F0)
#define FEPDPLJADHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33C930)
#define FEPDPLJADHK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E33C940)

inline static constexpr unsigned int FEPDPLJADHK___c_TypeDefinitionIndex = 27020;

	class FEPDPLJADHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEPDPLJADHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK___C_CTOR_OFFSET))(this);
		}

		::FEPDPLJADHK* __cctor_b__23_0()
		{
			return ((::FEPDPLJADHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPDPLJADHK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

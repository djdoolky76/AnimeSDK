#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOALCJNIJJC;
namespace System { class Object; }

#define HOALCJNIJJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E6710)
#define HOALCJNIJJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E6750)
#define HOALCJNIJJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5E6760)

inline static constexpr unsigned int HOALCJNIJJC___c_TypeDefinitionIndex = 30309;

	class HOALCJNIJJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOALCJNIJJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC___C_CTOR_OFFSET))(this);
		}

		::HOALCJNIJJC* __cctor_b__28_0()
		{
			return ((::HOALCJNIJJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOALCJNIJJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

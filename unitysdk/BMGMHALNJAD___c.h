#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMGMHALNJAD;
namespace System { class Object; }

#define BMGMHALNJAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2CBC50)
#define BMGMHALNJAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CBC80)
#define BMGMHALNJAD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F2CBC90)

inline static constexpr unsigned int BMGMHALNJAD___c_TypeDefinitionIndex = 27408;

	class BMGMHALNJAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGMHALNJAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD___C_CTOR_OFFSET))(this);
		}

		::BMGMHALNJAD* __cctor_b__38_0()
		{
			return ((::BMGMHALNJAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGMHALNJAD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

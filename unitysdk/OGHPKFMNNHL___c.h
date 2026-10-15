#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGHPKFMNNHL;
namespace System { class Object; }

#define OGHPKFMNNHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE27B00)
#define OGHPKFMNNHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE27B40)
#define OGHPKFMNNHL___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1DE27B50)

inline static constexpr unsigned int OGHPKFMNNHL___c_TypeDefinitionIndex = 27328;

	class OGHPKFMNNHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C_CTOR_OFFSET))(this);
		}

		::OGHPKFMNNHL* __cctor_b__113_0()
		{
			return ((::OGHPKFMNNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHPKFMNNHL___C___CCTOR_B__113_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHINIAKLBLJ;
namespace System { class Object; }

#define PHINIAKLBLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF105E0)
#define PHINIAKLBLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF10620)
#define PHINIAKLBLJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF10630)

inline static constexpr unsigned int PHINIAKLBLJ___c_TypeDefinitionIndex = 26140;

	class PHINIAKLBLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHINIAKLBLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINIAKLBLJ___C_CTOR_OFFSET))(this);
		}

		::PHINIAKLBLJ* __cctor_b__28_0()
		{
			return ((::PHINIAKLBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINIAKLBLJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAGJKBPPOKL;
namespace System { class Object; }

#define PAGJKBPPOKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEED1C0)
#define PAGJKBPPOKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEED200)
#define PAGJKBPPOKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEED210)

inline static constexpr unsigned int PAGJKBPPOKL___c_TypeDefinitionIndex = 33064;

	class PAGJKBPPOKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGJKBPPOKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL___C_CTOR_OFFSET))(this);
		}

		::PAGJKBPPOKL* __cctor_b__23_0()
		{
			return ((::PAGJKBPPOKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJKBPPOKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGGABPHCDA;
namespace System { class Object; }

#define ACGGABPHCDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDD2B0)
#define ACGGABPHCDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDD2F0)
#define ACGGABPHCDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDDD300)

inline static constexpr unsigned int ACGGABPHCDA___c_TypeDefinitionIndex = 32049;

	class ACGGABPHCDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGGABPHCDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA___C_CTOR_OFFSET))(this);
		}

		::ACGGABPHCDA* __cctor_b__28_0()
		{
			return ((::ACGGABPHCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGGABPHCDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJDPEBBFMG;
namespace System { class Object; }

#define GAJDPEBBFMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC3E8C0)
#define GAJDPEBBFMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3E8F0)
#define GAJDPEBBFMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC3E900)

inline static constexpr unsigned int GAJDPEBBFMG___c_TypeDefinitionIndex = 27804;

	class GAJDPEBBFMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJDPEBBFMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG___C_CTOR_OFFSET))(this);
		}

		::GAJDPEBBFMG* __cctor_b__23_0()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJDPEBBFMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

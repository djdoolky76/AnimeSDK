#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGAIEEIKOKK;
namespace System { class Object; }

#define BGAIEEIKOKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C430)
#define BGAIEEIKOKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C470)
#define BGAIEEIKOKK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FA0C480)

inline static constexpr unsigned int BGAIEEIKOKK___c_TypeDefinitionIndex = 27752;

	class BGAIEEIKOKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGAIEEIKOKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAIEEIKOKK___C_CTOR_OFFSET))(this);
		}

		::BGAIEEIKOKK* __cctor_b__38_0()
		{
			return ((::BGAIEEIKOKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAIEEIKOKK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

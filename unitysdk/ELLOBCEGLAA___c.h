#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELLOBCEGLAA;
namespace System { class Object; }

#define ELLOBCEGLAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206CDCF0)
#define ELLOBCEGLAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206CDD30)
#define ELLOBCEGLAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206CDD40)

inline static constexpr unsigned int ELLOBCEGLAA___c_TypeDefinitionIndex = 25684;

	class ELLOBCEGLAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x473D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELLOBCEGLAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA___C_CTOR_OFFSET))(this);
		}

		::ELLOBCEGLAA* __cctor_b__23_0()
		{
			return ((::ELLOBCEGLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLOBCEGLAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

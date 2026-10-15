#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDFPANILFOH;
namespace System { class Object; }

#define KDFPANILFOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D14D0)
#define KDFPANILFOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1510)
#define KDFPANILFOH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7D1520)

inline static constexpr unsigned int KDFPANILFOH___c_TypeDefinitionIndex = 35096;

	class KDFPANILFOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFPANILFOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH___C_CTOR_OFFSET))(this);
		}

		::KDFPANILFOH* __cctor_b__38_0()
		{
			return ((::KDFPANILFOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

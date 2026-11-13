#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJFCEEBAGMF;
namespace System { class Object; }

#define HJFCEEBAGMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201645D0)
#define HJFCEEBAGMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20164610)
#define HJFCEEBAGMF___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x20164620)

inline static constexpr unsigned int HJFCEEBAGMF___c_TypeDefinitionIndex = 29015;

	class HJFCEEBAGMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C_CTOR_OFFSET))(this);
		}

		::HJFCEEBAGMF* __cctor_b__73_0()
		{
			return ((::HJFCEEBAGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFCEEBAGMF___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};

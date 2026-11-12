#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGBGKFFAOL;
namespace System { class Object; }

#define ACGBGKFFAOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDEE70)
#define ACGBGKFFAOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDEEB0)
#define ACGBGKFFAOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFDEEC0)

inline static constexpr unsigned int ACGBGKFFAOL___c_TypeDefinitionIndex = 31221;

	class ACGBGKFFAOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x367C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGBGKFFAOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL___C_CTOR_OFFSET))(this);
		}

		::ACGBGKFFAOL* __cctor_b__23_0()
		{
			return ((::ACGBGKFFAOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

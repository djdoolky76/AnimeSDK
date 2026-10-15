#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKILNIGOKBF;
namespace System { class Object; }

#define FKILNIGOKBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E382F60)
#define FKILNIGOKBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E382FA0)
#define FKILNIGOKBF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E382FB0)

inline static constexpr unsigned int FKILNIGOKBF___c_TypeDefinitionIndex = 29544;

	class FKILNIGOKBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ABE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKILNIGOKBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKILNIGOKBF___C_CTOR_OFFSET))(this);
		}

		::FKILNIGOKBF* __cctor_b__23_0()
		{
			return ((::FKILNIGOKBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKILNIGOKBF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

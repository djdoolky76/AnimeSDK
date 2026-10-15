#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFFMLJMGOB;
namespace System { class Object; }

#define LKFFMLJMGOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98ED90)
#define LKFFMLJMGOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98EDD0)
#define LKFFMLJMGOB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E98EDE0)

inline static constexpr unsigned int LKFFMLJMGOB___c_TypeDefinitionIndex = 29871;

	class LKFFMLJMGOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKFFMLJMGOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB___C_CTOR_OFFSET))(this);
		}

		::LKFFMLJMGOB* __cctor_b__33_0()
		{
			return ((::LKFFMLJMGOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFFMLJMGOB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKFFMLJMGOB;
namespace System { class Object; }

#define LKFFMLJMGOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E961720)
#define LKFFMLJMGOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E961760)
#define LKFFMLJMGOB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E961770)

inline static constexpr unsigned int LKFFMLJMGOB___c_TypeDefinitionIndex = 29871;

	class LKFFMLJMGOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A490);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGNEKJDCMJ;
namespace System { class Object; }

#define IDGNEKJDCMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20138830)
#define IDGNEKJDCMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20138870)
#define IDGNEKJDCMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20138880)

inline static constexpr unsigned int IDGNEKJDCMJ___c_TypeDefinitionIndex = 29996;

	class IDGNEKJDCMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGNEKJDCMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ___C_CTOR_OFFSET))(this);
		}

		::IDGNEKJDCMJ* __cctor_b__23_0()
		{
			return ((::IDGNEKJDCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGNEKJDCMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

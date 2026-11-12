#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDBOCEIMACL;
namespace System { class Object; }

#define LDBOCEIMACL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC30FD0)
#define LDBOCEIMACL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC31010)
#define LDBOCEIMACL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC31020)

inline static constexpr unsigned int LDBOCEIMACL___c_TypeDefinitionIndex = 27770;

	class LDBOCEIMACL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDBOCEIMACL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL___C_CTOR_OFFSET))(this);
		}

		::LDBOCEIMACL* __cctor_b__33_0()
		{
			return ((::LDBOCEIMACL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBOCEIMACL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

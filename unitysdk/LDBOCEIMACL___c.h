#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDBOCEIMACL;
namespace System { class Object; }

#define LDBOCEIMACL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F2900)
#define LDBOCEIMACL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F2940)
#define LDBOCEIMACL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8F2950)

inline static constexpr unsigned int LDBOCEIMACL___c_TypeDefinitionIndex = 27239;

	class LDBOCEIMACL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x337D0);
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

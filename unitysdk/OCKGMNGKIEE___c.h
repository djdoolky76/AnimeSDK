#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCKGMNGKIEE;
namespace System { class Object; }

#define OCKGMNGKIEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB2950)
#define OCKGMNGKIEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB2990)
#define OCKGMNGKIEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDB29A0)

inline static constexpr unsigned int OCKGMNGKIEE___c_TypeDefinitionIndex = 28651;

	class OCKGMNGKIEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCKGMNGKIEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE___C_CTOR_OFFSET))(this);
		}

		::OCKGMNGKIEE* __cctor_b__28_0()
		{
			return ((::OCKGMNGKIEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

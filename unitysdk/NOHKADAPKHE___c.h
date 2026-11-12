#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHKADAPKHE;
namespace System { class Object; }

#define NOHKADAPKHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F07FA40)
#define NOHKADAPKHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07FA80)
#define NOHKADAPKHE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F07FA90)

inline static constexpr unsigned int NOHKADAPKHE___c_TypeDefinitionIndex = 30958;

	class NOHKADAPKHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHKADAPKHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE___C_CTOR_OFFSET))(this);
		}

		::NOHKADAPKHE* __cctor_b__33_0()
		{
			return ((::NOHKADAPKHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKADAPKHE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

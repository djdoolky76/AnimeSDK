#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEGONDHAJFG.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define DGHNGKJMLLL_ADD_ONFIRE_OFFSET UNITYSDK_OFFSET(0xF41C860)
#define DGHNGKJMLLL_LIPLDNMOLHE_OFFSET UNITYSDK_OFFSET(0xF41CA50)
#define DGHNGKJMLLL_PFGGLMDPPHB_OFFSET UNITYSDK_OFFSET(0xF41C9C0)
#define DGHNGKJMLLL_REMOVE_ONFIRE_OFFSET UNITYSDK_OFFSET(0xF41C910)

inline static constexpr unsigned int DGHNGKJMLLL_TypeDefinitionIndex = 50037;

	class DGHNGKJMLLL : public ::System::Object
	{
	public:
		static ::System::Action_1<::NEGONDHAJFG>** StaticGet_OnFire()
		{
			return (::System::Action_1<::NEGONDHAJFG>**)UnitySDK::FromName("", "DGHNGKJMLLL")->GetStaticField(0x5C4E0);
		}

		static ::System::Void add_OnFire(::System::Action_1<::NEGONDHAJFG>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::NEGONDHAJFG>*))((::PBYTE)hIl2Cpp + DGHNGKJMLLL_ADD_ONFIRE_OFFSET))(a1);
		}

		static ::System::Void remove_OnFire(::System::Action_1<::NEGONDHAJFG>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::NEGONDHAJFG>*))((::PBYTE)hIl2Cpp + DGHNGKJMLLL_REMOVE_ONFIRE_OFFSET))(a1);
		}

		static ::System::Void PFGGLMDPPHB(::NEGONDHAJFG a1)
		{
			return ((::System::Void(*)(::NEGONDHAJFG))((::PBYTE)hIl2Cpp + DGHNGKJMLLL_PFGGLMDPPHB_OFFSET))(a1);
		}

		static ::System::Boolean LIPLDNMOLHE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGHNGKJMLLL_LIPLDNMOLHE_OFFSET))();
		}

	};

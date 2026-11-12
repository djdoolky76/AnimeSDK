#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define LDHPMGJGPNL_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xBEB8660)
#define LDHPMGJGPNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB8720)

inline static constexpr unsigned int LDHPMGJGPNL_TypeDefinitionIndex = 65587;

	class LDHPMGJGPNL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDHPMGJGPNL_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + LDHPMGJGPNL_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

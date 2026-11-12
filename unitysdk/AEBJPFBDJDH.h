#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define AEBJPFBDJDH_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB7AFEE0)
#define AEBJPFBDJDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AFFA0)

inline static constexpr unsigned int AEBJPFBDJDH_TypeDefinitionIndex = 65594;

	class AEBJPFBDJDH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBJPFBDJDH_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + AEBJPFBDJDH_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

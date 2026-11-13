#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDOIAPPMBF;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define FBFHFFPMGCC_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1BA48E30)
#define FBFHFFPMGCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA48EB0)

inline static constexpr unsigned int FBFHFFPMGCC_TypeDefinitionIndex = 65592;

	class FBFHFFPMGCC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHFFPMGCC_CTOR_OFFSET))(this);
		}

		::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + FBFHFFPMGCC_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

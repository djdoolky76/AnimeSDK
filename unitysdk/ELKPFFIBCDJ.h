#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define ELKPFFIBCDJ_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1551AB60)
#define ELKPFFIBCDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1551AD00)

inline static constexpr unsigned int ELKPFFIBCDJ_TypeDefinitionIndex = 59956;

	class ELKPFFIBCDJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELKPFFIBCDJ_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + ELKPFFIBCDJ_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

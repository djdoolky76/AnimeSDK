#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define DJDFIMOEDJD_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x18BE1D00)
#define DJDFIMOEDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x18BE21B0)

inline static constexpr unsigned int DJDFIMOEDJD_TypeDefinitionIndex = 61233;

	class DJDFIMOEDJD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJDFIMOEDJD_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + DJDFIMOEDJD_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define DJDFIMOEDJD_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xF22DFC0)
#define DJDFIMOEDJD_CTOR_OFFSET UNITYSDK_OFFSET(0xF22E470)

inline static constexpr unsigned int DJDFIMOEDJD_TypeDefinitionIndex = 59949;

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

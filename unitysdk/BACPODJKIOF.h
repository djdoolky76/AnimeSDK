#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define BACPODJKIOF_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x15BD6E40)
#define BACPODJKIOF_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD6FE0)

	class BACPODJKIOF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPODJKIOF_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + BACPODJKIOF_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

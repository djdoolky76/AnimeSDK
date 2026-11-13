#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define PJCDACCENIO_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1A9E0290)
#define PJCDACCENIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E0380)

inline static constexpr unsigned int PJCDACCENIO_TypeDefinitionIndex = 61242;

	class PJCDACCENIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJCDACCENIO_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + PJCDACCENIO_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

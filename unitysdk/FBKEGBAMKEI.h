#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDMIIEDMLI_CFHOMFLPNNO;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define FBKEGBAMKEI_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x165B9340)
#define FBKEGBAMKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x165B9430)

inline static constexpr unsigned int FBKEGBAMKEI_TypeDefinitionIndex = 61234;

	class FBKEGBAMKEI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKEGBAMKEI_CTOR_OFFSET))(this);
		}

		::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + FBKEGBAMKEI_BEJAJNEFHIB_OFFSET))(this, a1);
		}

	};

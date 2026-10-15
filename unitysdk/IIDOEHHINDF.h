#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class CDEAABODKCP;
class NJKFOJJDGGG;

#define IIDOEHHINDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1642BF80)
#define IIDOEHHINDF_EOMJBFAECGD_OFFSET UNITYSDK_OFFSET(0x1642BD60)
#define IIDOEHHINDF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1642BCD0)
#define IIDOEHHINDF_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1642BE50)
#define IIDOEHHINDF_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1642BE00)
#define IIDOEHHINDF_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x1642BDB0)
#define IIDOEHHINDF_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1642BD20)

inline static constexpr unsigned int IIDOEHHINDF_TypeDefinitionIndex = 64842;

	class IIDOEHHINDF : public ::AMCOEFHHBPO
	{
	public:
		::System::Boolean EMINADBJHLG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IIDOEHHINDF_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATESTART_OFFSET))(this);
		}

		::System::Void EOMJBFAECGD(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + IIDOEHHINDF_EOMJBFAECGD_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDOEHHINDF_UPDATEDONE_OFFSET))(this);
		}

	};

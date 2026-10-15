#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHPMGBPDP;
class JEBFGDPAHDO;
class OIKDEOMMOAM;

#define BAPEBJHCHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E7FDC0)
#define BAPEBJHCHCC_EKKIGCOJBMP_OFFSET UNITYSDK_OFFSET(0x15E7FD10)
#define BAPEBJHCHCC_GFHPEEPGLPO_OFFSET UNITYSDK_OFFSET(0x15E7FCB0)
#define BAPEBJHCHCC_OCFMAIFBGMF_OFFSET UNITYSDK_OFFSET(0x15E7FC50)
#define BAPEBJHCHCC_OFBGILCPEOB_OFFSET UNITYSDK_OFFSET(0x15E7FBB0)

inline static constexpr unsigned int BAPEBJHCHCC_TypeDefinitionIndex = 54119;

	class BAPEBJHCHCC : public ::System::Object
	{
	public:
		::JEBFGDPAHDO* LMOAPIDMIOF; // 0x10
		::Il2CppArray<::JEBFGDPAHDO*>* JDPMPPMOHEK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPEBJHCHCC_CTOR_OFFSET))(this);
		}

		::System::Void OFBGILCPEOB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAPEBJHCHCC_OFBGILCPEOB_OFFSET))(this, a1);
		}

		::System::Void OCFMAIFBGMF(::BKHHPMGBPDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHPMGBPDP*))((::PBYTE)hIl2Cpp + BAPEBJHCHCC_OCFMAIFBGMF_OFFSET))(this, a1);
		}

		::System::Void GFHPEEPGLPO(::BKHHPMGBPDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHPMGBPDP*))((::PBYTE)hIl2Cpp + BAPEBJHCHCC_GFHPEEPGLPO_OFFSET))(this, a1);
		}

		::System::Void EKKIGCOJBMP(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + BAPEBJHCHCC_EKKIGCOJBMP_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOAJCBHEECN;
class GCIMMDDIFBJ;

#define DOAJCBHEECN_AIJAHNMCIDD_FNPGKKBPINE_OFFSET UNITYSDK_OFFSET(0x12428750)
#define DOAJCBHEECN_AIJAHNMCIDD_GCFILHEEOOD_OFFSET UNITYSDK_OFFSET(0x12428700)
#define DOAJCBHEECN_AIJAHNMCIDD_IFKNAJMIFMF_OFFSET UNITYSDK_OFFSET(0x124286B0)
#define DOAJCBHEECN_AIJAHNMCIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x124286A0)

inline static constexpr unsigned int DOAJCBHEECN_AIJAHNMCIDD_TypeDefinitionIndex = 66645;

class DOAJCBHEECN_AIJAHNMCIDD : public ::System::Object
{
public:
	::GCIMMDDIFBJ* CJGMCFHGHKB; // 0x10
	::DOAJCBHEECN* KLHPEBKNIFB; // 0x18
	::System::Int32 FMGMAFKNICP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_AIJAHNMCIDD__CTOR_OFFSET))(this);
	}

	::System::Void IFKNAJMIFMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_AIJAHNMCIDD_IFKNAJMIFMF_OFFSET))(this);
	}

	::System::Void GCFILHEEOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_AIJAHNMCIDD_GCFILHEEOOD_OFFSET))(this);
	}

	::System::Void FNPGKKBPINE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOAJCBHEECN_AIJAHNMCIDD_FNPGKKBPINE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKNFLPDIAGE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define IKNFLPDIAGE_KNJJMHJAEFA_HCIKOEPHFPC_OFFSET UNITYSDK_OFFSET(0x1ACB7AD0)
#define IKNFLPDIAGE_KNJJMHJAEFA_HLACHAMFPIK_OFFSET UNITYSDK_OFFSET(0x1ACB7B50)
#define IKNFLPDIAGE_KNJJMHJAEFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB7AC0)

inline static constexpr unsigned int IKNFLPDIAGE_KNJJMHJAEFA_TypeDefinitionIndex = 81820;

class IKNFLPDIAGE_KNJJMHJAEFA : public ::System::Object
{
public:
	::System::Action* COFINDNEAHE; // 0x10
	::IKNFLPDIAGE* KLHPEBKNIFB; // 0x18
	::System::Action* LPFMDKKFMBA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_KNJJMHJAEFA__CTOR_OFFSET))(this);
	}

	::System::Void HCIKOEPHFPC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_KNJJMHJAEFA_HCIKOEPHFPC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void HLACHAMFPIK(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_KNJJMHJAEFA_HLACHAMFPIK_OFFSET))(this, BLLNHDIDKPA);
	}
};

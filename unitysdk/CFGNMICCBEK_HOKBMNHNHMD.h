#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class ODNJIAGGDMG;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_HOKBMNHNHMD_GCFJMBJMOOG_OFFSET UNITYSDK_OFFSET(0x199FDF80)
#define CFGNMICCBEK_HOKBMNHNHMD_KMOCIJOCLCK_OFFSET UNITYSDK_OFFSET(0x199FE080)
#define CFGNMICCBEK_HOKBMNHNHMD__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDF70)

inline static constexpr unsigned int CFGNMICCBEK_HOKBMNHNHMD_TypeDefinitionIndex = 91436;

class CFGNMICCBEK_HOKBMNHNHMD : public ::System::Object
{
public:
	::System::Action_1<::ODNJIAGGDMG*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HOKBMNHNHMD__CTOR_OFFSET))(this);
	}

	::System::Void GCFJMBJMOOG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HOKBMNHNHMD_GCFJMBJMOOG_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void KMOCIJOCLCK(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HOKBMNHNHMD_KMOCIJOCLCK_OFFSET))(this, NFFNEFLKPDG);
	}
};

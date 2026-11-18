#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFBGIHDPHBF;
class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_PKNKMHBGHHB_CEDCCEDBBLD_OFFSET UNITYSDK_OFFSET(0x15BA63A0)
#define KOFFNLFMDHN_PKNKMHBGHHB_MBLCELLMEDN_OFFSET UNITYSDK_OFFSET(0x15BA6480)
#define KOFFNLFMDHN_PKNKMHBGHHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6390)

inline static constexpr unsigned int KOFFNLFMDHN_PKNKMHBGHHB_TypeDefinitionIndex = 60125;

class KOFFNLFMDHN_PKNKMHBGHHB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::BFBGIHDPHBF* LJBPECKCCEA; // 0x18
	::System::Int32 HALFGBEAKAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PKNKMHBGHHB__CTOR_OFFSET))(this);
	}

	::System::Void CEDCCEDBBLD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PKNKMHBGHHB_CEDCCEDBBLD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MBLCELLMEDN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_PKNKMHBGHHB_MBLCELLMEDN_OFFSET))(this, GLAOEHCGCFO);
	}
};

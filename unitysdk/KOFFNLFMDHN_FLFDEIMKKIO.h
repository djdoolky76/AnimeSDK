#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFBGIHDPHBF;
class OAEFGCLEHHO;
namespace System { class Action; }

#define KOFFNLFMDHN_FLFDEIMKKIO_NNNAHBOHFIJ_OFFSET UNITYSDK_OFFSET(0x15802D70)
#define KOFFNLFMDHN_FLFDEIMKKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15802D60)

inline static constexpr unsigned int KOFFNLFMDHN_FLFDEIMKKIO_TypeDefinitionIndex = 60121;

class KOFFNLFMDHN_FLFDEIMKKIO : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::BFBGIHDPHBF* LJBPECKCCEA; // 0x18
	::System::Int32 HPEMFJDOAKL; // 0x20
	::System::Int32 HALFGBEAKAK; // 0x24
	::System::Int32 IFKAPJDEFPC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_FLFDEIMKKIO__CTOR_OFFSET))(this);
	}

	::System::Void NNNAHBOHFIJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_FLFDEIMKKIO_NNNAHBOHFIJ_OFFSET))(this, GLAOEHCGCFO);
	}
};

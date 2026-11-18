#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_KBAHEJFGHOC_JCJOJJODLFG_OFFSET UNITYSDK_OFFSET(0x17671FC0)
#define KNLPPPOKJJM_KBAHEJFGHOC_LGMHHJCLPAG_OFFSET UNITYSDK_OFFSET(0x176720B0)
#define KNLPPPOKJJM_KBAHEJFGHOC__CTOR_OFFSET UNITYSDK_OFFSET(0x17671FB0)

inline static constexpr unsigned int KNLPPPOKJJM_KBAHEJFGHOC_TypeDefinitionIndex = 67493;

class KNLPPPOKJJM_KBAHEJFGHOC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KBAHEJFGHOC__CTOR_OFFSET))(this);
	}

	::System::Void JCJOJJODLFG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KBAHEJFGHOC_JCJOJJODLFG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LGMHHJCLPAG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_KBAHEJFGHOC_LGMHHJCLPAG_OFFSET))(this, BHDNBGLCNOM);
	}
};

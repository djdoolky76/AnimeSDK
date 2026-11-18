#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAIGPCEOGKF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OBOPDFEMAFJ.h"

class MOBNLGMENEM;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define JFAAKJNJMBE_AEBDEJBPPHD_BJKGGJGPJID_OFFSET UNITYSDK_OFFSET(0x13ACB600)
#define JFAAKJNJMBE_AEBDEJBPPHD_PFEHNCDJPGJ_OFFSET UNITYSDK_OFFSET(0x13ACB5A0)
#define JFAAKJNJMBE_AEBDEJBPPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACB590)

inline static constexpr unsigned int JFAAKJNJMBE_AEBDEJBPPHD_TypeDefinitionIndex = 68429;

class JFAAKJNJMBE_AEBDEJBPPHD : public ::System::Object
{
public:
	::System::Action* FANBLHJIKOH; // 0x10
	::MOBNLGMENEM* FJHFODJIIHA; // 0x18
	::System::Action_2<::MOBNLGMENEM*, ::MAIGPCEOGKF>* MPHAAKDHOFE; // 0x20
	::MAIGPCEOGKF GFLGEJAKCKE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_AEBDEJBPPHD__CTOR_OFFSET))(this);
	}

	::System::Void PFEHNCDJPGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_AEBDEJBPPHD_PFEHNCDJPGJ_OFFSET))(this);
	}

	::System::Void BJKGGJGPJID(::OBOPDFEMAFJ NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OBOPDFEMAFJ))((::PBYTE)hIl2Cpp + JFAAKJNJMBE_AEBDEJBPPHD_BJKGGJGPJID_OFFSET))(this, NFFNEFLKPDG);
	}
};

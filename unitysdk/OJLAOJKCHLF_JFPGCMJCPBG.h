#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGCPJNAGCHA;
class OAEFGCLEHHO;
class OJLAOJKCHLF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJLAOJKCHLF_JFPGCMJCPBG_JBNEIKDEDDO_OFFSET UNITYSDK_OFFSET(0x18448440)
#define OJLAOJKCHLF_JFPGCMJCPBG_LLFCMDJLLKN_OFFSET UNITYSDK_OFFSET(0x18448490)
#define OJLAOJKCHLF_JFPGCMJCPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x18448430)

inline static constexpr unsigned int OJLAOJKCHLF_JFPGCMJCPBG_TypeDefinitionIndex = 63863;

class OJLAOJKCHLF_JFPGCMJCPBG : public ::System::Object
{
public:
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x18
	::System::Collections::Generic::List_1<::MGCPJNAGCHA*>* KOIOFIGAPEL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_JFPGCMJCPBG__CTOR_OFFSET))(this);
	}

	::System::Void JBNEIKDEDDO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_JFPGCMJCPBG_JBNEIKDEDDO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LLFCMDJLLKN(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_JFPGCMJCPBG_LLFCMDJLLKN_OFFSET))(this, KGFGOODAFDH);
	}
};

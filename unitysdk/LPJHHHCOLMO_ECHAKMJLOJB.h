#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class PFOOLDNOBJF;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_ECHAKMJLOJB_ADBMHMKNPGL_OFFSET UNITYSDK_OFFSET(0x1A62E4D0)
#define LPJHHHCOLMO_ECHAKMJLOJB_GAJBPNIPCPD_OFFSET UNITYSDK_OFFSET(0x1A62E520)
#define LPJHHHCOLMO_ECHAKMJLOJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62E4C0)

inline static constexpr unsigned int LPJHHHCOLMO_ECHAKMJLOJB_TypeDefinitionIndex = 46625;

class LPJHHHCOLMO_ECHAKMJLOJB : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::PFOOLDNOBJF*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_ECHAKMJLOJB__CTOR_OFFSET))(this);
	}

	::System::Void ADBMHMKNPGL(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_ECHAKMJLOJB_ADBMHMKNPGL_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void GAJBPNIPCPD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_ECHAKMJLOJB_GAJBPNIPCPD_OFFSET))(this, GLAOEHCGCFO);
	}
};

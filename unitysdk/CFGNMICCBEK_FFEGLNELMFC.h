#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFGNMICCBEK;
class MOIDLOBHMCO;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_FFEGLNELMFC_KJGEDIALBKC_OFFSET UNITYSDK_OFFSET(0x16A1DE10)
#define CFGNMICCBEK_FFEGLNELMFC_LMDBMPJIDKJ_OFFSET UNITYSDK_OFFSET(0x16A1DC80)
#define CFGNMICCBEK_FFEGLNELMFC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A16A10)

inline static constexpr unsigned int CFGNMICCBEK_FFEGLNELMFC_TypeDefinitionIndex = 91458;

class CFGNMICCBEK_FFEGLNELMFC : public ::System::Object
{
public:
	::System::Action_1<::MOIDLOBHMCO*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18
	::CFGNMICCBEK* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FFEGLNELMFC__CTOR_OFFSET))(this);
	}

	::System::Void LMDBMPJIDKJ(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FFEGLNELMFC_LMDBMPJIDKJ_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void KJGEDIALBKC(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_FFEGLNELMFC_KJGEDIALBKC_OFFSET))(this, DJCNCELJPOM);
	}
};

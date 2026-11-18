#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_LPKBIEODJFK_HGCLEAOJODN_OFFSET UNITYSDK_OFFSET(0xD40FB60)
#define KNLPPPOKJJM_LPKBIEODJFK_KEKPHOOOABE_OFFSET UNITYSDK_OFFSET(0xD40FC50)
#define KNLPPPOKJJM_LPKBIEODJFK__CTOR_OFFSET UNITYSDK_OFFSET(0xD40FB50)

inline static constexpr unsigned int KNLPPPOKJJM_LPKBIEODJFK_TypeDefinitionIndex = 67500;

class KNLPPPOKJJM_LPKBIEODJFK : public ::System::Object
{
public:
	::System::Action_1<::System::UInt64>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LPKBIEODJFK__CTOR_OFFSET))(this);
	}

	::System::Void HGCLEAOJODN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LPKBIEODJFK_HGCLEAOJODN_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void KEKPHOOOABE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_LPKBIEODJFK_KEKPHOOOABE_OFFSET))(this, BHDNBGLCNOM);
	}
};

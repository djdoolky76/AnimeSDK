#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IKNFLPDIAGE_IKAPDIPMBNK_LIMIFNMBABD_OFFSET UNITYSDK_OFFSET(0x16AA5E60)
#define IKNFLPDIAGE_IKAPDIPMBNK_NPNGBNDLEGH_OFFSET UNITYSDK_OFFSET(0x16AA5EB0)
#define IKNFLPDIAGE_IKAPDIPMBNK__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA5E50)

inline static constexpr unsigned int IKNFLPDIAGE_IKAPDIPMBNK_TypeDefinitionIndex = 81824;

class IKNFLPDIAGE_IKAPDIPMBNK : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_IKAPDIPMBNK__CTOR_OFFSET))(this);
	}

	::System::Void LIMIFNMBABD(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_IKAPDIPMBNK_LIMIFNMBABD_OFFSET))(this, BLLNHDIDKPA);
	}

	::System::Void NPNGBNDLEGH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE_IKAPDIPMBNK_NPNGBNDLEGH_OFFSET))(this, BHDNBGLCNOM);
	}
};

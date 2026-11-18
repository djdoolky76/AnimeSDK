#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OIHMEMLGIBG;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_AIEGEIKAICL_BNHHIFNFPOE_OFFSET UNITYSDK_OFFSET(0x1694D300)
#define CFGNMICCBEK_AIEGEIKAICL_ODGIMALLINK_OFFSET UNITYSDK_OFFSET(0x1694D150)
#define CFGNMICCBEK_AIEGEIKAICL__CTOR_OFFSET UNITYSDK_OFFSET(0x1694D140)

inline static constexpr unsigned int CFGNMICCBEK_AIEGEIKAICL_TypeDefinitionIndex = 91454;

class CFGNMICCBEK_AIEGEIKAICL : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* BLLNHDIDKPA; // 0x10
	::System::Action_1<::OIHMEMLGIBG*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AIEGEIKAICL__CTOR_OFFSET))(this);
	}

	::System::Void ODGIMALLINK(::OAEFGCLEHHO* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AIEGEIKAICL_ODGIMALLINK_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void BNHHIFNFPOE(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_AIEGEIKAICL_BNHHIFNFPOE_OFFSET))(this, DJCNCELJPOM);
	}
};

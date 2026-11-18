#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_NDCGDCDHELH_CIOAHJLNCBI_OFFSET UNITYSDK_OFFSET(0xEBB8E40)
#define IEDHKGPALKM_NDCGDCDHELH_OJHFGHJDDPL_OFFSET UNITYSDK_OFFSET(0xEBB8E50)
#define IEDHKGPALKM_NDCGDCDHELH__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB8E30)

inline static constexpr unsigned int IEDHKGPALKM_NDCGDCDHELH_TypeDefinitionIndex = 89854;

class IEDHKGPALKM_NDCGDCDHELH : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NDCGDCDHELH__CTOR_OFFSET))(this);
	}

	::System::Void CIOAHJLNCBI(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NDCGDCDHELH_CIOAHJLNCBI_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void OJHFGHJDDPL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_NDCGDCDHELH_OJHFGHJDDPL_OFFSET))(this, PIIPCLCCOIG);
	}
};

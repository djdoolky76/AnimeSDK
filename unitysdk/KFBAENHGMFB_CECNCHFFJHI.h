#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GABPBGLMHBA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define KFBAENHGMFB_CECNCHFFJHI_FMKCDIKMCME_OFFSET UNITYSDK_OFFSET(0xD3F2020)
#define KFBAENHGMFB_CECNCHFFJHI_PJFELNKNDIJ_OFFSET UNITYSDK_OFFSET(0xD3F1FB0)
#define KFBAENHGMFB_CECNCHFFJHI__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F1FA0)

inline static constexpr unsigned int KFBAENHGMFB_CECNCHFFJHI_TypeDefinitionIndex = 78597;

class KFBAENHGMFB_CECNCHFFJHI : public ::System::Object
{
public:
	::System::Action_1<::GABPBGLMHBA*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* IOLCMHKHKGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_CECNCHFFJHI__CTOR_OFFSET))(this);
	}

	::System::Void PJFELNKNDIJ(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_CECNCHFFJHI_PJFELNKNDIJ_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void FMKCDIKMCME(::OAEFGCLEHHO* DAJPJKMHMFN)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_CECNCHFFJHI_FMKCDIKMCME_OFFSET))(this, DAJPJKMHMFN);
	}
};

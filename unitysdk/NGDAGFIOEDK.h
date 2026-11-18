#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFFLAMAFFLH.h"

class CLIPPFJKIGI;
class CNBBKIKPFKA;
class NGDAGFIOEDK_FEIAPJFMECM;
namespace System { template <typename T> class Action_1; }

#define NGDAGFIOEDK_CLMJOFIDANF_OFFSET UNITYSDK_OFFSET(0x105B7040)
#define NGDAGFIOEDK_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x105B6D60)
#define NGDAGFIOEDK_LICFPKEMEFF_OFFSET UNITYSDK_OFFSET(0x105B70B0)
#define NGDAGFIOEDK_MAAEBGECNHI_OFFSET UNITYSDK_OFFSET(0x105B70C0)
#define NGDAGFIOEDK_ONLGKCLFEKC_OFFSET UNITYSDK_OFFSET(0x105B6CB0)
#define NGDAGFIOEDK_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x105B6CC0)
#define NGDAGFIOEDK__CTOR_OFFSET UNITYSDK_OFFSET(0x105B70A0)

inline static constexpr unsigned int NGDAGFIOEDK_TypeDefinitionIndex = 49786;

class NGDAGFIOEDK : public ::System::Object
{
public:
	::NGDAGFIOEDK_FEIAPJFMECM* FFLOKJBCBCJ; // 0x10
	::System::Action_1<::CLIPPFJKIGI*>* _BANNIJFEOEE_k__BackingField; // 0x18
	::System::Single FNIOPKPHDEH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDAGFIOEDK__CTOR_OFFSET))(this);
	}

	::System::Void ONLGKCLFEKC(::System::Action_1<::CLIPPFJKIGI*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::CLIPPFJKIGI*>*))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_ONLGKCLFEKC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PGHAJOMNDDJ(::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_PGHAJOMNDDJ_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void EDEFLFIKNFK(::HFFLAMAFFLH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFFLAMAFFLH&))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_EDEFLFIKNFK_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void CLMJOFIDANF(::CNBBKIKPFKA* DNOHELNGGLJ)
	{
		return ((::System::Void(*)(::PVOID, ::CNBBKIKPFKA*))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_CLMJOFIDANF_OFFSET))(this, DNOHELNGGLJ);
	}

	::System::Action_1<::CLIPPFJKIGI*>* LICFPKEMEFF()
	{
		return ((::System::Action_1<::CLIPPFJKIGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_LICFPKEMEFF_OFFSET))(this);
	}

	::System::Void MAAEBGECNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDAGFIOEDK_MAAEBGECNHI_OFFSET))(this);
	}
};

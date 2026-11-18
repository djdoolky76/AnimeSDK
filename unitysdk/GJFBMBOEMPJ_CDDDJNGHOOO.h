#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GJFBMBOEMPJ_CDDDJNGHOOO_DHFHLOCBKHD_OFFSET UNITYSDK_OFFSET(0x15F239F0)
#define GJFBMBOEMPJ_CDDDJNGHOOO_JPPNEEBKNNE_OFFSET UNITYSDK_OFFSET(0x15F23A80)
#define GJFBMBOEMPJ_CDDDJNGHOOO_NBEMCAOCBPF_OFFSET UNITYSDK_OFFSET(0x15F23C50)
#define GJFBMBOEMPJ_CDDDJNGHOOO_NDKOCHJAMEB_OFFSET UNITYSDK_OFFSET(0x15F23AE0)
#define GJFBMBOEMPJ_CDDDJNGHOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F239E0)

inline static constexpr unsigned int GJFBMBOEMPJ_CDDDJNGHOOO_TypeDefinitionIndex = 87519;

class GJFBMBOEMPJ_CDDDJNGHOOO : public ::System::Object
{
public:
	::System::Action* FDPGPBJIEMN; // 0x10
	::System::Action* GMALCNFCAIO; // 0x18
	::System::Action* MMEMLHFIIEO; // 0x20
	::System::Action* LLBFHJAEGFK; // 0x28
	::System::Action* ACPHMOGIDEO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFBMBOEMPJ_CDDDJNGHOOO__CTOR_OFFSET))(this);
	}

	::System::Void DHFHLOCBKHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFBMBOEMPJ_CDDDJNGHOOO_DHFHLOCBKHD_OFFSET))(this);
	}

	::System::Void NDKOCHJAMEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFBMBOEMPJ_CDDDJNGHOOO_NDKOCHJAMEB_OFFSET))(this);
	}

	::System::Void NBEMCAOCBPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFBMBOEMPJ_CDDDJNGHOOO_NBEMCAOCBPF_OFFSET))(this);
	}

	::System::Void JPPNEEBKNNE(::System::Action*& EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + GJFBMBOEMPJ_CDDDJNGHOOO_JPPNEEBKNNE_OFFSET))(this, EJGDHCIBCJH);
	}
};

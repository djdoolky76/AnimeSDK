#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OGEKFFCJCKJ_AAKNINDKIJF_OFFSET UNITYSDK_OFFSET(0x114F5640)
#define OGEKFFCJCKJ_EDPJLMDHOHP_OFFSET UNITYSDK_OFFSET(0x114F5540)
#define OGEKFFCJCKJ_EONAAAKEHKF_OFFSET UNITYSDK_OFFSET(0x114F5630)
#define OGEKFFCJCKJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x114F5610)
#define OGEKFFCJCKJ_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x114F55D0)
#define OGEKFFCJCKJ_LNAOGMCNGHJ_OFFSET UNITYSDK_OFFSET(0x114F5620)
#define OGEKFFCJCKJ_OEEHKAFCBMK_OFFSET UNITYSDK_OFFSET(0x114F56B0)
#define OGEKFFCJCKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x114F5520)

inline static constexpr unsigned int OGEKFFCJCKJ_TypeDefinitionIndex = 69486;

class OGEKFFCJCKJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* OEBIHNCIBHP; // 0x10
	::System::Int32 HAJOHKIMJFL; // 0x18
	::System::Int32 NNCCOAPAKMK; // 0x1C
	::System::Boolean _MECHDBEHDIN_k__BackingField; // 0x20

	::System::Void _ctor(::System::Int32 DCBDHMBGPJN, ::System::Collections::Generic::HashSet_1<::System::Int32>* OPGINPPNPBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ__CTOR_OFFSET))(this, DCBDHMBGPJN, OPGINPPNPBJ);
	}

	::System::Void EDPJLMDHOHP(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_EDPJLMDHOHP_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void LNAOGMCNGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_LNAOGMCNGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 EONAAAKEHKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_EONAAAKEHKF_OFFSET))(this);
	}

	::System::Void AAKNINDKIJF(::IBENDELLLAO* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_AAKNINDKIJF_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void OEEHKAFCBMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEKFFCJCKJ_OEEHKAFCBMK_OFFSET))(this);
	}
};

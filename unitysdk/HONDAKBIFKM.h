#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HONDAKBIFKM_AKMIGMNANND_OFFSET UNITYSDK_OFFSET(0x773880)
#define HONDAKBIFKM_BIGLFCJNJFF_OFFSET UNITYSDK_OFFSET(0x773760)
#define HONDAKBIFKM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15DCF570)
#define HONDAKBIFKM_JCGJPCFIILJ_OFFSET UNITYSDK_OFFSET(0x7736E0)
#define HONDAKBIFKM_MFMPLACPHII_OFFSET UNITYSDK_OFFSET(0x773800)
#define HONDAKBIFKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DCF530)

inline static constexpr unsigned int HONDAKBIFKM_TypeDefinitionIndex = 84331;

struct alignas(8) HONDAKBIFKM
{
	static ::HONDAKBIFKM* StaticGet_DDGNFJDLOKA()
	{
		return (::HONDAKBIFKM*)Il2CppClass::FromTypeDefinitionIndex(HONDAKBIFKM_TypeDefinitionIndex)->GetStaticField(0x40C70);
	}
	::System::Single JOFGIANGHMK; // 0x10
	::System::Boolean DPEFNGHNDGJ; // 0x14
	::System::Boolean AJAGCLNLJMM; // 0x15
	::System::Byte _padding0[0x2];
	::System::UInt64 FCPCLIJNDLA; // 0x18
	::System::Single IENOAGOAHMO; // 0x20
	::System::Boolean JDBFEBFDJOM; // 0x24
	::System::Byte _padding1[0x3];
	::MoleMole::ConfigNewbie_NewbieInputLogicType PMGOALLFPFC; // 0x28
	::System::Boolean LFHGDGIMCMD; // 0x2C
	::System::Boolean DBFLMLHDDDJ; // 0x2D
	::System::Byte _padding2[0x2];
	::System::String* ANBLBJEDLIK; // 0x30
	::System::Boolean ELGOGICOEJL; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONDAKBIFKM__CCTOR_OFFSET))();
	}

	/*
	::HONDAKBIFKM JCGJPCFIILJ(::System::Single IENOAGOAHMO)
	{
		return ((::HONDAKBIFKM(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HONDAKBIFKM_JCGJPCFIILJ_OFFSET))(this, IENOAGOAHMO);
	}
	*/

	/*
	static ::HONDAKBIFKM COKNIICCODC()
	{
		return ((::HONDAKBIFKM(*)())((::PBYTE)hIl2Cpp + HONDAKBIFKM_COKNIICCODC_OFFSET))();
	}
	*/

	::System::Void BIGLFCJNJFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONDAKBIFKM_BIGLFCJNJFF_OFFSET))(this);
	}

	/*
	::HONDAKBIFKM MFMPLACPHII(::System::Boolean LFHGDGIMCMD)
	{
		return ((::HONDAKBIFKM(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HONDAKBIFKM_MFMPLACPHII_OFFSET))(this, LFHGDGIMCMD);
	}
	*/

	/*
	::HONDAKBIFKM AKMIGMNANND(::System::Single JOFGIANGHMK)
	{
		return ((::HONDAKBIFKM(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HONDAKBIFKM_AKMIGMNANND_OFFSET))(this, JOFGIANGHMK);
	}
	*/
};

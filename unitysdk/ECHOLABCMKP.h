#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ECHOLABCMKP_AIFIDFLGEOH_OFFSET UNITYSDK_OFFSET(0x1FCD7280)
#define ECHOLABCMKP_BLFBJKANDGC_OFFSET UNITYSDK_OFFSET(0x1FCD79F0)
#define ECHOLABCMKP_CJLOOBNPEPB_OFFSET UNITYSDK_OFFSET(0x1FCD7190)
#define ECHOLABCMKP_DDBEANLNHOB_OFFSET UNITYSDK_OFFSET(0x1FCD7A50)
#define ECHOLABCMKP_EHEALGHPMOK_OFFSET UNITYSDK_OFFSET(0x1FCD79E0)
#define ECHOLABCMKP_EKGPGPIEDCE_OFFSET UNITYSDK_OFFSET(0x1FCD7A30)
#define ECHOLABCMKP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FCD79D0)
#define ECHOLABCMKP_GCFHLDILGJC_OFFSET UNITYSDK_OFFSET(0x1FCD7A80)
#define ECHOLABCMKP_GJAJELJLMGP_OFFSET UNITYSDK_OFFSET(0x1FCD7A20)
#define ECHOLABCMKP_HJKIGAOPCHC_OFFSET UNITYSDK_OFFSET(0x1FCD7A10)
#define ECHOLABCMKP_JGGJKPKODFD_OFFSET UNITYSDK_OFFSET(0x1FCD7A00)
#define ECHOLABCMKP_JILHABBNMNH_OFFSET UNITYSDK_OFFSET(0x1FCD7A40)
#define ECHOLABCMKP_NCOOELBDELA_OFFSET UNITYSDK_OFFSET(0x1FCD7A70)
#define ECHOLABCMKP_PIGKBAEEKJF_OFFSET UNITYSDK_OFFSET(0x1FCD7330)
#define ECHOLABCMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD7A60)

inline static constexpr unsigned int ECHOLABCMKP_TypeDefinitionIndex = 18131;

class ECHOLABCMKP : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_JIEEIIEKAIB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ECHOLABCMKP_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 DEDIHJAOPNI; // 0x10
	::System::Byte FEMHHGAMLGL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_FINALIZE_OFFSET))(this);
	}

	::System::Boolean EHEALGHPMOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_EHEALGHPMOK_OFFSET))(this);
	}

	::System::Void BLFBJKANDGC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHOLABCMKP_BLFBJKANDGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JGGJKPKODFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_JGGJKPKODFD_OFFSET))(this);
	}

	::System::Void PIGKBAEEKJF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHOLABCMKP_PIGKBAEEKJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GJAJELJLMGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_GJAJELJLMGP_OFFSET))(this);
	}

	::System::Void EKGPGPIEDCE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHOLABCMKP_EKGPGPIEDCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JILHABBNMNH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_JILHABBNMNH_OFFSET))(this);
	}

	::System::Void DDBEANLNHOB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHOLABCMKP_DDBEANLNHOB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean HJKIGAOPCHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_HJKIGAOPCHC_OFFSET))(this);
	}

	::System::Void CJLOOBNPEPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_CJLOOBNPEPB_OFFSET))(this);
	}

	::System::Void AIFIDFLGEOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_AIFIDFLGEOH_OFFSET))(this);
	}

	::System::Void NCOOELBDELA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHOLABCMKP_NCOOELBDELA_OFFSET))(this);
	}

	static ::System::Boolean GCFHLDILGJC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ECHOLABCMKP_GCFHLDILGJC_OFFSET))();
	}
};

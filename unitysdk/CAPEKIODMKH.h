#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CAPEKIODMKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC49A080)
#define CAPEKIODMKH_ECJAEEMMJFE_OFFSET UNITYSDK_OFFSET(0xC49CC40)
#define CAPEKIODMKH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC49CA60)
#define CAPEKIODMKH_GBJHNBHFPPM_OFFSET UNITYSDK_OFFSET(0xC49CDB0)
#define CAPEKIODMKH_HCLHCCMOFHA_OFFSET UNITYSDK_OFFSET(0xC49CAD0)
#define CAPEKIODMKH_ICDIFELGDHI_OFFSET UNITYSDK_OFFSET(0xC49B930)
#define CAPEKIODMKH_IJEEHJCEENE_OFFSET UNITYSDK_OFFSET(0xC49AEC0)
#define CAPEKIODMKH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC49AF40)
#define CAPEKIODMKH_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xC49A3B0)
#define CAPEKIODMKH_LKHKCIHPKPD_OFFSET UNITYSDK_OFFSET(0xC49B980)
#define CAPEKIODMKH_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0xC49A090)
#define CAPEKIODMKH_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC49C3B0)

	class CAPEKIODMKH : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::UnityEngine::Coroutine* BEIIDJKKJEG; // 0x18
		::BABNOKHOBCF* FKINCGODJEP; // 0x20
		::System::Single PCOMMLHHNOA; // 0x28
		::System::Int32 EAGMNCBBOIK; // 0x2C
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_LEEEAMMHPFM_OFFSET))(this);
		}

		::System::Void IJEEHJCEENE(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_IJEEHJCEENE_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_INITIALIZE_OFFSET))(this);
		}

		::System::Void ICDIFELGDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_ICDIFELGDHI_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_TEARDOWN_OFFSET))(this);
		}

		::System::Void LKHKCIHPKPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_LKHKCIHPKPD_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPEKIODMKH_EXECUTE_OFFSET))(this);
		}

		::System::Void HCLHCCMOFHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_HCLHCCMOFHA_OFFSET))(this, a1);
		}

		::System::Void ECJAEEMMJFE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_ECJAEEMMJFE_OFFSET))(this, a1);
		}

		::System::Void GBJHNBHFPPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAPEKIODMKH_GBJHNBHFPPM_OFFSET))(this, a1);
		}

	};

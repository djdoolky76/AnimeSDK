#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPIJBDIDIC.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System { class String; }

#define IMOHEHDKGPK_AKKHFPCMNMO_1_OFFSET UNITYSDK_OFFSET(0x164E1A50)
#define IMOHEHDKGPK_AKKHFPCMNMO_OFFSET UNITYSDK_OFFSET(0x164E19B0)
#define IMOHEHDKGPK_LEOMPNIAAGG_OFFSET UNITYSDK_OFFSET(0x2E82C90)
#define IMOHEHDKGPK_MLGBLCIBHOE_OFFSET UNITYSDK_OFFSET(0x2E82D10)

	struct alignas(4) IMOHEHDKGPK
	{
		::System::Int32 BJMAHPHMFDM; // 0x10
		::System::Int32 OJDMPJIOBMJ; // 0x14
		::System::Single NFELGGAPKMO; // 0x18
		::System::Single NDJMDMNILJH; // 0x1C
		::System::Single NGEKOCNGAEC; // 0x20
		::System::Single ADGMFNOHPNE; // 0x24
		::System::Int32 ANJOGGMLFID; // 0x28
		::System::Boolean MGLKMINMINB; // 0x2C
		::System::Boolean LEOMPNIAAGG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMOHEHDKGPK_LEOMPNIAAGG_OFFSET))(this, a1);
		}

		::System::Boolean MLGBLCIBHOE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMOHEHDKGPK_MLGBLCIBHOE_OFFSET))(this, a1);
		}

		/*
		static ::IMOHEHDKGPK AKKHFPCMNMO(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::IMOHEHDKGPK(*)(::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + IMOHEHDKGPK_AKKHFPCMNMO_OFFSET))(a1);
		}
		*/

		/*
		static ::IMOHEHDKGPK AKKHFPCMNMO_1(::OEPIJBDIDIC a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::IMOHEHDKGPK(*)(::OEPIJBDIDIC, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IMOHEHDKGPK_AKKHFPCMNMO_1_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

	};

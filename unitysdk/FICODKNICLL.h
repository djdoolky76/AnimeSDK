#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGIHIELHLGF.h"
#include "unitysdk/MLFEHGAFNBE.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FICODKNICLL_AENPHDMACPG_OFFSET UNITYSDK_OFFSET(0x1F850)
#define FICODKNICLL_AINPNCLNJCF_OFFSET UNITYSDK_OFFSET(0x157A2870)
#define FICODKNICLL_CGLJALLFHMB_OFFSET UNITYSDK_OFFSET(0x157A2760)
#define FICODKNICLL_CTOR_OFFSET UNITYSDK_OFFSET(0x2E76430)
#define FICODKNICLL_EEBEEAOOKMP_OFFSET UNITYSDK_OFFSET(0x2E76600)
#define FICODKNICLL_EMKKJFGMHFJ_OFFSET UNITYSDK_OFFSET(0x1F810)
#define FICODKNICLL_GJFKGBILNCN_OFFSET UNITYSDK_OFFSET(0x1F830)
#define FICODKNICLL_HKMBBHAJIGM_OFFSET UNITYSDK_OFFSET(0x2E764C0)
#define FICODKNICLL_IELPHHCMADO_OFFSET UNITYSDK_OFFSET(0x2E76530)
#define FICODKNICLL_IOLODGNILIF_OFFSET UNITYSDK_OFFSET(0x1F890)
#define FICODKNICLL_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x2E76470)
#define FICODKNICLL_MICDFBGLDDG_OFFSET UNITYSDK_OFFSET(0x157A26A0)

	struct alignas(8) FICODKNICLL
	{
		::MLFEHGAFNBE OIBKPJEGPOK; // 0x10
		::HGIHIELHLGF DICDJJOJKGF; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* IPACDKEBGIJ; // 0xA0
		::System::Single HBAMPJPOOLM; // 0xA8
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0xAC
		::UnityEngine::Vector2 OLLHGKFCCJC; // 0xB8
		::UnityEngine::Vector2 PLLHCPALFLN; // 0xC0
		::System::Boolean DFHAINGLMAM; // 0xC8
		::System::Boolean OGFGJAFDMIM; // 0xC9
		::System::Byte _padding0[0x2];
		::System::Single NMDPAOPJHFO; // 0xCC
		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FICODKNICLL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MLFEHGAFNBE EMKKJFGMHFJ()
		{
			return ((::MLFEHGAFNBE(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_EMKKJFGMHFJ_OFFSET))(this);
		}

		::System::Void GJFKGBILNCN(::MLFEHGAFNBE a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLFEHGAFNBE))((::PBYTE)hIl2Cpp + FICODKNICLL_GJFKGBILNCN_OFFSET))(this, a1);
		}

		::HGIHIELHLGF AENPHDMACPG()
		{
			return ((::HGIHIELHLGF(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_AENPHDMACPG_OFFSET))(this);
		}

		::System::Void IOLODGNILIF(::HGIHIELHLGF a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGIHIELHLGF))((::PBYTE)hIl2Cpp + FICODKNICLL_IOLODGNILIF_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_LDAMHBBILAD_OFFSET))(this);
		}

		::UnityEngine::Vector3 HKMBBHAJIGM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_HKMBBHAJIGM_OFFSET))(this);
		}

		::UnityEngine::Vector3 IELPHHCMADO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_IELPHHCMADO_OFFSET))(this);
		}

		::System::Single EEBEEAOOKMP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FICODKNICLL_EEBEEAOOKMP_OFFSET))(this);
		}

		static ::System::Boolean MICDFBGLDDG(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + FICODKNICLL_MICDFBGLDDG_OFFSET))(a1);
		}

		static ::System::Void CGLJALLFHMB(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FICODKNICLL_CGLJALLFHMB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AINPNCLNJCF(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + FICODKNICLL_AINPNCLNJCF_OFFSET))(a1);
		}

	};

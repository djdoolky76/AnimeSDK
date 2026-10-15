#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define KDIIINMLMNC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB35E940)
#define KDIIINMLMNC_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0xB35E7D0)
#define KDIIINMLMNC_BDHFNGPBBHL_1_OFFSET UNITYSDK_OFFSET(0xB35EA90)
#define KDIIINMLMNC_BDHFNGPBBHL_2_OFFSET UNITYSDK_OFFSET(0xB35EB10)
#define KDIIINMLMNC_BDHFNGPBBHL_3_OFFSET UNITYSDK_OFFSET(0xB35EB90)
#define KDIIINMLMNC_BDHFNGPBBHL_OFFSET UNITYSDK_OFFSET(0xB35EA00)
#define KDIIINMLMNC_BEGGODBMKJJ_OFFSET UNITYSDK_OFFSET(0xB35ED10)
#define KDIIINMLMNC_CCFLILEJKJF_OFFSET UNITYSDK_OFFSET(0xB35ECF0)
#define KDIIINMLMNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB35E550)
#define KDIIINMLMNC_DPDDPDDKHEP_OFFSET UNITYSDK_OFFSET(0xB35ED30)
#define KDIIINMLMNC_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0xB35E810)
#define KDIIINMLMNC_FKPFHKHNKIF_OFFSET UNITYSDK_OFFSET(0xB35E860)
#define KDIIINMLMNC_IHOKDIEALND_OFFSET UNITYSDK_OFFSET(0xB35ED40)
#define KDIIINMLMNC_IICDHFAJFEI_OFFSET UNITYSDK_OFFSET(0xB35E930)
#define KDIIINMLMNC_JPMJILHKFKM_OFFSET UNITYSDK_OFFSET(0xB35E8A0)
#define KDIIINMLMNC_LHHLPLMCDBB_OFFSET UNITYSDK_OFFSET(0xB35E5D0)
#define KDIIINMLMNC_LPNDHPEIECC_OFFSET UNITYSDK_OFFSET(0xB35E660)
#define KDIIINMLMNC_MIFAOKMDILB_OFFSET UNITYSDK_OFFSET(0xB35E850)
#define KDIIINMLMNC_NAOPGPGFEMH_OFFSET UNITYSDK_OFFSET(0xB35E5F0)
#define KDIIINMLMNC_NHEBOACBDBE_OFFSET UNITYSDK_OFFSET(0xB35EC50)
#define KDIIINMLMNC_NIKLJNFCMNN_OFFSET UNITYSDK_OFFSET(0xB35E780)
#define KDIIINMLMNC_PDMACNMBFLN_OFFSET UNITYSDK_OFFSET(0xB35E8E0)

	class KDIIINMLMNC : public ::System::Object
	{
	public:
		::RPG::Client::LiteInstancedItem::ItemPrototype* LLCCIDIEEBM; // 0x10
		::UnityEngine::Material* KLHDLPHOKPA; // 0x18
		::System::UInt32 COEMCOBPMKD; // 0x20
		::System::Boolean KAHFEJOEEDG; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector4 CLDOKHDOHAC; // 0x28
		::System::UInt32 DDKBAOCLLOI; // 0x38
		::System::Void _ctor(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + KDIIINMLMNC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean NIKLJNFCMNN(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + KDIIINMLMNC_NIKLJNFCMNN_OFFSET))(this, a1);
		}

		::System::Void AIEHMLPBHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_AIEHMLPBHCG_OFFSET))(this);
		}

		::System::Void FEADNMNABOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_FEADNMNABOL_OFFSET))(this);
		}

		::System::UInt32 MIFAOKMDILB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_MIFAOKMDILB_OFFSET))(this);
		}

		::System::Void FKPFHKHNKIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_FKPFHKHNKIF_OFFSET))(this);
		}

		::System::Void JPMJILHKFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_JPMJILHKFKM_OFFSET))(this);
		}

		::System::Void PDMACNMBFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_PDMACNMBFLN_OFFSET))(this);
		}

		::System::Boolean IICDHFAJFEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_IICDHFAJFEI_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BDHFNGPBBHL(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KDIIINMLMNC_BDHFNGPBBHL_OFFSET))(this, a1, a2);
		}

		::System::Void BDHFNGPBBHL_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + KDIIINMLMNC_BDHFNGPBBHL_1_OFFSET))(this, a1, a2);
		}

		::System::Void BDHFNGPBBHL_2(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KDIIINMLMNC_BDHFNGPBBHL_2_OFFSET))(this, a1, a2);
		}

		::System::Void BDHFNGPBBHL_3(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + KDIIINMLMNC_BDHFNGPBBHL_3_OFFSET))(this, a1, a2);
		}

		::System::Void NHEBOACBDBE(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDIIINMLMNC_NHEBOACBDBE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* CCFLILEJKJF()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_CCFLILEJKJF_OFFSET))(this);
		}

		::System::Int32 BEGGODBMKJJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_BEGGODBMKJJ_OFFSET))(this);
		}

		::UnityEngine::Material* LHHLPLMCDBB()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_LHHLPLMCDBB_OFFSET))(this);
		}

		::UnityEngine::Material* DPDDPDDKHEP()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_DPDDPDDKHEP_OFFSET))(this);
		}

		::UnityEngine::Vector4 IHOKDIEALND()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_IHOKDIEALND_OFFSET))(this);
		}

		::System::Void NAOPGPGFEMH(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + KDIIINMLMNC_NAOPGPGFEMH_OFFSET))(this, a1);
		}

		::System::Void LPNDHPEIECC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIIINMLMNC_LPNDHPEIECC_OFFSET))(this);
		}

	};

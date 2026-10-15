#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EJJAGEEGEKA;
class FMPCODLIOLG;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define DHHDNGJNKNF_BNKOFGDFEPE_OFFSET UNITYSDK_OFFSET(0xEBD9CC0)
#define DHHDNGJNKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD9D30)
#define DHHDNGJNKNF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xEBD93D0)
#define DHHDNGJNKNF_DOGAJHCKDGN_OFFSET UNITYSDK_OFFSET(0xEBD9B10)
#define DHHDNGJNKNF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xEBD9450)
#define DHHDNGJNKNF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xEBD9550)
#define DHHDNGJNKNF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xEBD9350)
#define DHHDNGJNKNF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xEBD9370)
#define DHHDNGJNKNF_GGJPBDIKKDO_OFFSET UNITYSDK_OFFSET(0xEBD9770)
#define DHHDNGJNKNF_HEODKFHMMNK_OFFSET UNITYSDK_OFFSET(0xEBD96E0)
#define DHHDNGJNKNF_HKOOHLCHDHN_OFFSET UNITYSDK_OFFSET(0xEBD9B70)
#define DHHDNGJNKNF_IIMPFKFGOIG_OFFSET UNITYSDK_OFFSET(0xEBD95A0)
#define DHHDNGJNKNF_JMCMOGBMMNH_OFFSET UNITYSDK_OFFSET(0xEBD99D0)
#define DHHDNGJNKNF_KFLPDLOEMBB_OFFSET UNITYSDK_OFFSET(0xEBD9730)
#define DHHDNGJNKNF_KLNOOGKLOIN_OFFSET UNITYSDK_OFFSET(0xEBD9680)
#define DHHDNGJNKNF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xEBD9360)
#define DHHDNGJNKNF__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBD9280)
#define DHHDNGJNKNF__ONTICK_OFFSET UNITYSDK_OFFSET(0xEBD9850)

inline static constexpr unsigned int DHHDNGJNKNF_TypeDefinitionIndex = 71456;

	class DHHDNGJNKNF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* GNCPKHINOJL; // 0x60
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x78
		::System::Action* PCFCFJLHLNF; // 0x80
		::RPG::Client::LocalizedText* PCIIKFOIAJA; // 0x88
		::EJJAGEEGEKA* GIEOINBJPBL; // 0x90
		::System::Int32 _Index_k__BackingField; // 0x98
		::System::Boolean MLEJJCMIOEC; // 0x9C
		::System::Boolean BJPOBNAADML; // 0x9D
		::System::Boolean DMBFJAEAGPL; // 0x9E
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CANLIEKIPJG; // 0x0
		// static const ::System::String* OAIMKFCDGDB; // 0x0
		// static const ::System::String* AALHGBPMDOL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_GET_TRANS_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void IIMPFKFGOIG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_IIMPFKFGOIG_OFFSET))(this, a1);
		}

		::System::Void KLNOOGKLOIN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_KLNOOGKLOIN_OFFSET))(this, a1);
		}

		::System::Boolean HEODKFHMMNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_HEODKFHMMNK_OFFSET))(this);
		}

		::FMPCODLIOLG* KFLPDLOEMBB()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_KFLPDLOEMBB_OFFSET))(this);
		}

		::System::Void GGJPBDIKKDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_GGJPBDIKKDO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHHDNGJNKNF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JMCMOGBMMNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_JMCMOGBMMNH_OFFSET))(this);
		}

		::System::Void HKOOHLCHDHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_HKOOHLCHDHN_OFFSET))(this);
		}

		::System::Void DOGAJHCKDGN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_DOGAJHCKDGN_OFFSET))(this, a1);
		}

		::System::Void BNKOFGDFEPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_BNKOFGDFEPE_OFFSET))(this);
		}

	};

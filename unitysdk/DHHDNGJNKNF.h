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

#define DHHDNGJNKNF_BNKOFGDFEPE_OFFSET UNITYSDK_OFFSET(0xF94B880)
#define DHHDNGJNKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xF94B8F0)
#define DHHDNGJNKNF_DOGAJHCKDGN_OFFSET UNITYSDK_OFFSET(0xF94B6D0)
#define DHHDNGJNKNF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xF94B000)
#define DHHDNGJNKNF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xF94AF00)
#define DHHDNGJNKNF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xF94AF20)
#define DHHDNGJNKNF_GGJPBDIKKDO_OFFSET UNITYSDK_OFFSET(0xF94B320)
#define DHHDNGJNKNF_HEODKFHMMNK_OFFSET UNITYSDK_OFFSET(0xF94B290)
#define DHHDNGJNKNF_HKOOHLCHDHN_OFFSET UNITYSDK_OFFSET(0xF94B730)
#define DHHDNGJNKNF_IIMPFKFGOIG_OFFSET UNITYSDK_OFFSET(0xF94B150)
#define DHHDNGJNKNF_JMCMOGBMMNH_OFFSET UNITYSDK_OFFSET(0xF94B590)
#define DHHDNGJNKNF_KFLPDLOEMBB_OFFSET UNITYSDK_OFFSET(0xF94B2E0)
#define DHHDNGJNKNF_KLNOOGKLOIN_OFFSET UNITYSDK_OFFSET(0xF94B230)
#define DHHDNGJNKNF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xF94AF10)
#define DHHDNGJNKNF__ONBIND_OFFSET UNITYSDK_OFFSET(0xF94ACB0)
#define DHHDNGJNKNF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xF94AF80)
#define DHHDNGJNKNF__ONTICK_OFFSET UNITYSDK_OFFSET(0xF94B400)
#define DHHDNGJNKNF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF94B100)

inline static constexpr unsigned int DHHDNGJNKNF_TypeDefinitionIndex = 73438;

	class DHHDNGJNKNF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* GNCPKHINOJL; // 0x60
		::System::Action* PCFCFJLHLNF; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::EJJAGEEGEKA* GIEOINBJPBL; // 0x78
		::UnityEngine::AnimationState* DFGNANDJMGI; // 0x80
		::RPG::Client::LocalizedText* PCIIKFOIAJA; // 0x88
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x90
		::System::Boolean MLEJJCMIOEC; // 0x98
		::System::Boolean BJPOBNAADML; // 0x99
		::System::Boolean DMBFJAEAGPL; // 0x9A
		::System::Byte _padding0[0x1];
		::System::Int32 _Index_k__BackingField; // 0x9C
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DHHDNGJNKNF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHDNGJNKNF__SETUPVIEW_OFFSET))(this);
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

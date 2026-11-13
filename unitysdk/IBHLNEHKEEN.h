#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define IBHLNEHKEEN_AGPCHOMOEMD_OFFSET UNITYSDK_OFFSET(0x188B3590)
#define IBHLNEHKEEN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x188B4170)
#define IBHLNEHKEEN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x188B42F0)
#define IBHLNEHKEEN_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0x188B3920)
#define IBHLNEHKEEN_CTOR_OFFSET UNITYSDK_OFFSET(0x188B4450)
#define IBHLNEHKEEN_DNPEKIHCPIF_OFFSET UNITYSDK_OFFSET(0x188B31C0)
#define IBHLNEHKEEN_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x188B3FA0)
#define IBHLNEHKEEN_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x188B2C30)
#define IBHLNEHKEEN_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x188B2C50)
#define IBHLNEHKEEN_HNGLOIOKEDE_OFFSET UNITYSDK_OFFSET(0x188B3430)
#define IBHLNEHKEEN_IIGJKOIBCED_OFFSET UNITYSDK_OFFSET(0x188B4060)
#define IBHLNEHKEEN_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0x188B3DD0)
#define IBHLNEHKEEN_JHKJKIIFDMM_OFFSET UNITYSDK_OFFSET(0x188B2EE0)
#define IBHLNEHKEEN_JLNFBNMCFHN_OFFSET UNITYSDK_OFFSET(0x188B3E50)
#define IBHLNEHKEEN_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x188B37D0)
#define IBHLNEHKEEN_MNCEAELFCEC_OFFSET UNITYSDK_OFFSET(0x188B34C0)
#define IBHLNEHKEEN_NNGEJNAOKOP_OFFSET UNITYSDK_OFFSET(0x188B3360)
#define IBHLNEHKEEN_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x188B3BD0)
#define IBHLNEHKEEN_PMEGCIKEFJA_OFFSET UNITYSDK_OFFSET(0x188B3AA0)
#define IBHLNEHKEEN_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x188B2C40)
#define IBHLNEHKEEN__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x188B2C90)
#define IBHLNEHKEEN__ONBIND_OFFSET UNITYSDK_OFFSET(0x188B2870)
#define IBHLNEHKEEN__ONTICK_OFFSET UNITYSDK_OFFSET(0x188B3B20)
#define IBHLNEHKEEN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x188B2E80)

inline static constexpr unsigned int IBHLNEHKEEN_TypeDefinitionIndex = 74144;

	class IBHLNEHKEEN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COBCKPCNFCN; // 0x60
		::UnityEngine::RectTransform* BKOHPMFAMPM; // 0x68
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BAOGBCAJLKI; // 0x80
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x88
		::UnityEngine::Animation* PMOJILOJEPE; // 0x90
		::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0x98
		::UnityEngine::Transform* CHIFNDEFKKM; // 0xA0
		::System::Single FAFIAGJFGEF; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::System::Single CLEBBBABPEI; // 0xB0
		::System::UInt32 AANAPBBIPGO; // 0xB4
		::System::Boolean IANFNCDIEHH; // 0xB8
		::System::Boolean HAFCOEMEHNH; // 0xB9
		::System::Boolean AKBPMCJFCFM; // 0xBA
		::System::Byte _padding0[0x1];
		::System::Single HEKAGAJGKEB; // 0xBC
		::System::Single BFKCADADNCA; // 0xC0
		::System::Single IODBJGNMKND; // 0xC4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object GODJBGOCFOC; // 0x0
		// static const ::System::Object KOJDBNHGKJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NNGEJNAOKOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_NNGEJNAOKOP_OFFSET))(this);
		}

		::System::Void MNCEAELFCEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_MNCEAELFCEC_OFFSET))(this, a1);
		}

		::System::Void JHKJKIIFDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_JHKJKIIFDMM_OFFSET))(this);
		}

		::System::Void AGPCHOMOEMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_AGPCHOMOEMD_OFFSET))(this);
		}

		::System::Void JMBFOHAMFGI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_JMBFOHAMFGI_OFFSET))(this, a1);
		}

		::System::Void PMEGCIKEFJA(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_PMEGCIKEFJA_OFFSET))(this, a1);
		}

		::System::Void BLBNMMMDEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_BLBNMMMDEGO_OFFSET))(this);
		}

		::System::Void DNPEKIHCPIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_DNPEKIHCPIF_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBHLNEHKEEN__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JCLGNKPDGKJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_JCLGNKPDGKJ_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_OPCDEPOJOAL_OFFSET))(this, a1);
		}

		::System::Void HNGLOIOKEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_HNGLOIOKEDE_OFFSET))(this);
		}

		::System::Void JLNFBNMCFHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_JLNFBNMCFHN_OFFSET))(this, a1);
		}

		::System::Void EMFNEAJDHHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_EMFNEAJDHHB_OFFSET))(this, a1);
		}

		::System::Void IIGJKOIBCED(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_IIGJKOIBCED_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

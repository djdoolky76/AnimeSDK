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

#define IBHLNEHKEEN_AGPCHOMOEMD_OFFSET UNITYSDK_OFFSET(0x15E36570)
#define IBHLNEHKEEN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E37150)
#define IBHLNEHKEEN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E372D0)
#define IBHLNEHKEEN_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0x15E368F0)
#define IBHLNEHKEEN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E37430)
#define IBHLNEHKEEN_DNPEKIHCPIF_OFFSET UNITYSDK_OFFSET(0x15E361A0)
#define IBHLNEHKEEN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E35E60)
#define IBHLNEHKEEN_EMFNEAJDHHB_OFFSET UNITYSDK_OFFSET(0x15E36F80)
#define IBHLNEHKEEN_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15E35C00)
#define IBHLNEHKEEN_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15E35C20)
#define IBHLNEHKEEN_HNGLOIOKEDE_OFFSET UNITYSDK_OFFSET(0x15E36410)
#define IBHLNEHKEEN_IIGJKOIBCED_OFFSET UNITYSDK_OFFSET(0x15E37040)
#define IBHLNEHKEEN_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0x15E36DB0)
#define IBHLNEHKEEN_JHKJKIIFDMM_OFFSET UNITYSDK_OFFSET(0x15E35EC0)
#define IBHLNEHKEEN_JLNFBNMCFHN_OFFSET UNITYSDK_OFFSET(0x15E36E30)
#define IBHLNEHKEEN_JMBFOHAMFGI_OFFSET UNITYSDK_OFFSET(0x15E367A0)
#define IBHLNEHKEEN_MNCEAELFCEC_OFFSET UNITYSDK_OFFSET(0x15E364A0)
#define IBHLNEHKEEN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15E35C60)
#define IBHLNEHKEEN_NNGEJNAOKOP_OFFSET UNITYSDK_OFFSET(0x15E36340)
#define IBHLNEHKEEN_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x15E36BA0)
#define IBHLNEHKEEN_PMEGCIKEFJA_OFFSET UNITYSDK_OFFSET(0x15E36A70)
#define IBHLNEHKEEN_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15E35C10)
#define IBHLNEHKEEN__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E359C0)
#define IBHLNEHKEEN__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E36AF0)

inline static constexpr unsigned int IBHLNEHKEEN_TypeDefinitionIndex = 72110;

	class IBHLNEHKEEN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* COBCKPCNFCN; // 0x60
		::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0x68
		::UnityEngine::RectTransform* BKOHPMFAMPM; // 0x70
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BAOGBCAJLKI; // 0x78
		::UnityEngine::Transform* CHIFNDEFKKM; // 0x80
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x88
		::UnityEngine::Animation* PMOJILOJEPE; // 0x90
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x98
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0xA0
		::System::Single IODBJGNMKND; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::System::Single BFKCADADNCA; // 0xB0
		::System::Single HEKAGAJGKEB; // 0xB4
		::System::Boolean AKBPMCJFCFM; // 0xB8
		::System::Boolean IANFNCDIEHH; // 0xB9
		::System::Boolean HAFCOEMEHNH; // 0xBA
		::System::Byte _padding0[0x1];
		::System::Single FAFIAGJFGEF; // 0xBC
		::System::Single CLEBBBABPEI; // 0xC0
		::System::UInt32 AANAPBBIPGO; // 0xC4
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHLNEHKEEN_EKGCGIDIFJJ_OFFSET))(this);
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

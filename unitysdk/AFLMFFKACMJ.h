#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EKFMIDBJDIA;
class JPBMKCEONNO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGameFlow; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define AFLMFFKACMJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF173E0)
#define AFLMFFKACMJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCF17520)
#define AFLMFFKACMJ_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0xCF16650)
#define AFLMFFKACMJ_CGKMFABDPHE_OFFSET UNITYSDK_OFFSET(0xCF15390)
#define AFLMFFKACMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF17640)
#define AFLMFFKACMJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xCF161E0)
#define AFLMFFKACMJ_ECOPIJIMEGO_OFFSET UNITYSDK_OFFSET(0xCF15D00)
#define AFLMFFKACMJ_EGBDLBGNJBO_OFFSET UNITYSDK_OFFSET(0xCF15DB0)
#define AFLMFFKACMJ_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xCF14EE0)
#define AFLMFFKACMJ_ELJLODGEPHN_OFFSET UNITYSDK_OFFSET(0xCF16C30)
#define AFLMFFKACMJ_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF14E80)
#define AFLMFFKACMJ_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xCF14EA0)
#define AFLMFFKACMJ_GNJJGOAKOJE_OFFSET UNITYSDK_OFFSET(0xCF17210)
#define AFLMFFKACMJ_GNMBLJPJPOA_OFFSET UNITYSDK_OFFSET(0xCF17190)
#define AFLMFFKACMJ_HHPPCCIEMGK_OFFSET UNITYSDK_OFFSET(0xCF16520)
#define AFLMFFKACMJ_HJCBDFCLCIN_OFFSET UNITYSDK_OFFSET(0xCF16BC0)
#define AFLMFFKACMJ_IJELJCJLMEL_OFFSET UNITYSDK_OFFSET(0xCF16CD0)
#define AFLMFFKACMJ_JCLGNKPDGKJ_OFFSET UNITYSDK_OFFSET(0xCF16880)
#define AFLMFFKACMJ_KEHJJDFNJNO_OFFSET UNITYSDK_OFFSET(0xCF15B40)
#define AFLMFFKACMJ_KFJFPLKMPOP_OFFSET UNITYSDK_OFFSET(0xCF16A90)
#define AFLMFFKACMJ_LDHLKPGHNBD_OFFSET UNITYSDK_OFFSET(0xCF16FF0)
#define AFLMFFKACMJ_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xCF15C10)
#define AFLMFFKACMJ_LGKINLAMNAM_OFFSET UNITYSDK_OFFSET(0xCF15AD0)
#define AFLMFFKACMJ_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xCF163A0)
#define AFLMFFKACMJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xCF16070)
#define AFLMFFKACMJ_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0xCF150D0)
#define AFLMFFKACMJ_OGMJALJIKNO_OFFSET UNITYSDK_OFFSET(0xCF15220)
#define AFLMFFKACMJ_OHEDAECHLAB_OFFSET UNITYSDK_OFFSET(0xCF16F60)
#define AFLMFFKACMJ_OJFKOKFENJD_OFFSET UNITYSDK_OFFSET(0xCF17300)
#define AFLMFFKACMJ_OJPMIBMBAIK_OFFSET UNITYSDK_OFFSET(0xCF16EC0)
#define AFLMFFKACMJ_OLDJOHIBOJD_OFFSET UNITYSDK_OFFSET(0xCF16900)
#define AFLMFFKACMJ_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0xCF15EE0)
#define AFLMFFKACMJ_PFPHHHPAIEN_OFFSET UNITYSDK_OFFSET(0xCF16C80)
#define AFLMFFKACMJ_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xCF14E90)
#define AFLMFFKACMJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF14260)
#define AFLMFFKACMJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCF16940)
#define AFLMFFKACMJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xCF15E30)

	class AFLMFFKACMJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* IJLIJFHBCFN; // 0x60
		::UnityEngine::Animation* LLJKNBGLGCN; // 0x68
		::UnityEngine::Transform* AEFNANKNHPO; // 0x70
		::UnityEngine::UI::Text* DKNOKMKBHLC; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* APDHJFGJPOM; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* JEHKEEKGOGP; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* BBLGCBLIMEJ; // 0x90
		::RPG::Client::AnimatorButton* DGFADNOKFIO; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* BKNIEJKDBCB; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* IINNNCIKFIE; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* CJIMFBOJLLP; // 0xB0
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* MCAMHGMGNGG; // 0xC0
		::RPG::Client::AnimatorButton* PJONABOCAHI; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* KKJLNGAANFB; // 0xD0
		::UnityEngine::Transform* AOCIACEHMNM; // 0xD8
		::UnityEngine::Transform* OEJACCIHPLJ; // 0xE0
		::UnityEngine::UI::Text* BFOKJKJBBIL; // 0xE8
		::System::Collections::Generic::List_1<::System::Boolean>* IHMLPGEGBOL; // 0xF0
		::UnityEngine::Transform* KOKJLIBCGFO; // 0xF8
		::UnityEngine::UI::Text* DHNHODGAKLH; // 0x100
		::UnityEngine::Transform* GLCFJPMFNCB; // 0x108
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x110
		::UnityEngine::Animation* NDAHMEMIOKI; // 0x118
		::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x120
		::System::Int32 LKBKDNAMNEG; // 0x128
		::System::Single IODBJGNMKND; // 0x12C
		::System::Int32 _Index_k__BackingField; // 0x130
		::System::Boolean HAFCOEMEHNH; // 0x134
		::System::Boolean AKBPMCJFCFM; // 0x135
		::System::Byte _padding0[0x2];
		::System::UInt32 CCCNCNCCHLL; // 0x138
		::System::Single BFKCADADNCA; // 0x13C
		::System::UInt64 DKIFLEMOKJD; // 0x140
		::System::Single FAFIAGJFGEF; // 0x148
		::System::Single CLEBBBABPEI; // 0x14C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PENODFJKLGN; // 0x0
		// static const ::System::Object NCIDNCAABEI; // 0x0
		// static const ::System::Object HGBCBJKAAMM; // 0x0
		// static const ::System::Object AJPGACLIOGN; // 0x0
		// static const ::System::Object ANNOAILAHAO; // 0x0
		// static const ::System::String* AHMHFBAJHLN; // 0x0
		// static const ::System::String* FBKLACDCKDL; // 0x0
		// static const ::System::String* NCKMHAGOFNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_GET_TRANS_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFLMFFKACMJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void HHPPCCIEMGK(::JPBMKCEONNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPBMKCEONNO*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_HHPPCCIEMGK_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OPCDEPOJOAL_OFFSET))(this, a1);
		}

		::System::Void JCLGNKPDGKJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_JCLGNKPDGKJ_OFFSET))(this, a1);
		}

		::System::Void BLBNMMMDEGO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_BLBNMMMDEGO_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_LEEEAMMHPFM_OFFSET))(this, a1);
		}

		::System::Void ECOPIJIMEGO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_ECOPIJIMEGO_OFFSET))(this, a1);
		}

		::System::Void OGMJALJIKNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OGMJALJIKNO_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OCGKMGIBKKF_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* KFJFPLKMPOP()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_KFJFPLKMPOP_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGameFlow* OLDJOHIBOJD()
		{
			return ((::RPG::Client::ChallengePeakGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OLDJOHIBOJD_OFFSET))(this);
		}

		::System::Void HJCBDFCLCIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_HJCBDFCLCIN_OFFSET))(this, a1);
		}

		::System::Void ELJLODGEPHN(::RPG::GameCore::BattleTargetChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_ELJLODGEPHN_OFFSET))(this, a1);
		}

		::System::Void CGKMFABDPHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_CGKMFABDPHE_OFFSET))(this);
		}

		::System::Boolean IJELJCJLMEL(::RPG::Client::ChallengePeakBoss* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*, ::System::Int32))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_IJELJCJLMEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean PFPHHHPAIEN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_PFPHHHPAIEN_OFFSET))(this, a1);
		}

		::System::Void LGKINLAMNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_LGKINLAMNAM_OFFSET))(this);
		}

		::System::Void OHEDAECHLAB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OHEDAECHLAB_OFFSET))(this, a1);
		}

		::System::Void KEHJJDFNJNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_KEHJJDFNJNO_OFFSET))(this);
		}

		::System::Boolean OJPMIBMBAIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OJPMIBMBAIK_OFFSET))(this);
		}

		::System::Void EGBDLBGNJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_EGBDLBGNJBO_OFFSET))(this);
		}

		::System::Void LDHLKPGHNBD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_LDHLKPGHNBD_OFFSET))(this, a1);
		}

		::System::Void GNMBLJPJPOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_GNMBLJPJPOA_OFFSET))(this);
		}

		::System::Void GNJJGOAKOJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_GNJJGOAKOJE_OFFSET))(this, a1);
		}

		::System::Void OJFKOKFENJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_OJFKOKFENJD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLMFFKACMJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

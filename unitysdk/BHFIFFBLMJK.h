#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"
class CABPFNJNACD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define BHFIFFBLMJK_ALCBOACKDFI_OFFSET UNITYSDK_OFFSET(0xBB2ECE0)
#define BHFIFFBLMJK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB2FDE0)
#define BHFIFFBLMJK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB2FF00)
#define BHFIFFBLMJK_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0xBB2F860)
#define BHFIFFBLMJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB2FFF0)
#define BHFIFFBLMJK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBB2F2E0)
#define BHFIFFBLMJK_ENKNPKCEAKD_OFFSET UNITYSDK_OFFSET(0xBB2F580)
#define BHFIFFBLMJK_FGODBJOFAIB_OFFSET UNITYSDK_OFFSET(0xBB2F940)
#define BHFIFFBLMJK_FNKBACAKBPN_OFFSET UNITYSDK_OFFSET(0xBB2EEE0)
#define BHFIFFBLMJK_GCNOLEGOOFE_OFFSET UNITYSDK_OFFSET(0xBB2F080)
#define BHFIFFBLMJK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBB2E5A0)
#define BHFIFFBLMJK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBB2E5C0)
#define BHFIFFBLMJK_HJCBDFCLCIN_OFFSET UNITYSDK_OFFSET(0xBB2FB30)
#define BHFIFFBLMJK_IJGBEDJMOAM_OFFSET UNITYSDK_OFFSET(0xBB2F720)
#define BHFIFFBLMJK_JCNAIPNEDOD_OFFSET UNITYSDK_OFFSET(0xBB2FBA0)
#define BHFIFFBLMJK_KALHLFGAKNF_OFFSET UNITYSDK_OFFSET(0xBB2FCD0)
#define BHFIFFBLMJK_KEOIGMPPMLM_OFFSET UNITYSDK_OFFSET(0xBB2E650)
#define BHFIFFBLMJK_KFMJPMPNBAP_OFFSET UNITYSDK_OFFSET(0xBB2EFC0)
#define BHFIFFBLMJK_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xBB2EAD0)
#define BHFIFFBLMJK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xBB2F400)
#define BHFIFFBLMJK_OJNPKEAMBFD_OFFSET UNITYSDK_OFFSET(0xBB2EF30)
#define BHFIFFBLMJK_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0xBB2F180)
#define BHFIFFBLMJK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBB2E5B0)
#define BHFIFFBLMJK__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBB2E600)
#define BHFIFFBLMJK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB2E270)
#define BHFIFFBLMJK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBB2F3C0)
#define BHFIFFBLMJK__ONTICK_OFFSET UNITYSDK_OFFSET(0xBB2F0D0)
#define BHFIFFBLMJK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB2E7B0)

inline static constexpr unsigned int BHFIFFBLMJK_TypeDefinitionIndex = 74399;

	class BHFIFFBLMJK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* GFOKEABGEIO; // 0x60
		::UnityEngine::UI::Text* KKNGAEAKKAM; // 0x68
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x70
		::CABPFNJNACD* NFCHKIHENAE; // 0x78
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x80
		::UnityEngine::UI::Image* EDOPBFJNDBF; // 0x88
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x90
		::System::Int32 _Index_k__BackingField; // 0x98
		::System::Single CLEBBBABPEI; // 0x9C
		::System::Boolean HAFCOEMEHNH; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Single BFKCADADNCA; // 0xA4
		::System::Single FAFIAGJFGEF; // 0xA8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object HGBCBJKAAMM; // 0x0
		// static const ::System::Object HNMKCGJBIII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHFIFFBLMJK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void ENKNPKCEAKD(::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_ENKNPKCEAKD_OFFSET))(this, a1);
		}

		::System::Void IJGBEDJMOAM(::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_IJGBEDJMOAM_OFFSET))(this, a1);
		}

		::System::Void BLBNMMMDEGO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_BLBNMMMDEGO_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_OPCDEPOJOAL_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_LEEEAMMHPFM_OFFSET))(this, a1);
		}

		::System::Void GCNOLEGOOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_GCNOLEGOOFE_OFFSET))(this);
		}

		::System::Void FGODBJOFAIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_FGODBJOFAIB_OFFSET))(this);
		}

		::System::Void ALCBOACKDFI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_ALCBOACKDFI_OFFSET))(this, a1);
		}

		::System::Void FNKBACAKBPN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_FNKBACAKBPN_OFFSET))(this, a1);
		}

		::System::Void KFMJPMPNBAP(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_KFMJPMPNBAP_OFFSET))(this, a1);
		}

		::CABPFNJNACD* KEOIGMPPMLM()
		{
			return ((::CABPFNJNACD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_KEOIGMPPMLM_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* OJNPKEAMBFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_OJNPKEAMBFD_OFFSET))(this, a1);
		}

		::System::Void HJCBDFCLCIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_HJCBDFCLCIN_OFFSET))(this, a1);
		}

		::System::Void JCNAIPNEDOD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_JCNAIPNEDOD_OFFSET))(this, a1);
		}

		::System::Void KALHLFGAKNF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_KALHLFGAKNF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

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

#define BHFIFFBLMJK_ALCBOACKDFI_OFFSET UNITYSDK_OFFSET(0xB472410)
#define BHFIFFBLMJK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB473500)
#define BHFIFFBLMJK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB473620)
#define BHFIFFBLMJK_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0xB472FA0)
#define BHFIFFBLMJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB473710)
#define BHFIFFBLMJK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB472A20)
#define BHFIFFBLMJK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB471EE0)
#define BHFIFFBLMJK_ENKNPKCEAKD_OFFSET UNITYSDK_OFFSET(0xB472CC0)
#define BHFIFFBLMJK_FGODBJOFAIB_OFFSET UNITYSDK_OFFSET(0xB473080)
#define BHFIFFBLMJK_FNKBACAKBPN_OFFSET UNITYSDK_OFFSET(0xB472620)
#define BHFIFFBLMJK_GCNOLEGOOFE_OFFSET UNITYSDK_OFFSET(0xB4727C0)
#define BHFIFFBLMJK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB471CD0)
#define BHFIFFBLMJK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB471CF0)
#define BHFIFFBLMJK_HJCBDFCLCIN_OFFSET UNITYSDK_OFFSET(0xB473270)
#define BHFIFFBLMJK_IJGBEDJMOAM_OFFSET UNITYSDK_OFFSET(0xB472E60)
#define BHFIFFBLMJK_JCNAIPNEDOD_OFFSET UNITYSDK_OFFSET(0xB4732E0)
#define BHFIFFBLMJK_KALHLFGAKNF_OFFSET UNITYSDK_OFFSET(0xB4733F0)
#define BHFIFFBLMJK_KEOIGMPPMLM_OFFSET UNITYSDK_OFFSET(0xB471D80)
#define BHFIFFBLMJK_KFMJPMPNBAP_OFFSET UNITYSDK_OFFSET(0xB472700)
#define BHFIFFBLMJK_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xB472200)
#define BHFIFFBLMJK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB472B40)
#define BHFIFFBLMJK_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB471D30)
#define BHFIFFBLMJK_OJNPKEAMBFD_OFFSET UNITYSDK_OFFSET(0xB472670)
#define BHFIFFBLMJK_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0xB4728C0)
#define BHFIFFBLMJK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB471CE0)
#define BHFIFFBLMJK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB471BD0)
#define BHFIFFBLMJK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB472B00)
#define BHFIFFBLMJK__ONTICK_OFFSET UNITYSDK_OFFSET(0xB472810)

inline static constexpr unsigned int BHFIFFBLMJK_TypeDefinitionIndex = 72321;

	class BHFIFFBLMJK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x60
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x68
		::UnityEngine::UI::Image* GFOKEABGEIO; // 0x70
		::CABPFNJNACD* NFCHKIHENAE; // 0x78
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x80
		::UnityEngine::UI::Text* KKNGAEAKKAM; // 0x88
		::UnityEngine::UI::Image* EDOPBFJNDBF; // 0x90
		::System::Single BFKCADADNCA; // 0x98
		::System::Int32 _Index_k__BackingField; // 0x9C
		::System::Boolean HAFCOEMEHNH; // 0xA0
		::System::Byte _padding0[0x3];
		::System::Single FAFIAGJFGEF; // 0xA4
		::System::Single CLEBBBABPEI; // 0xA8
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_EKGCGIDIFJJ_OFFSET))(this);
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

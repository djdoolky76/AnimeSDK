#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple.h"
class CABPFNJNACD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define BHFIFFBLMJK_ALCBOACKDFI_OFFSET UNITYSDK_OFFSET(0xB476550)
#define BHFIFFBLMJK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB477650)
#define BHFIFFBLMJK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB477770)
#define BHFIFFBLMJK_BLBNMMMDEGO_OFFSET UNITYSDK_OFFSET(0xB4770F0)
#define BHFIFFBLMJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB477860)
#define BHFIFFBLMJK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB476B70)
#define BHFIFFBLMJK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB476020)
#define BHFIFFBLMJK_ENKNPKCEAKD_OFFSET UNITYSDK_OFFSET(0xB476E10)
#define BHFIFFBLMJK_FGODBJOFAIB_OFFSET UNITYSDK_OFFSET(0xB4771D0)
#define BHFIFFBLMJK_FNKBACAKBPN_OFFSET UNITYSDK_OFFSET(0xB476760)
#define BHFIFFBLMJK_GCNOLEGOOFE_OFFSET UNITYSDK_OFFSET(0xB476900)
#define BHFIFFBLMJK_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB475E10)
#define BHFIFFBLMJK_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB475E30)
#define BHFIFFBLMJK_HJCBDFCLCIN_OFFSET UNITYSDK_OFFSET(0xB4773C0)
#define BHFIFFBLMJK_IJGBEDJMOAM_OFFSET UNITYSDK_OFFSET(0xB476FB0)
#define BHFIFFBLMJK_JCNAIPNEDOD_OFFSET UNITYSDK_OFFSET(0xB477430)
#define BHFIFFBLMJK_KALHLFGAKNF_OFFSET UNITYSDK_OFFSET(0xB477540)
#define BHFIFFBLMJK_KEOIGMPPMLM_OFFSET UNITYSDK_OFFSET(0xB475EC0)
#define BHFIFFBLMJK_KFMJPMPNBAP_OFFSET UNITYSDK_OFFSET(0xB476840)
#define BHFIFFBLMJK_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xB476340)
#define BHFIFFBLMJK_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0xB476C90)
#define BHFIFFBLMJK_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB475E70)
#define BHFIFFBLMJK_OJNPKEAMBFD_OFFSET UNITYSDK_OFFSET(0xB4767B0)
#define BHFIFFBLMJK_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0xB476A00)
#define BHFIFFBLMJK_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB475E20)
#define BHFIFFBLMJK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB475D10)
#define BHFIFFBLMJK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB476C50)
#define BHFIFFBLMJK__ONTICK_OFFSET UNITYSDK_OFFSET(0xB476950)

inline static constexpr unsigned int BHFIFFBLMJK_TypeDefinitionIndex = 72322;

	class BHFIFFBLMJK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x60
		::UnityEngine::UI::Image* BHMFMBBLADC; // 0x68
		::UnityEngine::UI::Text* KKNGAEAKKAM; // 0x70
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x78
		::CABPFNJNACD* NFCHKIHENAE; // 0x80
		::UnityEngine::UI::Image* GFOKEABGEIO; // 0x88
		::UnityEngine::UI::Image* EDOPBFJNDBF; // 0x90
		::System::Boolean HAFCOEMEHNH; // 0x98
		::System::Byte _padding0[0x3];
		::System::Int32 _Index_k__BackingField; // 0x9C
		::System::Single BFKCADADNCA; // 0xA0
		::System::Single CLEBBBABPEI; // 0xA4
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

		::System::Void ENKNPKCEAKD(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_ENKNPKCEAKD_OFFSET))(this, a1);
		}

		::System::Void IJGBEDJMOAM(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + BHFIFFBLMJK_IJGBEDJMOAM_OFFSET))(this, a1);
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

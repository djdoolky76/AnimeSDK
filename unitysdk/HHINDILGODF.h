#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class SetBtnBattleHintInfo; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define HHINDILGODF_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x15CCDE30)
#define HHINDILGODF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCE030)
#define HHINDILGODF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15CCDD20)
#define HHINDILGODF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15CCDC00)
#define HHINDILGODF_ELANCGMLLLP_OFFSET UNITYSDK_OFFSET(0x15CCDED0)
#define HHINDILGODF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CCDAD0)
#define HHINDILGODF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15CCDAF0)
#define HHINDILGODF_HPKAIDMBJDG_OFFSET UNITYSDK_OFFSET(0x15CCDB30)
#define HHINDILGODF_KGDGCEKOMNE_OFFSET UNITYSDK_OFFSET(0x15CCDCB0)
#define HHINDILGODF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15CCDAE0)
#define HHINDILGODF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15CCD9E0)

	class HHINDILGODF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* BFOKJKJBBIL; // 0x60
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x68
		::UnityEngine::Transform* ILHPAIHKJNN; // 0x70
		::RPG::Client::TextID OOABJIKHBPH; // 0x78
		::System::UInt32 LKGLNFBMHOG; // 0x88
		::System::Int32 _Index_k__BackingField; // 0x8C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHINDILGODF_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_GET_TRANS_OFFSET))(this);
		}

		::System::Void HPKAIDMBJDG(::RPG::GameCore::SetBtnBattleHintInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + HHINDILGODF_HPKAIDMBJDG_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + HHINDILGODF_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void KGDGCEKOMNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF_KGDGCEKOMNE_OFFSET))(this);
		}

		::System::Void ELANCGMLLLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHINDILGODF_ELANCGMLLLP_OFFSET))(this, a1);
		}

	};

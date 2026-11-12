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

#define HHINDILGODF_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x16C1B890)
#define HHINDILGODF_CTOR_OFFSET UNITYSDK_OFFSET(0x16C1BA80)
#define HHINDILGODF_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16C1B780)
#define HHINDILGODF_ELANCGMLLLP_OFFSET UNITYSDK_OFFSET(0x16C1B920)
#define HHINDILGODF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16C1B560)
#define HHINDILGODF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16C1B580)
#define HHINDILGODF_HPKAIDMBJDG_OFFSET UNITYSDK_OFFSET(0x16C1B5C0)
#define HHINDILGODF_KGDGCEKOMNE_OFFSET UNITYSDK_OFFSET(0x16C1B720)
#define HHINDILGODF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16C1B570)
#define HHINDILGODF__ONBIND_OFFSET UNITYSDK_OFFSET(0x16C1B3A0)
#define HHINDILGODF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16C1B690)

inline static constexpr unsigned int HHINDILGODF_TypeDefinitionIndex = 73856;

	class HHINDILGODF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* ILHPAIHKJNN; // 0x60
		::UnityEngine::UI::Text* BFOKJKJBBIL; // 0x68
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x70
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHINDILGODF__SETUPVIEW_OFFSET))(this);
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

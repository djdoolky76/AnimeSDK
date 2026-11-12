#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define NMDMIMHPDAO_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xC569D60)
#define NMDMIMHPDAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC569E00)
#define NMDMIMHPDAO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC569A80)
#define NMDMIMHPDAO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC569AA0)
#define NMDMIMHPDAO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC569A90)
#define NMDMIMHPDAO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC569AE0)
#define NMDMIMHPDAO__ONBIND_OFFSET UNITYSDK_OFFSET(0xC5699E0)
#define NMDMIMHPDAO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC569C50)

inline static constexpr unsigned int NMDMIMHPDAO_TypeDefinitionIndex = 73375;

	class NMDMIMHPDAO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x60
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x68
		::System::Int32 _Index_k__BackingField; // 0x70
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* IHFPNCMKNMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void CBDJKPPNMDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_CBDJKPPNMDC_OFFSET))(this, a1);
		}

	};

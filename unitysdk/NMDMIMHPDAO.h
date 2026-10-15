#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define NMDMIMHPDAO_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xBC7B410)
#define NMDMIMHPDAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7B4B0)
#define NMDMIMHPDAO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBC7B300)
#define NMDMIMHPDAO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC7B130)
#define NMDMIMHPDAO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBC7B150)
#define NMDMIMHPDAO_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBC7B190)
#define NMDMIMHPDAO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBC7B140)
#define NMDMIMHPDAO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC7B0D0)

inline static constexpr unsigned int NMDMIMHPDAO_TypeDefinitionIndex = 71394;

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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CBDJKPPNMDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMDMIMHPDAO_CBDJKPPNMDC_OFFSET))(this, a1);
		}

	};

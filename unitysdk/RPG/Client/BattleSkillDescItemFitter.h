#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBIONMOIAG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EFINDGEDGMD;
class JOGAOGMJHCK;
namespace RPG::Client { class BattleSkillDescItemFitter; }
namespace RPG::Client { class BattleSkillDescItemFitterParamCollector; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1CD87A00)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD88260)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_GETMINOUTSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1CD881C0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_TRYFIT_OFFSET UNITYSDK_OFFSET(0x1CD880A0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISFITTERINCANVAS_OFFSET UNITYSDK_OFFSET(0x1CD88480)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISOUTYAXIS_OFFSET UNITYSDK_OFFSET(0x1CD88B20)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETMINFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1CD887E0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETRIGHTTOPOUTSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1CD88B80)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1CD88940)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBINARYSETMAXFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1CD88500)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBROADENTEXTWIDTH_OFFSET UNITYSDK_OFFSET(0x1CD88610)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescItemFitter_TypeDefinitionIndex = 73911;

	class BattleSkillDescItemFitter : public ::System::Object
	{
	public:
		::EFINDGEDGMD* _RootTransformCornerData; // 0x10
		::UnityEngine::RectTransform* _FitterTransform; // 0x18
		::System::Collections::Generic::HashSet_1<::JEBIONMOIAG>* _GraphicLanguageType; // 0x20
		::System::Collections::Generic::List_1<::JOGAOGMJHCK*>* _TextItemList; // 0x28
		::Il2CppArray<::System::Single>* _BroadenTextWidthRate; // 0x30
		::System::Int32 _OriginFontSize; // 0x38
		// static const ::System::Object _MIN_Graphic_FONT_SIZE; // 0x0
		// static const ::System::Object _MIN_OTHER_FONT_SIZE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescItemFitter* Create(::RPG::Client::BattleSkillDescItemFitterParamCollector* a1, ::EFINDGEDGMD* a2)
		{
			return ((::RPG::Client::BattleSkillDescItemFitter*(*)(::RPG::Client::BattleSkillDescItemFitterParamCollector*, ::EFINDGEDGMD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean TryFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_TRYFIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetMinOutScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_GETMINOUTSCREENOFFSET_OFFSET))(this);
		}

		::System::Boolean _TryBinarySetMaxFontSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBINARYSETMAXFONTSIZE_OFFSET))(this);
		}

		::System::Void _SetFontSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__SETFONTSIZE_OFFSET))(this, a1);
		}

		::System::Int32 _GetMinFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETMINFONTSIZE_OFFSET))(this);
		}

		::System::Boolean _TryBroadenTextWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBROADENTEXTWIDTH_OFFSET))(this);
		}

		::System::Boolean _GetIsFitterInCanvas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISFITTERINCANVAS_OFFSET))(this);
		}

		::System::Boolean _GetIsOutYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISOUTYAXIS_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetRightTopOutScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETRIGHTTOPOUTSCREENOFFSET_OFFSET))(this);
		}

	};
}

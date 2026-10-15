#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5CFD0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5D210)
#define RPG_GAMECORE_TARGETFETCHADVPROP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5D1E0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5CFE0)
#define RPG_GAMECORE_TARGETFETCHADVPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvProp_TypeDefinitionIndex = 23872;

	class TargetFetchAdvProp : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean TargetIsOwner; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::FetchAdvPropData*>* MultiGroupFetch; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiGroupFetchByUniqueName; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiGroupFetchByPropKey; // 0x28
		::RPG::GameCore::DynamicString* FetchByPropKey; // 0x30
		static ::System::Boolean* StaticGet_AllowReturnNull()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "TargetFetchAdvProp")->GetStaticField(0x2D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvProp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}

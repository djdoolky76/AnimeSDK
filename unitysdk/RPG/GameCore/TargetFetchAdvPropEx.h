#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchAdvPropFetchType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class TargetFetchAdvPropEx; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHADVPROPEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB26F90)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB30230)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB30200)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2FF10)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2FEE0)
#define RPG_GAMECORE_TARGETFETCHADVPROPEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB30B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPropEx_TypeDefinitionIndex = 23875;

	class TargetFetchAdvPropEx : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchAdvPropFetchType FetchType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* SinglePropKey; // 0x18
		::RPG::GameCore::FetchAdvPropData* SinglePropID; // 0x20
		::RPG::GameCore::DynamicString* SingleUniqueName; // 0x28
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiPropKey; // 0x30
		::Il2CppArray<::RPG::GameCore::FetchAdvPropData*>* MultiPropID; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicString*>* MultiUniqueName; // 0x40
		::RPG::GameCore::DynamicFloat* PropGroup; // 0x48
		::RPG::GameCore::DynamicFloat* PropIDInOwnerGroup; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPropEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPropEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPROPEX_TOSTRING_OFFSET))(this);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetAlias; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_TARGETALIAS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BDD0)
#define RPG_GAMECORE_TARGETALIAS_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB2BBD0)
#define RPG_GAMECORE_TARGETALIAS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2B980)
#define RPG_GAMECORE_TARGETALIAS_DJAPJJBLLJO_OFFSET UNITYSDK_OFFSET(0x1DB2BCE0)
#define RPG_GAMECORE_TARGETALIAS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB2BA80)
#define RPG_GAMECORE_TARGETALIAS_GBGAEGOPFCK_OFFSET UNITYSDK_OFFSET(0x1DB2BC20)
#define RPG_GAMECORE_TARGETALIAS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB2BA30)
#define RPG_GAMECORE_TARGETALIAS_LJPCDLIEFAC_OFFSET UNITYSDK_OFFSET(0x1DB22C30)
#define RPG_GAMECORE_TARGETALIAS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2B990)
#define RPG_GAMECORE_TARGETALIAS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2B8A0)
#define RPG_GAMECORE_TARGETALIAS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB2BBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetAlias_TypeDefinitionIndex = 23745;

	class TargetAlias : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* Alias; // 0x10
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetAlias*>** StaticGet_AliasNameTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetAlias*>**)UnitySDK::FromName("RPG.GameCore", "TargetAlias")->GetStaticField(0x1E8B0);
		}

		static ::RPG::GameCore::TargetAlias** StaticGet_Default()
		{
			return (::RPG::GameCore::TargetAlias**)UnitySDK::FromName("RPG.GameCore", "TargetAlias")->GetStaticField(0x1E8B8);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet__PureAliasRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.GameCore", "TargetAlias")->GetStaticField(0x1E8C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetAlias* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetAlias*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::TargetAlias* LJPCDLIEFAC(::System::String* a1)
		{
			return ((::RPG::GameCore::TargetAlias*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_LJPCDLIEFAC_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean GBGAEGOPFCK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_GBGAEGOPFCK_OFFSET))(a1);
		}

		static ::RPG::GameCore::TargetAlias* DJAPJJBLLJO(::FCOEMCEDLNL* a1)
		{
			return ((::RPG::GameCore::TargetAlias*(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETALIAS_DJAPJJBLLJO_OFFSET))(a1);
		}

	};
}

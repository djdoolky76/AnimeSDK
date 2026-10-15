#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDBILFIDDJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCAEE00)
#define DDBILFIDDJP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DCAEA90)

inline static constexpr unsigned int DDBILFIDDJP_TypeDefinitionIndex = 23856;

	class DDBILFIDDJP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>** StaticGet_MGJGAOOJLCJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*>*>**)UnitySDK::FromName("", "DDBILFIDDJP")->GetStaticField(0x419D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDBILFIDDJP_CCTOR_OFFSET))();
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::PredicateConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::PredicateConfig*))((::PBYTE)hIl2Cpp + DDBILFIDDJP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};

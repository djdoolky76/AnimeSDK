#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKEBOHAPGOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8114F0)
#define BKEBOHAPGOF_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D811180)

inline static constexpr unsigned int BKEBOHAPGOF_TypeDefinitionIndex = 23858;

	class BKEBOHAPGOF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>** StaticGet_MGJGAOOJLCJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*>*>**)UnitySDK::FromName("", "BKEBOHAPGOF")->GetStaticField(0x36190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKEBOHAPGOF_CCTOR_OFFSET))();
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSeqOperation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSeqOperation*))((::PBYTE)hIl2Cpp + BKEBOHAPGOF_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFMJECNLGHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12E220)
#define MFMJECNLGHH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D12DEB0)

inline static constexpr unsigned int MFMJECNLGHH_TypeDefinitionIndex = 23860;

	class MFMJECNLGHH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>** StaticGet_MGJGAOOJLCJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*>*>**)UnitySDK::FromName("", "MFMJECNLGHH")->GetStaticField(0x43A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFMJECNLGHH_CCTOR_OFFSET))();
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetEvaluator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + MFMJECNLGHH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};

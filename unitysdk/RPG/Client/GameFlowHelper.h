#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDNBAKIOMIC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD0A1130)
#define RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD09FD80)
#define RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET UNITYSDK_OFFSET(0xD0A0240)
#define RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET UNITYSDK_OFFSET(0xD0A03B0)

namespace RPG::Client
{
	class GameFlowHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckCanGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET))(a1, a2);
		}

		static ::NDNBAKIOMIC* _CreateGotoParams(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::NDNBAKIOMIC*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckParamValid(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET))(a1, a2);
		}

	};
}

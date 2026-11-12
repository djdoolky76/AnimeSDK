#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ToastHintItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PILETOAST___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE57D680)
#define RPG_CLIENT_PILETOAST___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE57D6C0)
#define RPG_CLIENT_PILETOAST___C___NORMALIZETRANSIENTITEMPOSITIONS_B__24_0_OFFSET UNITYSDK_OFFSET(0xE57D6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PileToast___c_TypeDefinitionIndex = 75063;

	class PileToast___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ToastHintItem*>** StaticGet___9__24_0()
		{
			return (::System::Comparison_1<::RPG::Client::ToastHintItem*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FF00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FF08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __NormalizeTransientItemPositions_b__24_0(::RPG::Client::ToastHintItem* a1, ::RPG::Client::ToastHintItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ToastHintItem*, ::RPG::Client::ToastHintItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PILETOAST___C___NORMALIZETRANSIENTITEMPOSITIONS_B__24_0_OFFSET))(this, a1, a2);
		}

	};
}

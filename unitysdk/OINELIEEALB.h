#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTagInfo; }
namespace RPG::GameCore { class HoyoTagNodeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OINELIEEALB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D287250)
#define OINELIEEALB_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1D286D10)
#define OINELIEEALB_NEKBPPIDBFP_OFFSET UNITYSDK_OFFSET(0x1D286F70)
#define OINELIEEALB_PPINHELIKIM_OFFSET UNITYSDK_OFFSET(0x1D286DA0)

inline static constexpr unsigned int OINELIEEALB_TypeDefinitionIndex = 24847;

	class OINELIEEALB : public ::System::Object
	{
	public:
		static ::RPG::GameCore::HoyoTagInfo** StaticGet_PMAPIEMDKKA()
		{
			return (::RPG::GameCore::HoyoTagInfo**)UnitySDK::FromName("", "OINELIEEALB")->GetStaticField(0x37660);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>** StaticGet_EGCPIFFAFPC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::HoyoTagNodeInfo*>**)UnitySDK::FromName("", "OINELIEEALB")->GetStaticField(0x37668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINELIEEALB_CCTOR_OFFSET))();
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINELIEEALB_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void PPINHELIKIM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINELIEEALB_PPINHELIKIM_OFFSET))();
		}

		static ::RPG::GameCore::HoyoTagNodeInfo* NEKBPPIDBFP(::System::Int32 a1)
		{
			return ((::RPG::GameCore::HoyoTagNodeInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OINELIEEALB_NEKBPPIDBFP_OFFSET))(a1);
		}

	};

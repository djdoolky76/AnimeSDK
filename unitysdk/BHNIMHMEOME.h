#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicUnitDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHNIMHMEOME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F190FD0)
#define BHNIMHMEOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1915A0)
#define BHNIMHMEOME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F191140)
#define BHNIMHMEOME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F190A40)
#define BHNIMHMEOME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F190CD0)
#define BHNIMHMEOME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F1911E0)
#define BHNIMHMEOME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F191230)
#define BHNIMHMEOME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F191010)
#define BHNIMHMEOME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F190C70)
#define BHNIMHMEOME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F190E40)
#define BHNIMHMEOME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1910A0)
#define BHNIMHMEOME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F1909C0)

inline static constexpr unsigned int BHNIMHMEOME_TypeDefinitionIndex = 15043;

	class BHNIMHMEOME : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*>**)UnitySDK::FromName("", "BHNIMHMEOME")->GetStaticField(0x48AC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHNIMHMEOME")->GetStaticField(0x48AC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BHNIMHMEOME")->GetStaticField(0x48AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHNIMHMEOME")->GetStaticField(0xE130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHNIMHMEOME")->GetStaticField(0xE131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitDisplayRow*>(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicUnitDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicUnitDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHNIMHMEOME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHNIMHMEOME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHNIMHMEOME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHNIMHMEOME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHNIMHMEOME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicUnitDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicUnitDisplayRow*))((::PBYTE)hIl2Cpp + BHNIMHMEOME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

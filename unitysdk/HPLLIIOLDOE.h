#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonCraftConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPLLIIOLDOE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6A2A00)
#define HPLLIIOLDOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A2FC0)
#define HPLLIIOLDOE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6A2B70)
#define HPLLIIOLDOE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6A2470)
#define HPLLIIOLDOE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6A2700)
#define HPLLIIOLDOE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6A2C10)
#define HPLLIIOLDOE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6A2C60)
#define HPLLIIOLDOE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6A2A40)
#define HPLLIIOLDOE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6A26A0)
#define HPLLIIOLDOE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6A2830)
#define HPLLIIOLDOE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6A2AD0)
#define HPLLIIOLDOE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6A23F0)

inline static constexpr unsigned int HPLLIIOLDOE_TypeDefinitionIndex = 13538;

	class HPLLIIOLDOE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPLLIIOLDOE")->GetStaticField(0x1C610);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*>**)UnitySDK::FromName("", "HPLLIIOLDOE")->GetStaticField(0x1C618);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HPLLIIOLDOE")->GetStaticField(0x1C620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPLLIIOLDOE")->GetStaticField(0x62E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPLLIIOLDOE")->GetStaticField(0x62E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonCraftConfigRow*>(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonCraftConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonCraftConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HPLLIIOLDOE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLLIIOLDOE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HPLLIIOLDOE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPLLIIOLDOE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HPLLIIOLDOE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonCraftConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonCraftConfigRow*))((::PBYTE)hIl2Cpp + HPLLIIOLDOE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

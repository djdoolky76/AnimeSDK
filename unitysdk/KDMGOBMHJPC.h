#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRogueAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDMGOBMHJPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0831D0)
#define KDMGOBMHJPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D083F50)
#define KDMGOBMHJPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D083340)
#define KDMGOBMHJPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D082C80)
#define KDMGOBMHJPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D082F10)
#define KDMGOBMHJPC_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1D083EC0)
#define KDMGOBMHJPC_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1D083980)
#define KDMGOBMHJPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0833E0)
#define KDMGOBMHJPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D083430)
#define KDMGOBMHJPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D083210)
#define KDMGOBMHJPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D082EB0)
#define KDMGOBMHJPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D083040)
#define KDMGOBMHJPC_OBADNDIOLCE_OFFSET UNITYSDK_OFFSET(0x1D083CF0)
#define KDMGOBMHJPC_OIHHLFBFLHA_OFFSET UNITYSDK_OFFSET(0x1D083C30)
#define KDMGOBMHJPC_OJFFGBDNBCC_OFFSET UNITYSDK_OFFSET(0x1D083750)
#define KDMGOBMHJPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0832A0)
#define KDMGOBMHJPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D082C00)

inline static constexpr unsigned int KDMGOBMHJPC_TypeDefinitionIndex = 12338;

	class KDMGOBMHJPC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>**)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0x34060);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_GGJJLAFNIJO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0x34068);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0x34070);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0x34078);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0xAF00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0xAF01);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDMGOBMHJPC")->GetStaticField(0xAF02);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRogueAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRogueAreaConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRogueAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRogueAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRogueAreaConfigRow*))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Boolean OJFFGBDNBCC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_OJFFGBDNBCC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* OIHHLFBFLHA(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_OIHHLFBFLHA_OFFSET))(a1);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void OBADNDIOLCE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMGOBMHJPC_OBADNDIOLCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMGOBMHJPC_HFBAFEEPOLN_OFFSET))();
		}

	};

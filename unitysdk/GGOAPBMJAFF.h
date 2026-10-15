#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeChestRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GGOAPBMJAFF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE43330)
#define GGOAPBMJAFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE43900)
#define GGOAPBMJAFF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE434A0)
#define GGOAPBMJAFF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE42DA0)
#define GGOAPBMJAFF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE43030)
#define GGOAPBMJAFF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE43540)
#define GGOAPBMJAFF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE43590)
#define GGOAPBMJAFF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE43370)
#define GGOAPBMJAFF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE42FD0)
#define GGOAPBMJAFF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE431A0)
#define GGOAPBMJAFF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE43400)
#define GGOAPBMJAFF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE42D20)

	class GGOAPBMJAFF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GGOAPBMJAFF")->GetStaticField(0x17560);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*>**)UnitySDK::FromName("", "GGOAPBMJAFF")->GetStaticField(0x17568);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GGOAPBMJAFF")->GetStaticField(0x17570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GGOAPBMJAFF")->GetStaticField(0x5790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GGOAPBMJAFF")->GetStaticField(0x5791);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*>*(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeChestRow*>(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazeChestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazeChestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGOAPBMJAFF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGOAPBMJAFF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GGOAPBMJAFF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGOAPBMJAFF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GGOAPBMJAFF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazeChestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeChestRow*))((::PBYTE)hIl2Cpp + GGOAPBMJAFF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

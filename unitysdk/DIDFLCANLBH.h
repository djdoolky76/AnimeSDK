#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemAutoTransferRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIDFLCANLBH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7ECCC0)
#define DIDFLCANLBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7ED290)
#define DIDFLCANLBH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7ECE30)
#define DIDFLCANLBH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7EC730)
#define DIDFLCANLBH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7EC9C0)
#define DIDFLCANLBH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7ECED0)
#define DIDFLCANLBH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7ECF20)
#define DIDFLCANLBH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7ECD00)
#define DIDFLCANLBH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7EC960)
#define DIDFLCANLBH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7ECB30)
#define DIDFLCANLBH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7ECD90)
#define DIDFLCANLBH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7EC6B0)

inline static constexpr unsigned int DIDFLCANLBH_TypeDefinitionIndex = 14055;

	class DIDFLCANLBH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DIDFLCANLBH")->GetStaticField(0x3DC30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DIDFLCANLBH")->GetStaticField(0x3DC38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>**)UnitySDK::FromName("", "DIDFLCANLBH")->GetStaticField(0x3DC40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DIDFLCANLBH")->GetStaticField(0xC4F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DIDFLCANLBH")->GetStaticField(0xC4F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>*(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemAutoTransferRow*>(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ItemAutoTransferRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemAutoTransferRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DIDFLCANLBH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIDFLCANLBH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DIDFLCANLBH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIDFLCANLBH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DIDFLCANLBH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ItemAutoTransferRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemAutoTransferRow*))((::PBYTE)hIl2Cpp + DIDFLCANLBH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

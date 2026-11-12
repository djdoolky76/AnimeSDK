#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropInteractWhiteListRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJNGPLLEPIF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4924C0)
#define OJNGPLLEPIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E492A40)
#define OJNGPLLEPIF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E492630)
#define OJNGPLLEPIF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E491F70)
#define OJNGPLLEPIF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E492200)
#define OJNGPLLEPIF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4926D0)
#define OJNGPLLEPIF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E492720)
#define OJNGPLLEPIF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E492500)
#define OJNGPLLEPIF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4921A0)
#define OJNGPLLEPIF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E492370)
#define OJNGPLLEPIF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E492590)
#define OJNGPLLEPIF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E491EF0)

inline static constexpr unsigned int OJNGPLLEPIF_TypeDefinitionIndex = 13309;

	class OJNGPLLEPIF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>**)UnitySDK::FromName("", "OJNGPLLEPIF")->GetStaticField(0x523D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OJNGPLLEPIF")->GetStaticField(0x523D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OJNGPLLEPIF")->GetStaticField(0x523E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJNGPLLEPIF")->GetStaticField(0x10130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OJNGPLLEPIF")->GetStaticField(0x10131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>*(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PropInteractWhiteListRow*>(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PropInteractWhiteListRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropInteractWhiteListRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJNGPLLEPIF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNGPLLEPIF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OJNGPLLEPIF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJNGPLLEPIF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OJNGPLLEPIF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PropInteractWhiteListRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropInteractWhiteListRow*))((::PBYTE)hIl2Cpp + OJNGPLLEPIF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

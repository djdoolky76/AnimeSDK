#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityActiveConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLOLEGFJDEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE67400)
#define GLOLEGFJDEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE67980)
#define GLOLEGFJDEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE67570)
#define GLOLEGFJDEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE66EB0)
#define GLOLEGFJDEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE67140)
#define GLOLEGFJDEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE67610)
#define GLOLEGFJDEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE67660)
#define GLOLEGFJDEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE67440)
#define GLOLEGFJDEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE670E0)
#define GLOLEGFJDEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE67270)
#define GLOLEGFJDEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE674D0)
#define GLOLEGFJDEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE66E30)

inline static constexpr unsigned int GLOLEGFJDEL_TypeDefinitionIndex = 10896;

	class GLOLEGFJDEL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>**)UnitySDK::FromName("", "GLOLEGFJDEL")->GetStaticField(0x19B40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLOLEGFJDEL")->GetStaticField(0x19B48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLOLEGFJDEL")->GetStaticField(0x19B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLOLEGFJDEL")->GetStaticField(0x5D60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLOLEGFJDEL")->GetStaticField(0x5D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityActiveConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityActiveConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLOLEGFJDEL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLOLEGFJDEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLOLEGFJDEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLOLEGFJDEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLOLEGFJDEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityActiveConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityActiveConfigRow*))((::PBYTE)hIl2Cpp + GLOLEGFJDEL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

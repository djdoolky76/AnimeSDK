#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAEHGCLIDJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC66760)
#define AAEHGCLIDJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC66CE0)
#define AAEHGCLIDJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC668D0)
#define AAEHGCLIDJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC66210)
#define AAEHGCLIDJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC664A0)
#define AAEHGCLIDJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC66970)
#define AAEHGCLIDJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC669C0)
#define AAEHGCLIDJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC667A0)
#define AAEHGCLIDJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC66440)
#define AAEHGCLIDJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC665D0)
#define AAEHGCLIDJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC66830)
#define AAEHGCLIDJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC66190)

inline static constexpr unsigned int AAEHGCLIDJC_TypeDefinitionIndex = 12070;

	class AAEHGCLIDJC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AAEHGCLIDJC")->GetStaticField(0x3CD20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*>**)UnitySDK::FromName("", "AAEHGCLIDJC")->GetStaticField(0x3CD28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAEHGCLIDJC")->GetStaticField(0x3CD30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAEHGCLIDJC")->GetStaticField(0xC230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAEHGCLIDJC")->GetStaticField(0xC231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAEHGCLIDJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAEHGCLIDJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAEHGCLIDJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAEHGCLIDJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAEHGCLIDJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyBuffConfigRow*))((::PBYTE)hIl2Cpp + AAEHGCLIDJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

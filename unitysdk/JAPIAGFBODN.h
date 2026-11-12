#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerInteractVerificationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAPIAGFBODN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E1FE930)
#define JAPIAGFBODN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FF250)
#define JAPIAGFBODN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E1FEA10)
#define JAPIAGFBODN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E138DC0)
#define JAPIAGFBODN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E1FEF50)
#define JAPIAGFBODN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E1FEAB0)
#define JAPIAGFBODN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E1FEB00)
#define JAPIAGFBODN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E1C2460)
#define JAPIAGFBODN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E1FEEF0)
#define JAPIAGFBODN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E1FF0C0)
#define JAPIAGFBODN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E1FE970)
#define JAPIAGFBODN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E1FEE70)

inline static constexpr unsigned int JAPIAGFBODN_TypeDefinitionIndex = 15248;

	class JAPIAGFBODN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*>**)UnitySDK::FromName("", "JAPIAGFBODN")->GetStaticField(0x29E30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JAPIAGFBODN")->GetStaticField(0x29E38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JAPIAGFBODN")->GetStaticField(0x29E40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAPIAGFBODN")->GetStaticField(0x8660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JAPIAGFBODN")->GetStaticField(0x8661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JAPIAGFBODN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAPIAGFBODN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JAPIAGFBODN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ServerInteractVerificationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ServerInteractVerificationRow*))((::PBYTE)hIl2Cpp + JAPIAGFBODN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*>*(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ServerInteractVerificationRow*>(*)())((::PBYTE)hIl2Cpp + JAPIAGFBODN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ServerInteractVerificationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ServerInteractVerificationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JAPIAGFBODN_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

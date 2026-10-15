#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpecialRoomIconRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMBPILGFHLB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC27500)
#define CMBPILGFHLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCAE220)
#define CMBPILGFHLB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC27670)
#define CMBPILGFHLB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC26F70)
#define CMBPILGFHLB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC27200)
#define CMBPILGFHLB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC27710)
#define CMBPILGFHLB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC27760)
#define CMBPILGFHLB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC27540)
#define CMBPILGFHLB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC271A0)
#define CMBPILGFHLB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC27370)
#define CMBPILGFHLB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC275D0)
#define CMBPILGFHLB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC26EF0)

inline static constexpr unsigned int CMBPILGFHLB_TypeDefinitionIndex = 11836;

	class CMBPILGFHLB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*>**)UnitySDK::FromName("", "CMBPILGFHLB")->GetStaticField(0x433C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CMBPILGFHLB")->GetStaticField(0x433C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CMBPILGFHLB")->GetStaticField(0x433D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CMBPILGFHLB")->GetStaticField(0x10360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CMBPILGFHLB")->GetStaticField(0x10361);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*>*(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*>(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpecialRoomIconRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpecialRoomIconRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CMBPILGFHLB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBPILGFHLB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CMBPILGFHLB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMBPILGFHLB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CMBPILGFHLB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpecialRoomIconRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpecialRoomIconRow*))((::PBYTE)hIl2Cpp + CMBPILGFHLB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

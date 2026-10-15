#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DirectDeliveryNoticeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABBDINNOPFH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC6E1F0)
#define ABBDINNOPFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6E770)
#define ABBDINNOPFH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC6E360)
#define ABBDINNOPFH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC6DCA0)
#define ABBDINNOPFH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC6DF30)
#define ABBDINNOPFH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC6E400)
#define ABBDINNOPFH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC6E450)
#define ABBDINNOPFH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC6E230)
#define ABBDINNOPFH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC6DED0)
#define ABBDINNOPFH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC6E060)
#define ABBDINNOPFH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC6E2C0)
#define ABBDINNOPFH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC6DC20)

inline static constexpr unsigned int ABBDINNOPFH_TypeDefinitionIndex = 13147;

	class ABBDINNOPFH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x3D210);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x3D218);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0x3D220);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0xC3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABBDINNOPFH")->GetStaticField(0xC3C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>*(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DirectDeliveryNoticeRow*>(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DirectDeliveryNoticeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DirectDeliveryNoticeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ABBDINNOPFH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABBDINNOPFH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABBDINNOPFH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DirectDeliveryNoticeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DirectDeliveryNoticeRow*))((::PBYTE)hIl2Cpp + ABBDINNOPFH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

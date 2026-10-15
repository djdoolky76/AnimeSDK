#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarUseMaterialDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGOHGKHBEBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0D910)
#define CGOHGKHBEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0DE90)
#define CGOHGKHBEBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC0DA80)
#define CGOHGKHBEBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0D3C0)
#define CGOHGKHBEBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0D650)
#define CGOHGKHBEBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC0DB20)
#define CGOHGKHBEBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC0DB70)
#define CGOHGKHBEBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0D950)
#define CGOHGKHBEBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0D5F0)
#define CGOHGKHBEBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0D780)
#define CGOHGKHBEBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC0D9E0)
#define CGOHGKHBEBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0D340)

	class CGOHGKHBEBI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>**)UnitySDK::FromName("", "CGOHGKHBEBI")->GetStaticField(0x42D40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CGOHGKHBEBI")->GetStaticField(0x42D48);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CGOHGKHBEBI")->GetStaticField(0x42D50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CGOHGKHBEBI")->GetStaticField(0x10110);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CGOHGKHBEBI")->GetStaticField(0x10111);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>*(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUseMaterialDataRow*>(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarUseMaterialDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarUseMaterialDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CGOHGKHBEBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGOHGKHBEBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CGOHGKHBEBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGOHGKHBEBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CGOHGKHBEBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarUseMaterialDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarUseMaterialDataRow*))((::PBYTE)hIl2Cpp + CGOHGKHBEBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

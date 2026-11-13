#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarBreakDamageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEHMBOHILJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6B7580)
#define IEHMBOHILJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7B00)
#define IEHMBOHILJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6B76F0)
#define IEHMBOHILJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6B7030)
#define IEHMBOHILJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6B72C0)
#define IEHMBOHILJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6B7790)
#define IEHMBOHILJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6B77E0)
#define IEHMBOHILJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6B75C0)
#define IEHMBOHILJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6B7260)
#define IEHMBOHILJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6B7430)
#define IEHMBOHILJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6B7650)
#define IEHMBOHILJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6B6FB0)

inline static constexpr unsigned int IEHMBOHILJG_TypeDefinitionIndex = 12829;

	class IEHMBOHILJG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x1E0B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x1E0B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>**)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x1E0C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x6690);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IEHMBOHILJG")->GetStaticField(0x6691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>*(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarBreakDamageRow*>(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarBreakDamageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarBreakDamageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IEHMBOHILJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEHMBOHILJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IEHMBOHILJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarBreakDamageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarBreakDamageRow*))((::PBYTE)hIl2Cpp + IEHMBOHILJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHBHPFDKMPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D7D3930)
#define BHBHPFDKMPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7D3F00)
#define BHBHPFDKMPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D7D3AA0)
#define BHBHPFDKMPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D7D33A0)
#define BHBHPFDKMPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D7D3630)
#define BHBHPFDKMPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D7D3B40)
#define BHBHPFDKMPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D7D3B90)
#define BHBHPFDKMPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D7D3970)
#define BHBHPFDKMPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D7D35D0)
#define BHBHPFDKMPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D7D37A0)
#define BHBHPFDKMPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D7D3A00)
#define BHBHPFDKMPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D7D3320)

inline static constexpr unsigned int BHBHPFDKMPC_TypeDefinitionIndex = 11036;

	class BHBHPFDKMPC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x41CB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x41CB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0x41CC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0xFA70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BHBHPFDKMPC")->GetStaticField(0xFA71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>*(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEffectRow*>(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHPFDKMPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEffectRow*))((::PBYTE)hIl2Cpp + BHBHPFDKMPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

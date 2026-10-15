#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingMatchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPOONFHJMNP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D12D1D0)
#define LPOONFHJMNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12D7A0)
#define LPOONFHJMNP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D12D340)
#define LPOONFHJMNP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D12CC40)
#define LPOONFHJMNP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D12CED0)
#define LPOONFHJMNP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D12D3E0)
#define LPOONFHJMNP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D12D430)
#define LPOONFHJMNP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D12D210)
#define LPOONFHJMNP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D12CE70)
#define LPOONFHJMNP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D12D040)
#define LPOONFHJMNP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D12D2A0)
#define LPOONFHJMNP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D12CBC0)

inline static constexpr unsigned int LPOONFHJMNP_TypeDefinitionIndex = 10959;

	class LPOONFHJMNP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*>**)UnitySDK::FromName("", "LPOONFHJMNP")->GetStaticField(0x46B70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPOONFHJMNP")->GetStaticField(0x46B78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPOONFHJMNP")->GetStaticField(0x46B80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPOONFHJMNP")->GetStaticField(0x10DE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPOONFHJMNP")->GetStaticField(0x10DE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*>*(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingMatchRow*>(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingMatchRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingMatchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPOONFHJMNP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOONFHJMNP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPOONFHJMNP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPOONFHJMNP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPOONFHJMNP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingMatchRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingMatchRow*))((::PBYTE)hIl2Cpp + LPOONFHJMNP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

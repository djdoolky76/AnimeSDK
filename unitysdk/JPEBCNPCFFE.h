#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarPathItemTransferRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPEBCNPCFFE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D02D310)
#define JPEBCNPCFFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D02D910)
#define JPEBCNPCFFE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D02D480)
#define JPEBCNPCFFE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D02CD40)
#define JPEBCNPCFFE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D02CFD0)
#define JPEBCNPCFFE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D02D520)
#define JPEBCNPCFFE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D02D570)
#define JPEBCNPCFFE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D02D350)
#define JPEBCNPCFFE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D02CF70)
#define JPEBCNPCFFE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D02D140)
#define JPEBCNPCFFE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D02D3E0)
#define JPEBCNPCFFE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D02CCC0)

inline static constexpr unsigned int JPEBCNPCFFE_TypeDefinitionIndex = 12802;

	class JPEBCNPCFFE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JPEBCNPCFFE")->GetStaticField(0x317F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JPEBCNPCFFE")->GetStaticField(0x317F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>**)UnitySDK::FromName("", "JPEBCNPCFFE")->GetStaticField(0x31800);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JPEBCNPCFFE")->GetStaticField(0xA350);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JPEBCNPCFFE")->GetStaticField(0xA351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>*(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPathItemTransferRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarPathItemTransferRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JPEBCNPCFFE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPEBCNPCFFE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JPEBCNPCFFE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPEBCNPCFFE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JPEBCNPCFFE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarPathItemTransferRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPathItemTransferRow*))((::PBYTE)hIl2Cpp + JPEBCNPCFFE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

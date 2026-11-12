#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTrackRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPEMBAPDFPB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBC3EE0)
#define BPEMBAPDFPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC44B0)
#define BPEMBAPDFPB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBC4050)
#define BPEMBAPDFPB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBC3950)
#define BPEMBAPDFPB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBC3BE0)
#define BPEMBAPDFPB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBC40F0)
#define BPEMBAPDFPB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBC4140)
#define BPEMBAPDFPB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBC3F20)
#define BPEMBAPDFPB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBC3B80)
#define BPEMBAPDFPB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBC3D50)
#define BPEMBAPDFPB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBC3FB0)
#define BPEMBAPDFPB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBC38D0)

inline static constexpr unsigned int BPEMBAPDFPB_TypeDefinitionIndex = 10977;

	class BPEMBAPDFPB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPEMBAPDFPB")->GetStaticField(0x4BAA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>**)UnitySDK::FromName("", "BPEMBAPDFPB")->GetStaticField(0x4BAA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPEMBAPDFPB")->GetStaticField(0x4BAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPEMBAPDFPB")->GetStaticField(0xF5E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPEMBAPDFPB")->GetStaticField(0xF5E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>*(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingTrackRow*>(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingTrackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingTrackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BPEMBAPDFPB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPEMBAPDFPB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPEMBAPDFPB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPEMBAPDFPB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BPEMBAPDFPB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingTrackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingTrackRow*))((::PBYTE)hIl2Cpp + BPEMBAPDFPB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

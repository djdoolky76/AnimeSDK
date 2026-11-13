#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJJMLCIJKCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E829E30)
#define HJJMLCIJKCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82A3B0)
#define HJJMLCIJKCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E829FA0)
#define HJJMLCIJKCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E8298E0)
#define HJJMLCIJKCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E829B70)
#define HJJMLCIJKCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E82A040)
#define HJJMLCIJKCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E82A090)
#define HJJMLCIJKCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E829E70)
#define HJJMLCIJKCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E829B10)
#define HJJMLCIJKCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E829CA0)
#define HJJMLCIJKCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E829F00)
#define HJJMLCIJKCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E829860)

inline static constexpr unsigned int HJJMLCIJKCB_TypeDefinitionIndex = 12155;

	class HJJMLCIJKCB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x180F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x180F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>**)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x18100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x5680);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HJJMLCIJKCB")->GetStaticField(0x5681);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ParkourLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ParkourLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJMLCIJKCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ParkourLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ParkourLevelConfigRow*))((::PBYTE)hIl2Cpp + HJJMLCIJKCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

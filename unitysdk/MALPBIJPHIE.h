#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MALPBIJPHIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D103DD0)
#define MALPBIJPHIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1043D0)
#define MALPBIJPHIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D103F40)
#define MALPBIJPHIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D103800)
#define MALPBIJPHIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D103A90)
#define MALPBIJPHIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D103FE0)
#define MALPBIJPHIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D104030)
#define MALPBIJPHIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D103E10)
#define MALPBIJPHIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D103A30)
#define MALPBIJPHIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D103C00)
#define MALPBIJPHIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D103EA0)
#define MALPBIJPHIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D103780)

inline static constexpr unsigned int MALPBIJPHIE_TypeDefinitionIndex = 13800;

	class MALPBIJPHIE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x40490);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x40498);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x404A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0xF410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0xF411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILHardLevelGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ILHardLevelGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MALPBIJPHIE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MALPBIJPHIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILHardLevelGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILHardLevelGroupConfigRow*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

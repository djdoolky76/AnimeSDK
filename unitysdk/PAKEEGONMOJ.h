#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPlayerLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAKEEGONMOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2937C0)
#define PAKEEGONMOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D293D90)
#define PAKEEGONMOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D293930)
#define PAKEEGONMOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D293230)
#define PAKEEGONMOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2934C0)
#define PAKEEGONMOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2939D0)
#define PAKEEGONMOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D293A20)
#define PAKEEGONMOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D293800)
#define PAKEEGONMOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D293460)
#define PAKEEGONMOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D293630)
#define PAKEEGONMOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D293890)
#define PAKEEGONMOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2931B0)

inline static constexpr unsigned int PAKEEGONMOJ_TypeDefinitionIndex = 13412;

	class PAKEEGONMOJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAKEEGONMOJ")->GetStaticField(0x4CA30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PAKEEGONMOJ")->GetStaticField(0x4CA38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>**)UnitySDK::FromName("", "PAKEEGONMOJ")->GetStaticField(0x4CA40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAKEEGONMOJ")->GetStaticField(0x11860);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAKEEGONMOJ")->GetStaticField(0x11861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPlayerLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPlayerLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PAKEEGONMOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAKEEGONMOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PAKEEGONMOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAKEEGONMOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PAKEEGONMOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPlayerLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPlayerLevelConfigRow*))((::PBYTE)hIl2Cpp + PAKEEGONMOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

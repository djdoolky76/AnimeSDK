#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveDungeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJEDBAGHFMK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCFE870)
#define DJEDBAGHFMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFEDF0)
#define DJEDBAGHFMK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCFE9E0)
#define DJEDBAGHFMK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCFE360)
#define DJEDBAGHFMK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCFE5F0)
#define DJEDBAGHFMK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCFEA80)
#define DJEDBAGHFMK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCFEAD0)
#define DJEDBAGHFMK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCFE8B0)
#define DJEDBAGHFMK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCFE590)
#define DJEDBAGHFMK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCFE720)
#define DJEDBAGHFMK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCFE940)
#define DJEDBAGHFMK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCFE2E0)

inline static constexpr unsigned int DJEDBAGHFMK_TypeDefinitionIndex = 11738;

	class DJEDBAGHFMK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJEDBAGHFMK")->GetStaticField(0x47BE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJEDBAGHFMK")->GetStaticField(0x47BE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>**)UnitySDK::FromName("", "DJEDBAGHFMK")->GetStaticField(0x47BF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJEDBAGHFMK")->GetStaticField(0x10BD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJEDBAGHFMK")->GetStaticField(0x10BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>*(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveDungeonRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveDungeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJEDBAGHFMK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEDBAGHFMK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJEDBAGHFMK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJEDBAGHFMK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJEDBAGHFMK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveDungeonRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveDungeonRow*))((::PBYTE)hIl2Cpp + DJEDBAGHFMK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

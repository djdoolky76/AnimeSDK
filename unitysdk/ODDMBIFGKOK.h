#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODDMBIFGKOK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D254BE0)
#define ODDMBIFGKOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2551B0)
#define ODDMBIFGKOK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D254D50)
#define ODDMBIFGKOK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D254650)
#define ODDMBIFGKOK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2548E0)
#define ODDMBIFGKOK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D254DF0)
#define ODDMBIFGKOK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D254E40)
#define ODDMBIFGKOK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D254C20)
#define ODDMBIFGKOK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D254880)
#define ODDMBIFGKOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D254A50)
#define ODDMBIFGKOK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D254CB0)
#define ODDMBIFGKOK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2545D0)

inline static constexpr unsigned int ODDMBIFGKOK_TypeDefinitionIndex = 11760;

	class ODDMBIFGKOK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODDMBIFGKOK")->GetStaticField(0x32180);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>**)UnitySDK::FromName("", "ODDMBIFGKOK")->GetStaticField(0x32188);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODDMBIFGKOK")->GetStaticField(0x32190);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODDMBIFGKOK")->GetStaticField(0xA920);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODDMBIFGKOK")->GetStaticField(0xA921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>*(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEquipRarityRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEquipRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODDMBIFGKOK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODDMBIFGKOK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODDMBIFGKOK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODDMBIFGKOK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODDMBIFGKOK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEquipRarityRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipRarityRow*))((::PBYTE)hIl2Cpp + ODDMBIFGKOK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipPropertyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBFOHBMKAHA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE85470)
#define HBFOHBMKAHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE85A40)
#define HBFOHBMKAHA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE855E0)
#define HBFOHBMKAHA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE84EE0)
#define HBFOHBMKAHA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE85170)
#define HBFOHBMKAHA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE85680)
#define HBFOHBMKAHA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE856D0)
#define HBFOHBMKAHA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE854B0)
#define HBFOHBMKAHA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE85110)
#define HBFOHBMKAHA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE852E0)
#define HBFOHBMKAHA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE85540)
#define HBFOHBMKAHA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE84E60)

inline static constexpr unsigned int HBFOHBMKAHA_TypeDefinitionIndex = 11758;

	class HBFOHBMKAHA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBFOHBMKAHA")->GetStaticField(0x1B740);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*>**)UnitySDK::FromName("", "HBFOHBMKAHA")->GetStaticField(0x1B748);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HBFOHBMKAHA")->GetStaticField(0x1B750);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBFOHBMKAHA")->GetStaticField(0x6300);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBFOHBMKAHA")->GetStaticField(0x6301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*>*(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipPropertyRow*>(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEquipPropertyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEquipPropertyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBFOHBMKAHA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFOHBMKAHA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBFOHBMKAHA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFOHBMKAHA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBFOHBMKAHA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEquipPropertyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipPropertyRow*))((::PBYTE)hIl2Cpp + HBFOHBMKAHA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

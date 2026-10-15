#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMDPJNGFHOC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E53E0)
#define LMDPJNGFHOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E59B0)
#define LMDPJNGFHOC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E5550)
#define LMDPJNGFHOC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E4E50)
#define LMDPJNGFHOC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E50E0)
#define LMDPJNGFHOC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E55F0)
#define LMDPJNGFHOC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E5640)
#define LMDPJNGFHOC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E5420)
#define LMDPJNGFHOC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E5080)
#define LMDPJNGFHOC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E5250)
#define LMDPJNGFHOC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E54B0)
#define LMDPJNGFHOC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E4DD0)

inline static constexpr unsigned int LMDPJNGFHOC_TypeDefinitionIndex = 11756;

	class LMDPJNGFHOC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>**)UnitySDK::FromName("", "LMDPJNGFHOC")->GetStaticField(0x3E7D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMDPJNGFHOC")->GetStaticField(0x3E7D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMDPJNGFHOC")->GetStaticField(0x3E7E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMDPJNGFHOC")->GetStaticField(0xEC10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMDPJNGFHOC")->GetStaticField(0xEC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>*(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRow*>(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEquipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LMDPJNGFHOC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMDPJNGFHOC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMDPJNGFHOC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDPJNGFHOC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMDPJNGFHOC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipRow*))((::PBYTE)hIl2Cpp + LMDPJNGFHOC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

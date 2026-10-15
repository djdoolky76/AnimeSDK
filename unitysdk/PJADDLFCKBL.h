#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapDefaultEntranceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJADDLFCKBL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2F2950)
#define PJADDLFCKBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F2ED0)
#define PJADDLFCKBL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2F2AC0)
#define PJADDLFCKBL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2F2400)
#define PJADDLFCKBL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2F2690)
#define PJADDLFCKBL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2F2B60)
#define PJADDLFCKBL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2F2BB0)
#define PJADDLFCKBL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2F2990)
#define PJADDLFCKBL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2F2630)
#define PJADDLFCKBL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2F27C0)
#define PJADDLFCKBL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2F2A20)
#define PJADDLFCKBL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2F2380)

	class PJADDLFCKBL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PJADDLFCKBL")->GetStaticField(0x44430);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PJADDLFCKBL")->GetStaticField(0x44438);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>**)UnitySDK::FromName("", "PJADDLFCKBL")->GetStaticField(0x44440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PJADDLFCKBL")->GetStaticField(0x10470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJADDLFCKBL")->GetStaticField(0x10471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapDefaultEntranceRow*>(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MapDefaultEntranceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MapDefaultEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PJADDLFCKBL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJADDLFCKBL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PJADDLFCKBL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJADDLFCKBL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PJADDLFCKBL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MapDefaultEntranceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MapDefaultEntranceRow*))((::PBYTE)hIl2Cpp + PJADDLFCKBL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

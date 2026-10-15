#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFluteTalkConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCFMAICMPIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1F4730)
#define NCFMAICMPIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1F4D00)
#define NCFMAICMPIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1F48A0)
#define NCFMAICMPIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1F41A0)
#define NCFMAICMPIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1F4430)
#define NCFMAICMPIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1F4940)
#define NCFMAICMPIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1F4990)
#define NCFMAICMPIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1F4770)
#define NCFMAICMPIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1F43D0)
#define NCFMAICMPIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1F45A0)
#define NCFMAICMPIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1F4800)
#define NCFMAICMPIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1F4120)

inline static constexpr unsigned int NCFMAICMPIE_TypeDefinitionIndex = 14108;

	class NCFMAICMPIE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NCFMAICMPIE")->GetStaticField(0x2D5E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*>**)UnitySDK::FromName("", "NCFMAICMPIE")->GetStaticField(0x2D5E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCFMAICMPIE")->GetStaticField(0x2D5F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCFMAICMPIE")->GetStaticField(0x93D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCFMAICMPIE")->GetStaticField(0x93D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimFluteTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FiveDimFluteTalkConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimFluteTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NCFMAICMPIE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFMAICMPIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NCFMAICMPIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCFMAICMPIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NCFMAICMPIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FiveDimFluteTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimFluteTalkConfigRow*))((::PBYTE)hIl2Cpp + NCFMAICMPIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

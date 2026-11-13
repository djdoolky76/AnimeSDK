#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertLevelResultTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMFAIEEKCFC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E80B4A0)
#define DMFAIEEKCFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80BAA0)
#define DMFAIEEKCFC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E80B610)
#define DMFAIEEKCFC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E80AED0)
#define DMFAIEEKCFC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E80B160)
#define DMFAIEEKCFC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E80B6B0)
#define DMFAIEEKCFC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E80B700)
#define DMFAIEEKCFC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E80B4E0)
#define DMFAIEEKCFC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E80B100)
#define DMFAIEEKCFC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E80B2D0)
#define DMFAIEEKCFC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E80B570)
#define DMFAIEEKCFC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E80AE50)

inline static constexpr unsigned int DMFAIEEKCFC_TypeDefinitionIndex = 11236;

	class DMFAIEEKCFC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMFAIEEKCFC")->GetStaticField(0x3FA50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMFAIEEKCFC")->GetStaticField(0x3FA58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*>**)UnitySDK::FromName("", "DMFAIEEKCFC")->GetStaticField(0x3FA60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMFAIEEKCFC")->GetStaticField(0xCC50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMFAIEEKCFC")->GetStaticField(0xCC51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*>*(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelResultTextRow*>(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertLevelResultTextRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ComicDessertLevelResultTextRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DMFAIEEKCFC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFAIEEKCFC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMFAIEEKCFC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMFAIEEKCFC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMFAIEEKCFC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertLevelResultTextRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertLevelResultTextRow*))((::PBYTE)hIl2Cpp + DMFAIEEKCFC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

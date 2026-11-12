#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertOrderTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNHJGCLBMMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E51C2A0)
#define PNHJGCLBMMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51C870)
#define PNHJGCLBMMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E51C410)
#define PNHJGCLBMMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E51BD10)
#define PNHJGCLBMMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E51BFA0)
#define PNHJGCLBMMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E51C4B0)
#define PNHJGCLBMMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E51C500)
#define PNHJGCLBMMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E51C2E0)
#define PNHJGCLBMMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E51BF40)
#define PNHJGCLBMMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E51C110)
#define PNHJGCLBMMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E51C370)
#define PNHJGCLBMMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E51BC90)

inline static constexpr unsigned int PNHJGCLBMMM_TypeDefinitionIndex = 11230;

	class PNHJGCLBMMM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*>**)UnitySDK::FromName("", "PNHJGCLBMMM")->GetStaticField(0x3B0C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNHJGCLBMMM")->GetStaticField(0x3B0C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNHJGCLBMMM")->GetStaticField(0x3B0D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNHJGCLBMMM")->GetStaticField(0xCF70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNHJGCLBMMM")->GetStaticField(0xCF71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*>*(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertOrderTypeRow*>(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertOrderTypeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertOrderTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNHJGCLBMMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHJGCLBMMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNHJGCLBMMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNHJGCLBMMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNHJGCLBMMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertOrderTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertOrderTypeRow*))((::PBYTE)hIl2Cpp + PNHJGCLBMMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

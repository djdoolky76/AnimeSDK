#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenOutfitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDJPFEDICBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D11CFF0)
#define MDJPFEDICBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D11D570)
#define MDJPFEDICBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D11D160)
#define MDJPFEDICBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D11CAA0)
#define MDJPFEDICBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D11CD30)
#define MDJPFEDICBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D11D200)
#define MDJPFEDICBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D11D250)
#define MDJPFEDICBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D11D030)
#define MDJPFEDICBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D11CCD0)
#define MDJPFEDICBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D11CE60)
#define MDJPFEDICBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D11D0C0)
#define MDJPFEDICBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D11CA20)

inline static constexpr unsigned int MDJPFEDICBI_TypeDefinitionIndex = 11670;

	class MDJPFEDICBI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x427F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x427F8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x42800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0xFC90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0xFC91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>*(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenOutfitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenOutfitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDJPFEDICBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJPFEDICBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MDJPFEDICBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDJPFEDICBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MDJPFEDICBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenOutfitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenOutfitRow*))((::PBYTE)hIl2Cpp + MDJPFEDICBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

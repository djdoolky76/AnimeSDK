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

#define MDJPFEDICBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BB93330)
#define MDJPFEDICBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB938B0)
#define MDJPFEDICBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BB934A0)
#define MDJPFEDICBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BB92E20)
#define MDJPFEDICBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BB930B0)
#define MDJPFEDICBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BB93540)
#define MDJPFEDICBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BB93590)
#define MDJPFEDICBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BB93370)
#define MDJPFEDICBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BB93050)
#define MDJPFEDICBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BB931E0)
#define MDJPFEDICBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BB93400)
#define MDJPFEDICBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BB92DA0)

inline static constexpr unsigned int MDJPFEDICBI_TypeDefinitionIndex = 11721;

	class MDJPFEDICBI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x417F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x417F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitRow*>**)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0x41800);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0xD1F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDJPFEDICBI")->GetStaticField(0xD1F1);
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

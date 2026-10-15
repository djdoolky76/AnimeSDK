#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnhancedAdventurePlayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPHDOAPIFJN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09C300)
#define KPHDOAPIFJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09C8C0)
#define KPHDOAPIFJN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09C470)
#define KPHDOAPIFJN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09BD60)
#define KPHDOAPIFJN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09BFF0)
#define KPHDOAPIFJN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09C510)
#define KPHDOAPIFJN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09C560)
#define KPHDOAPIFJN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09C340)
#define KPHDOAPIFJN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09BF90)
#define KPHDOAPIFJN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09C160)
#define KPHDOAPIFJN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09C3D0)
#define KPHDOAPIFJN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09BCE0)

inline static constexpr unsigned int KPHDOAPIFJN_TypeDefinitionIndex = 12588;

	class KPHDOAPIFJN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*>**)UnitySDK::FromName("", "KPHDOAPIFJN")->GetStaticField(0x37810);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPHDOAPIFJN")->GetStaticField(0x37818);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPHDOAPIFJN")->GetStaticField(0x37820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPHDOAPIFJN")->GetStaticField(0xB390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPHDOAPIFJN")->GetStaticField(0xB391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*>*(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAdventurePlayerRow*>(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EnhancedAdventurePlayerRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::EnhancedAdventurePlayerRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KPHDOAPIFJN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPHDOAPIFJN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPHDOAPIFJN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPHDOAPIFJN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPHDOAPIFJN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EnhancedAdventurePlayerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnhancedAdventurePlayerRow*))((::PBYTE)hIl2Cpp + KPHDOAPIFJN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

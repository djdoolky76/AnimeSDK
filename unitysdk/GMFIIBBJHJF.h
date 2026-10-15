#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleSwitchMascotRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GMFIIBBJHJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE68370)
#define GMFIIBBJHJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE688F0)
#define GMFIIBBJHJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE684E0)
#define GMFIIBBJHJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE67E20)
#define GMFIIBBJHJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE680B0)
#define GMFIIBBJHJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE68580)
#define GMFIIBBJHJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE685D0)
#define GMFIIBBJHJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE683B0)
#define GMFIIBBJHJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE68050)
#define GMFIIBBJHJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE681E0)
#define GMFIIBBJHJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE68440)
#define GMFIIBBJHJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE67DA0)

inline static constexpr unsigned int GMFIIBBJHJF_TypeDefinitionIndex = 14095;

	class GMFIIBBJHJF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GMFIIBBJHJF")->GetStaticField(0x19D20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GMFIIBBJHJF")->GetStaticField(0x19D28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*>**)UnitySDK::FromName("", "GMFIIBBJHJF")->GetStaticField(0x19D30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GMFIIBBJHJF")->GetStaticField(0x5D90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GMFIIBBJHJF")->GetStaticField(0x5D91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*>*(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchMascotRow*>(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleSwitchMascotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GMFIIBBJHJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFIIBBJHJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GMFIIBBJHJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMFIIBBJHJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GMFIIBBJHJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleSwitchMascotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleSwitchMascotRow*))((::PBYTE)hIl2Cpp + GMFIIBBJHJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

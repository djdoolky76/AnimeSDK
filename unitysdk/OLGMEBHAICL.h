#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/MonopolyCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyContentDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLGMEBHAICL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D26BA30)
#define OLGMEBHAICL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26C030)
#define OLGMEBHAICL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D26BBA0)
#define OLGMEBHAICL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D26B450)
#define OLGMEBHAICL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D26B6E0)
#define OLGMEBHAICL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D26BC40)
#define OLGMEBHAICL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D26BC90)
#define OLGMEBHAICL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D26BA70)
#define OLGMEBHAICL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D26B680)
#define OLGMEBHAICL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D26B850)
#define OLGMEBHAICL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D26BB00)
#define OLGMEBHAICL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D26B3D0)

inline static constexpr unsigned int OLGMEBHAICL_TypeDefinitionIndex = 12088;

	class OLGMEBHAICL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLGMEBHAICL")->GetStaticField(0x49C90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>**)UnitySDK::FromName("", "OLGMEBHAICL")->GetStaticField(0x49C98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLGMEBHAICL")->GetStaticField(0x49CA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLGMEBHAICL")->GetStaticField(0x11070);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLGMEBHAICL")->GetStaticField(0x11071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyContentDisplayRow*>(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyContentDisplayRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::MonopolyCellType a2)
		{
			return ((::RPG::GameCore::MonopolyContentDisplayRow*(*)(::System::UInt32, ::RPG::GameCore::MonopolyCellType))((::PBYTE)hIl2Cpp + OLGMEBHAICL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLGMEBHAICL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLGMEBHAICL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLGMEBHAICL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLGMEBHAICL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyContentDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyContentDisplayRow*))((::PBYTE)hIl2Cpp + OLGMEBHAICL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

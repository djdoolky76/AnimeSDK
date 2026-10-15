#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpaceZooCustomizedCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLCDONOEKMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2694D0)
#define OLCDONOEKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D269AA0)
#define OLCDONOEKMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D269640)
#define OLCDONOEKMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D268F40)
#define OLCDONOEKMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2691D0)
#define OLCDONOEKMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2696E0)
#define OLCDONOEKMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D269730)
#define OLCDONOEKMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D269510)
#define OLCDONOEKMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D269170)
#define OLCDONOEKMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D269340)
#define OLCDONOEKMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2695A0)
#define OLCDONOEKMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D268EC0)

inline static constexpr unsigned int OLCDONOEKMO_TypeDefinitionIndex = 12374;

	class OLCDONOEKMO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x49B40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x49B48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>**)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x49B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x11000);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLCDONOEKMO")->GetStaticField(0x11001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>*(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooCustomizedCatRow*>(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooCustomizedCatRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SpaceZooCustomizedCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLCDONOEKMO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCDONOEKMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLCDONOEKMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SpaceZooCustomizedCatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooCustomizedCatRow*))((::PBYTE)hIl2Cpp + OLCDONOEKMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

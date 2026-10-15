#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCIGPDIEKGE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA0C530)
#define CCIGPDIEKGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0CAB0)
#define CCIGPDIEKGE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA0C6A0)
#define CCIGPDIEKGE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA0C020)
#define CCIGPDIEKGE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA0C2B0)
#define CCIGPDIEKGE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA0C740)
#define CCIGPDIEKGE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA0C790)
#define CCIGPDIEKGE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA0C570)
#define CCIGPDIEKGE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA0C250)
#define CCIGPDIEKGE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA0C3E0)
#define CCIGPDIEKGE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA0C600)
#define CCIGPDIEKGE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA0BFA0)

inline static constexpr unsigned int CCIGPDIEKGE_TypeDefinitionIndex = 10996;

	class CCIGPDIEKGE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CCIGPDIEKGE")->GetStaticField(0x3BA00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CCIGPDIEKGE")->GetStaticField(0x3BA08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>**)UnitySDK::FromName("", "CCIGPDIEKGE")->GetStaticField(0x3BA10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CCIGPDIEKGE")->GetStaticField(0xCB00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCIGPDIEKGE")->GetStaticField(0xCB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>*(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceCatRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCIGPDIEKGE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCIGPDIEKGE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CCIGPDIEKGE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCIGPDIEKGE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CCIGPDIEKGE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceCatRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceCatRow*))((::PBYTE)hIl2Cpp + CCIGPDIEKGE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

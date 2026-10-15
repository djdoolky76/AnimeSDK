#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveBuildRewardBoxRandomConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMIOMOCOBOL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE98F20)
#define HMIOMOCOBOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE994F0)
#define HMIOMOCOBOL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE99090)
#define HMIOMOCOBOL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE98990)
#define HMIOMOCOBOL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE98C20)
#define HMIOMOCOBOL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE99130)
#define HMIOMOCOBOL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE99180)
#define HMIOMOCOBOL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE98F60)
#define HMIOMOCOBOL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE98BC0)
#define HMIOMOCOBOL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE98D90)
#define HMIOMOCOBOL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE98FF0)
#define HMIOMOCOBOL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE98910)

inline static constexpr unsigned int HMIOMOCOBOL_TypeDefinitionIndex = 11439;

	class HMIOMOCOBOL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*>**)UnitySDK::FromName("", "HMIOMOCOBOL")->GetStaticField(0x1D270);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HMIOMOCOBOL")->GetStaticField(0x1D278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMIOMOCOBOL")->GetStaticField(0x1D280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMIOMOCOBOL")->GetStaticField(0x6470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMIOMOCOBOL")->GetStaticField(0x6471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*>(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMIOMOCOBOL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMIOMOCOBOL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMIOMOCOBOL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMIOMOCOBOL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMIOMOCOBOL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildRewardBoxRandomConfigRow*))((::PBYTE)hIl2Cpp + HMIOMOCOBOL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

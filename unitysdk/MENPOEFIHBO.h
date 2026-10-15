#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MENPOEFIHBO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D128520)
#define MENPOEFIHBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D128AF0)
#define MENPOEFIHBO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D128690)
#define MENPOEFIHBO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D127F90)
#define MENPOEFIHBO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D128220)
#define MENPOEFIHBO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D128730)
#define MENPOEFIHBO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D128780)
#define MENPOEFIHBO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D128560)
#define MENPOEFIHBO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1281C0)
#define MENPOEFIHBO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D128390)
#define MENPOEFIHBO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1285F0)
#define MENPOEFIHBO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D127F10)

inline static constexpr unsigned int MENPOEFIHBO_TypeDefinitionIndex = 12929;

	class MENPOEFIHBO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>**)UnitySDK::FromName("", "MENPOEFIHBO")->GetStaticField(0x43520);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MENPOEFIHBO")->GetStaticField(0x43528);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MENPOEFIHBO")->GetStaticField(0x43530);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MENPOEFIHBO")->GetStaticField(0xFF80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MENPOEFIHBO")->GetStaticField(0xFF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeConfigRow*>(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MENPOEFIHBO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENPOEFIHBO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MENPOEFIHBO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MENPOEFIHBO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MENPOEFIHBO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeConfigRow*))((::PBYTE)hIl2Cpp + MENPOEFIHBO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

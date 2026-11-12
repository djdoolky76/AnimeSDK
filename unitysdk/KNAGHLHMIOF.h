#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepletablePoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KNAGHLHMIOF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2A90D0)
#define KNAGHLHMIOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A96A0)
#define KNAGHLHMIOF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2A9240)
#define KNAGHLHMIOF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2A8B40)
#define KNAGHLHMIOF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2A8DD0)
#define KNAGHLHMIOF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2A92E0)
#define KNAGHLHMIOF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2A9330)
#define KNAGHLHMIOF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2A9110)
#define KNAGHLHMIOF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2A8D70)
#define KNAGHLHMIOF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2A8F40)
#define KNAGHLHMIOF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2A91A0)
#define KNAGHLHMIOF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2A8AC0)

inline static constexpr unsigned int KNAGHLHMIOF_TypeDefinitionIndex = 13198;

	class KNAGHLHMIOF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*>**)UnitySDK::FromName("", "KNAGHLHMIOF")->GetStaticField(0x303F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KNAGHLHMIOF")->GetStaticField(0x303F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KNAGHLHMIOF")->GetStaticField(0x30400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KNAGHLHMIOF")->GetStaticField(0xA2E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KNAGHLHMIOF")->GetStaticField(0xA2E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*>*(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolRow*>(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DepletablePoolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DepletablePoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KNAGHLHMIOF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNAGHLHMIOF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KNAGHLHMIOF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KNAGHLHMIOF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KNAGHLHMIOF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DepletablePoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DepletablePoolRow*))((::PBYTE)hIl2Cpp + KNAGHLHMIOF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

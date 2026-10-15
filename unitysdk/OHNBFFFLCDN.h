#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingEnemyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHNBFFFLCDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D280A00)
#define OHNBFFFLCDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D280FD0)
#define OHNBFFFLCDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D280B70)
#define OHNBFFFLCDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D280470)
#define OHNBFFFLCDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D280700)
#define OHNBFFFLCDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D280C10)
#define OHNBFFFLCDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D280C60)
#define OHNBFFFLCDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D280A40)
#define OHNBFFFLCDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2806A0)
#define OHNBFFFLCDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D280870)
#define OHNBFFFLCDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D280AD0)
#define OHNBFFFLCDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2803F0)

inline static constexpr unsigned int OHNBFFFLCDN_TypeDefinitionIndex = 11083;

	class OHNBFFFLCDN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OHNBFFFLCDN")->GetStaticField(0x37160);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*>**)UnitySDK::FromName("", "OHNBFFFLCDN")->GetStaticField(0x37168);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OHNBFFFLCDN")->GetStaticField(0x37170);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OHNBFFFLCDN")->GetStaticField(0xBAD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OHNBFFFLCDN")->GetStaticField(0xBAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*>*(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingEnemyRow*>(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingEnemyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingEnemyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHNBFFFLCDN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHNBFFFLCDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OHNBFFFLCDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHNBFFFLCDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OHNBFFFLCDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingEnemyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingEnemyRow*))((::PBYTE)hIl2Cpp + OHNBFFFLCDN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

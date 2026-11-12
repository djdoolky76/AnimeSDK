#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MCMGOPIDDMJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNGGFJOENHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E23F710)
#define JNGGFJOENHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23FCE0)
#define JNGGFJOENHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E23F880)
#define JNGGFJOENHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E23F180)
#define JNGGFJOENHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E23F410)
#define JNGGFJOENHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E23F920)
#define JNGGFJOENHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E23F970)
#define JNGGFJOENHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E23F750)
#define JNGGFJOENHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E23F3B0)
#define JNGGFJOENHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E23F580)
#define JNGGFJOENHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E23F7E0)
#define JNGGFJOENHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E23F100)

inline static constexpr unsigned int JNGGFJOENHN_TypeDefinitionIndex = 11550;

	class JNGGFJOENHN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*>**)UnitySDK::FromName("", "JNGGFJOENHN")->GetStaticField(0x2F7D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNGGFJOENHN")->GetStaticField(0x2F7D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JNGGFJOENHN")->GetStaticField(0x2F7E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNGGFJOENHN")->GetStaticField(0x9FD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNGGFJOENHN")->GetStaticField(0x9FD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*>*(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MCMGOPIDDMJ*>(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::MCMGOPIDDMJ* LMBKNCAIDLC(::RPG::GameCore::FateClazzType a1)
		{
			return ((::MCMGOPIDDMJ*(*)(::RPG::GameCore::FateClazzType))((::PBYTE)hIl2Cpp + JNGGFJOENHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGGFJOENHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNGGFJOENHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNGGFJOENHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNGGFJOENHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MCMGOPIDDMJ* a1)
		{
			return ((::System::Void(*)(::MCMGOPIDDMJ*))((::PBYTE)hIl2Cpp + JNGGFJOENHN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

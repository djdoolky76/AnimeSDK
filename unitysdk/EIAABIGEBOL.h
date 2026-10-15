#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MechanismBarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIAABIGEBOL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD85780)
#define EIAABIGEBOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD85D50)
#define EIAABIGEBOL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD858F0)
#define EIAABIGEBOL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD851F0)
#define EIAABIGEBOL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD85480)
#define EIAABIGEBOL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD85990)
#define EIAABIGEBOL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD859E0)
#define EIAABIGEBOL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD857C0)
#define EIAABIGEBOL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD85420)
#define EIAABIGEBOL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD855F0)
#define EIAABIGEBOL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD85850)
#define EIAABIGEBOL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD85170)

inline static constexpr unsigned int EIAABIGEBOL_TypeDefinitionIndex = 14122;

	class EIAABIGEBOL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIAABIGEBOL")->GetStaticField(0x54060);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>**)UnitySDK::FromName("", "EIAABIGEBOL")->GetStaticField(0x54068);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EIAABIGEBOL")->GetStaticField(0x54070);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIAABIGEBOL")->GetStaticField(0x12A60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIAABIGEBOL")->GetStaticField(0x12A61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarConfigRow*>(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MechanismBarConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MechanismBarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EIAABIGEBOL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIAABIGEBOL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIAABIGEBOL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIAABIGEBOL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIAABIGEBOL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MechanismBarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MechanismBarConfigRow*))((::PBYTE)hIl2Cpp + EIAABIGEBOL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

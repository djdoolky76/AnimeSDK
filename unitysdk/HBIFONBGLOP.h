#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutSceneConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBIFONBGLOP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE580C0)
#define HBIFONBGLOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE58690)
#define HBIFONBGLOP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE58230)
#define HBIFONBGLOP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE57B10)
#define HBIFONBGLOP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE57DA0)
#define HBIFONBGLOP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE582D0)
#define HBIFONBGLOP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE58320)
#define HBIFONBGLOP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE58100)
#define HBIFONBGLOP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE57D40)
#define HBIFONBGLOP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE57F10)
#define HBIFONBGLOP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE58190)
#define HBIFONBGLOP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE57A90)

inline static constexpr unsigned int HBIFONBGLOP_TypeDefinitionIndex = 13102;

	class HBIFONBGLOP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HBIFONBGLOP")->GetStaticField(0x18D60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBIFONBGLOP")->GetStaticField(0x18D68);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>**)UnitySDK::FromName("", "HBIFONBGLOP")->GetStaticField(0x18D70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBIFONBGLOP")->GetStaticField(0x5580);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBIFONBGLOP")->GetStaticField(0x5581);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutSceneConfigRow*>(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CutSceneConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::CutSceneConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + HBIFONBGLOP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBIFONBGLOP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBIFONBGLOP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBIFONBGLOP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBIFONBGLOP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CutSceneConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CutSceneConfigRow*))((::PBYTE)hIl2Cpp + HBIFONBGLOP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterAtlasExtraPhasesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCMLNDGMJIG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE5FE70)
#define HCMLNDGMJIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE60430)
#define HCMLNDGMJIG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE5FFE0)
#define HCMLNDGMJIG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE5F8D0)
#define HCMLNDGMJIG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE5FB60)
#define HCMLNDGMJIG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE60080)
#define HCMLNDGMJIG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE600D0)
#define HCMLNDGMJIG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE5FEB0)
#define HCMLNDGMJIG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE5FB00)
#define HCMLNDGMJIG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE5FCD0)
#define HCMLNDGMJIG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE5FF40)
#define HCMLNDGMJIG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE5F850)

inline static constexpr unsigned int HCMLNDGMJIG_TypeDefinitionIndex = 14171;

	class HCMLNDGMJIG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HCMLNDGMJIG")->GetStaticField(0x19140);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>**)UnitySDK::FromName("", "HCMLNDGMJIG")->GetStaticField(0x19148);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCMLNDGMJIG")->GetStaticField(0x19150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCMLNDGMJIG")->GetStaticField(0x5690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCMLNDGMJIG")->GetStaticField(0x5691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>*(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonsterAtlasExtraPhasesRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::MonsterAtlasExtraPhasesRow*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + HCMLNDGMJIG_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMLNDGMJIG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HCMLNDGMJIG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCMLNDGMJIG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HCMLNDGMJIG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonsterAtlasExtraPhasesRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonsterAtlasExtraPhasesRow*))((::PBYTE)hIl2Cpp + HCMLNDGMJIG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

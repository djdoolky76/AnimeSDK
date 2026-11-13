#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCFEGACKNJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F606E30)
#define DCFEGACKNJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6073B0)
#define DCFEGACKNJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F606FA0)
#define DCFEGACKNJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F6068E0)
#define DCFEGACKNJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F606B70)
#define DCFEGACKNJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F607040)
#define DCFEGACKNJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F607090)
#define DCFEGACKNJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F606E70)
#define DCFEGACKNJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F606B10)
#define DCFEGACKNJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F606CA0)
#define DCFEGACKNJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F606F00)
#define DCFEGACKNJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F606860)

inline static constexpr unsigned int DCFEGACKNJI_TypeDefinitionIndex = 11162;

	class DCFEGACKNJI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x3A6D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x3A6D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x3A6E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0xBAB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0xBAB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>*(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelSkillRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCFEGACKNJI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCFEGACKNJI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCFEGACKNJI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCFEGACKNJI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCFEGACKNJI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDuelSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelSkillRow*))((::PBYTE)hIl2Cpp + DCFEGACKNJI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

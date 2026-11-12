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

#define DCFEGACKNJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DEB0F90)
#define DCFEGACKNJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB1510)
#define DCFEGACKNJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DEB1100)
#define DCFEGACKNJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DEB0A40)
#define DCFEGACKNJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DEB0CD0)
#define DCFEGACKNJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DEB11A0)
#define DCFEGACKNJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DEB11F0)
#define DCFEGACKNJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DEB0FD0)
#define DCFEGACKNJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DEB0C70)
#define DCFEGACKNJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DEB0E00)
#define DCFEGACKNJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DEB1060)
#define DCFEGACKNJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DEB09C0)

inline static constexpr unsigned int DCFEGACKNJI_TypeDefinitionIndex = 11162;

	class DCFEGACKNJI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x39070);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelSkillRow*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x39078);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0x39080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0xC660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCFEGACKNJI")->GetStaticField(0xC661);
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

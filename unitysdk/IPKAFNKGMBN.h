#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBinaryDiffAddRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPKAFNKGMBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF01850)
#define IPKAFNKGMBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF01E50)
#define IPKAFNKGMBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF019C0)
#define IPKAFNKGMBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF01280)
#define IPKAFNKGMBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF01510)
#define IPKAFNKGMBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF01A60)
#define IPKAFNKGMBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF01AB0)
#define IPKAFNKGMBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF01890)
#define IPKAFNKGMBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF014B0)
#define IPKAFNKGMBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF01680)
#define IPKAFNKGMBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF01920)
#define IPKAFNKGMBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF01200)

inline static constexpr unsigned int IPKAFNKGMBN_TypeDefinitionIndex = 13612;

	class IPKAFNKGMBN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPKAFNKGMBN")->GetStaticField(0x24250);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPKAFNKGMBN")->GetStaticField(0x24258);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*>**)UnitySDK::FromName("", "IPKAFNKGMBN")->GetStaticField(0x24260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPKAFNKGMBN")->GetStaticField(0x7D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPKAFNKGMBN")->GetStaticField(0x7D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IPKAFNKGMBN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKAFNKGMBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPKAFNKGMBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPKAFNKGMBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPKAFNKGMBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBinaryDiffAddRuleConfigRow*))((::PBYTE)hIl2Cpp + IPKAFNKGMBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightProjectionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCIJEGJHOOA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFEA580)
#define JCIJEGJHOOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFEAAC0)
#define JCIJEGJHOOA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFEA660)
#define JCIJEGJHOOA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF21970)
#define JCIJEGJHOOA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFEA280)
#define JCIJEGJHOOA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFEA700)
#define JCIJEGJHOOA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFEA750)
#define JCIJEGJHOOA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFA86D0)
#define JCIJEGJHOOA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFEA220)
#define JCIJEGJHOOA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFEA3F0)
#define JCIJEGJHOOA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFEA5C0)
#define JCIJEGJHOOA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFEA1A0)

inline static constexpr unsigned int JCIJEGJHOOA_TypeDefinitionIndex = 13496;

	class JCIJEGJHOOA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JCIJEGJHOOA")->GetStaticField(0x2BB50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JCIJEGJHOOA")->GetStaticField(0x2BB58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*>**)UnitySDK::FromName("", "JCIJEGJHOOA")->GetStaticField(0x2BB60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JCIJEGJHOOA")->GetStaticField(0x9290);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JCIJEGJHOOA")->GetStaticField(0x9291);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightProjectionConfigRow*>(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightProjectionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightProjectionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JCIJEGJHOOA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIJEGJHOOA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JCIJEGJHOOA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCIJEGJHOOA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JCIJEGJHOOA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightProjectionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightProjectionConfigRow*))((::PBYTE)hIl2Cpp + JCIJEGJHOOA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

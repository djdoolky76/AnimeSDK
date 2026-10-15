#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCraftConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBHLKHOJNBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D014660)
#define JBHLKHOJNBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D014B50)
#define JBHLKHOJNBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D014740)
#define JBHLKHOJNBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF4F740)
#define JBHLKHOJNBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0143A0)
#define JBHLKHOJNBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0147E0)
#define JBHLKHOJNBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D014830)
#define JBHLKHOJNBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFD6640)
#define JBHLKHOJNBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D014340)
#define JBHLKHOJNBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0144D0)
#define JBHLKHOJNBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0146A0)
#define JBHLKHOJNBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0142C0)

inline static constexpr unsigned int JBHLKHOJNBG_TypeDefinitionIndex = 13452;

	class JBHLKHOJNBG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JBHLKHOJNBG")->GetStaticField(0x2ABC0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JBHLKHOJNBG")->GetStaticField(0x2ABC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*>**)UnitySDK::FromName("", "JBHLKHOJNBG")->GetStaticField(0x2ABD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JBHLKHOJNBG")->GetStaticField(0x8690);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JBHLKHOJNBG")->GetStaticField(0x8691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCraftConfigRow*>(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCraftConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightCraftConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBHLKHOJNBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBHLKHOJNBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBHLKHOJNBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JBHLKHOJNBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JBHLKHOJNBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCraftConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCraftConfigRow*))((::PBYTE)hIl2Cpp + JBHLKHOJNBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

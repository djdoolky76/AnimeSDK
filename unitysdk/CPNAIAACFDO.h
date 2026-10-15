#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCoreRoleInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPNAIAACFDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC94FC0)
#define CPNAIAACFDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC955C0)
#define CPNAIAACFDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC95130)
#define CPNAIAACFDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC949F0)
#define CPNAIAACFDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC94C80)
#define CPNAIAACFDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC951D0)
#define CPNAIAACFDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC95220)
#define CPNAIAACFDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC95000)
#define CPNAIAACFDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC94C20)
#define CPNAIAACFDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC94DF0)
#define CPNAIAACFDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC95090)
#define CPNAIAACFDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC94970)

inline static constexpr unsigned int CPNAIAACFDO_TypeDefinitionIndex = 13687;

	class CPNAIAACFDO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*>**)UnitySDK::FromName("", "CPNAIAACFDO")->GetStaticField(0x40460);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPNAIAACFDO")->GetStaticField(0x40468);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPNAIAACFDO")->GetStaticField(0x40470);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPNAIAACFDO")->GetStaticField(0xF400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPNAIAACFDO")->GetStaticField(0xF401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleInfoRow*>(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCoreRoleInfoRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightCoreRoleInfoRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CPNAIAACFDO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNAIAACFDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPNAIAACFDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPNAIAACFDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPNAIAACFDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCoreRoleInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCoreRoleInfoRow*))((::PBYTE)hIl2Cpp + CPNAIAACFDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

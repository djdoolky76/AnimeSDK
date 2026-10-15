#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBDCFJJLNFC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCA0A80)
#define DBDCFJJLNFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCA1050)
#define DBDCFJJLNFC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCA0BF0)
#define DBDCFJJLNFC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCA04F0)
#define DBDCFJJLNFC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCA0780)
#define DBDCFJJLNFC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCA0C90)
#define DBDCFJJLNFC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCA0CE0)
#define DBDCFJJLNFC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCA0AC0)
#define DBDCFJJLNFC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCA0720)
#define DBDCFJJLNFC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCA08F0)
#define DBDCFJJLNFC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCA0B50)
#define DBDCFJJLNFC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCA0470)

inline static constexpr unsigned int DBDCFJJLNFC_TypeDefinitionIndex = 13444;

	class DBDCFJJLNFC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>**)UnitySDK::FromName("", "DBDCFJJLNFC")->GetStaticField(0x40DB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DBDCFJJLNFC")->GetStaticField(0x40DB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DBDCFJJLNFC")->GetStaticField(0x40DC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DBDCFJJLNFC")->GetStaticField(0xF760);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DBDCFJJLNFC")->GetStaticField(0xF761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightItemConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBDCFJJLNFC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDCFJJLNFC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DBDCFJJLNFC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBDCFJJLNFC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DBDCFJJLNFC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightItemConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightItemConfigRow*))((::PBYTE)hIl2Cpp + DBDCFJJLNFC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

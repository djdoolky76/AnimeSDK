#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialSubmitterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDNOJPDPANA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0E3EA0)
#define LDNOJPDPANA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0E4470)
#define LDNOJPDPANA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0E4010)
#define LDNOJPDPANA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0E3910)
#define LDNOJPDPANA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0E3BA0)
#define LDNOJPDPANA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0E40B0)
#define LDNOJPDPANA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0E4100)
#define LDNOJPDPANA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0E3EE0)
#define LDNOJPDPANA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0E3B40)
#define LDNOJPDPANA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0E3D10)
#define LDNOJPDPANA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0E3F70)
#define LDNOJPDPANA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0E3890)

inline static constexpr unsigned int LDNOJPDPANA_TypeDefinitionIndex = 11960;

	class LDNOJPDPANA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*>**)UnitySDK::FromName("", "LDNOJPDPANA")->GetStaticField(0x3C720);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LDNOJPDPANA")->GetStaticField(0x3C728);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LDNOJPDPANA")->GetStaticField(0x3C730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LDNOJPDPANA")->GetStaticField(0xCEF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LDNOJPDPANA")->GetStaticField(0xCEF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*>*(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MaterialSubmitterRow*>(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MaterialSubmitterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MaterialSubmitterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LDNOJPDPANA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDNOJPDPANA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LDNOJPDPANA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDNOJPDPANA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LDNOJPDPANA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MaterialSubmitterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MaterialSubmitterRow*))((::PBYTE)hIl2Cpp + LDNOJPDPANA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

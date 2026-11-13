#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AtlasConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAFCBKNHBHO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9D1D70)
#define HAFCBKNHBHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D2340)
#define HAFCBKNHBHO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9D1EE0)
#define HAFCBKNHBHO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9D17E0)
#define HAFCBKNHBHO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9D1A70)
#define HAFCBKNHBHO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9D1F80)
#define HAFCBKNHBHO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9D1FD0)
#define HAFCBKNHBHO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9D1DB0)
#define HAFCBKNHBHO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9D1A10)
#define HAFCBKNHBHO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9D1BE0)
#define HAFCBKNHBHO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9D1E40)
#define HAFCBKNHBHO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9D1760)

inline static constexpr unsigned int HAFCBKNHBHO_TypeDefinitionIndex = 12746;

	class HAFCBKNHBHO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x13560);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x13568);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>**)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x13570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x3E10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HAFCBKNHBHO")->GetStaticField(0x3E11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AtlasConfigRow*>(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AtlasConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AtlasConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFCBKNHBHO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AtlasConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AtlasConfigRow*))((::PBYTE)hIl2Cpp + HAFCBKNHBHO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEFKOMBIBJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CF400)
#define NEFKOMBIBJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CF980)
#define NEFKOMBIBJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CF570)
#define NEFKOMBIBJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CEEF0)
#define NEFKOMBIBJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CF180)
#define NEFKOMBIBJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CF610)
#define NEFKOMBIBJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CF660)
#define NEFKOMBIBJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CF440)
#define NEFKOMBIBJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CF120)
#define NEFKOMBIBJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CF2B0)
#define NEFKOMBIBJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CF4D0)
#define NEFKOMBIBJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CEE70)

inline static constexpr unsigned int NEFKOMBIBJF_TypeDefinitionIndex = 12212;

	class NEFKOMBIBJF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NEFKOMBIBJF")->GetStaticField(0x3F4B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*>**)UnitySDK::FromName("", "NEFKOMBIBJF")->GetStaticField(0x3F4B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NEFKOMBIBJF")->GetStaticField(0x3F4C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NEFKOMBIBJF")->GetStaticField(0xEEC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NEFKOMBIBJF")->GetStaticField(0xEEC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*>*(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesCardRow*>(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesCardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NEFKOMBIBJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFKOMBIBJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NEFKOMBIBJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEFKOMBIBJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NEFKOMBIBJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesCardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesCardRow*))((::PBYTE)hIl2Cpp + NEFKOMBIBJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

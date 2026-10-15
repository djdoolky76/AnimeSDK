#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSkinCutinConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLMANCLCCAP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE08110)
#define FLMANCLCCAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE086E0)
#define FLMANCLCCAP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE08280)
#define FLMANCLCCAP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE07B80)
#define FLMANCLCCAP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE07E10)
#define FLMANCLCCAP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE08320)
#define FLMANCLCCAP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE08370)
#define FLMANCLCCAP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE08150)
#define FLMANCLCCAP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE07DB0)
#define FLMANCLCCAP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE07F80)
#define FLMANCLCCAP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE081E0)
#define FLMANCLCCAP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE07B00)

inline static constexpr unsigned int FLMANCLCCAP_TypeDefinitionIndex = 13563;

	class FLMANCLCCAP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*>**)UnitySDK::FromName("", "FLMANCLCCAP")->GetStaticField(0x14B10);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLMANCLCCAP")->GetStaticField(0x14B18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLMANCLCCAP")->GetStaticField(0x14B20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLMANCLCCAP")->GetStaticField(0x4F40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLMANCLCCAP")->GetStaticField(0x4F41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkinCutinConfigRow*>(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSkinCutinConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSkinCutinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLMANCLCCAP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMANCLCCAP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLMANCLCCAP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLMANCLCCAP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLMANCLCCAP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSkinCutinConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSkinCutinConfigRow*))((::PBYTE)hIl2Cpp + FLMANCLCCAP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

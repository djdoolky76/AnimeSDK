#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGNCOOHFMAJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D677580)
#define BGNCOOHFMAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D677B50)
#define BGNCOOHFMAJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D6776F0)
#define BGNCOOHFMAJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D676FF0)
#define BGNCOOHFMAJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D677280)
#define BGNCOOHFMAJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D677790)
#define BGNCOOHFMAJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D6777E0)
#define BGNCOOHFMAJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D6775C0)
#define BGNCOOHFMAJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D677220)
#define BGNCOOHFMAJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D6773F0)
#define BGNCOOHFMAJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D677650)
#define BGNCOOHFMAJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D676F70)

inline static constexpr unsigned int BGNCOOHFMAJ_TypeDefinitionIndex = 13425;

	class BGNCOOHFMAJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BGNCOOHFMAJ")->GetStaticField(0x344E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>**)UnitySDK::FromName("", "BGNCOOHFMAJ")->GetStaticField(0x344E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BGNCOOHFMAJ")->GetStaticField(0x344F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BGNCOOHFMAJ")->GetStaticField(0xB020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGNCOOHFMAJ")->GetStaticField(0xB021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>*(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbTypeRow*>(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightOrbTypeRow* LMBKNCAIDLC(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::RPG::GameCore::GridFightOrbTypeRow*(*)(::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightOrbTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightOrbTypeRow*))((::PBYTE)hIl2Cpp + BGNCOOHFMAJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

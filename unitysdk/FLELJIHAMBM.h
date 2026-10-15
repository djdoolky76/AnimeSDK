#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEventOptionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLELJIHAMBM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE03950)
#define FLELJIHAMBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE03F50)
#define FLELJIHAMBM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE03AC0)
#define FLELJIHAMBM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE03380)
#define FLELJIHAMBM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE03610)
#define FLELJIHAMBM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE03B60)
#define FLELJIHAMBM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE03BB0)
#define FLELJIHAMBM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE03990)
#define FLELJIHAMBM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE035B0)
#define FLELJIHAMBM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE03780)
#define FLELJIHAMBM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE03A20)
#define FLELJIHAMBM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE03300)

inline static constexpr unsigned int FLELJIHAMBM_TypeDefinitionIndex = 12152;

	class FLELJIHAMBM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLELJIHAMBM")->GetStaticField(0x14820);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FLELJIHAMBM")->GetStaticField(0x14828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*>**)UnitySDK::FromName("", "FLELJIHAMBM")->GetStaticField(0x14830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLELJIHAMBM")->GetStaticField(0x4E00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLELJIHAMBM")->GetStaticField(0x4E01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*>*(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEventOptionRow*>(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEventOptionRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::PixAirEventOptionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FLELJIHAMBM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLELJIHAMBM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLELJIHAMBM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLELJIHAMBM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLELJIHAMBM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEventOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEventOptionRow*))((::PBYTE)hIl2Cpp + FLELJIHAMBM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

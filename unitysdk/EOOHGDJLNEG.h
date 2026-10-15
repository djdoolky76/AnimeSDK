#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOOHGDJLNEG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD8E3A0)
#define EOOHGDJLNEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD8E9D0)
#define EOOHGDJLNEG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD8E510)
#define EOOHGDJLNEG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD8DD90)
#define EOOHGDJLNEG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD8E020)
#define EOOHGDJLNEG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD8E5B0)
#define EOOHGDJLNEG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD8E600)
#define EOOHGDJLNEG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD8E3E0)
#define EOOHGDJLNEG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD8DFC0)
#define EOOHGDJLNEG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD8E190)
#define EOOHGDJLNEG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD8E470)
#define EOOHGDJLNEG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD8DD10)

inline static constexpr unsigned int EOOHGDJLNEG_TypeDefinitionIndex = 13694;

	class EOOHGDJLNEG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE630);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE638);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0x2EE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0x2EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>*(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitRemarkRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitRemarkPosition a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightTraitRemarkRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitRemarkPosition, ::System::UInt32))((::PBYTE)hIl2Cpp + EOOHGDJLNEG_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOOHGDJLNEG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EOOHGDJLNEG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EOOHGDJLNEG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EOOHGDJLNEG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitRemarkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + EOOHGDJLNEG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

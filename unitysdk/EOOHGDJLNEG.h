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

#define EOOHGDJLNEG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDBC3E0)
#define EOOHGDJLNEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDBCA10)
#define EOOHGDJLNEG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDBC550)
#define EOOHGDJLNEG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDBBDD0)
#define EOOHGDJLNEG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDBC060)
#define EOOHGDJLNEG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDBC5F0)
#define EOOHGDJLNEG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDBC640)
#define EOOHGDJLNEG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDBC420)
#define EOOHGDJLNEG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDBC000)
#define EOOHGDJLNEG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDBC1D0)
#define EOOHGDJLNEG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDBC4B0)
#define EOOHGDJLNEG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDBBD50)

inline static constexpr unsigned int EOOHGDJLNEG_TypeDefinitionIndex = 13694;

	class EOOHGDJLNEG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE6B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitRemarkRow*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE6B8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0xE6C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0x3080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EOOHGDJLNEG")->GetStaticField(0x3081);
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

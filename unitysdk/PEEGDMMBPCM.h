#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChestRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEEGDMMBPCM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4DEB30)
#define PEEGDMMBPCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DF100)
#define PEEGDMMBPCM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4DECA0)
#define PEEGDMMBPCM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4DE5A0)
#define PEEGDMMBPCM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4DE830)
#define PEEGDMMBPCM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4DED40)
#define PEEGDMMBPCM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4DED90)
#define PEEGDMMBPCM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4DEB70)
#define PEEGDMMBPCM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4DE7D0)
#define PEEGDMMBPCM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4DE9A0)
#define PEEGDMMBPCM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4DEC00)
#define PEEGDMMBPCM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4DE520)

inline static constexpr unsigned int PEEGDMMBPCM_TypeDefinitionIndex = 11806;

	class PEEGDMMBPCM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*>**)UnitySDK::FromName("", "PEEGDMMBPCM")->GetStaticField(0x37BB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PEEGDMMBPCM")->GetStaticField(0x37BB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PEEGDMMBPCM")->GetStaticField(0x37BC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PEEGDMMBPCM")->GetStaticField(0xC100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PEEGDMMBPCM")->GetStaticField(0xC101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*>*(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestRankRow*>(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveChestRankRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveChestRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PEEGDMMBPCM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEGDMMBPCM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PEEGDMMBPCM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEGDMMBPCM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PEEGDMMBPCM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveChestRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveChestRankRow*))((::PBYTE)hIl2Cpp + PEEGDMMBPCM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNMDAMGCLOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA32910)
#define FNMDAMGCLOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA32EE0)
#define FNMDAMGCLOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA32A80)
#define FNMDAMGCLOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA32380)
#define FNMDAMGCLOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA32610)
#define FNMDAMGCLOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA32B20)
#define FNMDAMGCLOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA32B70)
#define FNMDAMGCLOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA32950)
#define FNMDAMGCLOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA325B0)
#define FNMDAMGCLOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA32780)
#define FNMDAMGCLOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA329E0)
#define FNMDAMGCLOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA32300)

inline static constexpr unsigned int FNMDAMGCLOH_TypeDefinitionIndex = 13760;

	class FNMDAMGCLOH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>**)UnitySDK::FromName("", "FNMDAMGCLOH")->GetStaticField(0xA600);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNMDAMGCLOH")->GetStaticField(0xA608);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNMDAMGCLOH")->GetStaticField(0xA610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNMDAMGCLOH")->GetStaticField(0x11B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNMDAMGCLOH")->GetStaticField(0x11B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightStageNodeDisplayConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightNodeType a1)
		{
			return ((::RPG::GameCore::GridFightStageNodeDisplayConfigRow*(*)(::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + FNMDAMGCLOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNMDAMGCLOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNMDAMGCLOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNMDAMGCLOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNMDAMGCLOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightStageNodeDisplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightStageNodeDisplayConfigRow*))((::PBYTE)hIl2Cpp + FNMDAMGCLOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackPhotoStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCIDFENOLCP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D10FCA0)
#define MCIDFENOLCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D110220)
#define MCIDFENOLCP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D10FE10)
#define MCIDFENOLCP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D10F790)
#define MCIDFENOLCP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D10FA20)
#define MCIDFENOLCP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D10FEB0)
#define MCIDFENOLCP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D10FF00)
#define MCIDFENOLCP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D10FCE0)
#define MCIDFENOLCP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D10F9C0)
#define MCIDFENOLCP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D10FB50)
#define MCIDFENOLCP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D10FD70)
#define MCIDFENOLCP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D10F710)

inline static constexpr unsigned int MCIDFENOLCP_TypeDefinitionIndex = 12509;

	class MCIDFENOLCP : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCIDFENOLCP")->GetStaticField(0x40E30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*>**)UnitySDK::FromName("", "MCIDFENOLCP")->GetStaticField(0x40E38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MCIDFENOLCP")->GetStaticField(0x40E40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCIDFENOLCP")->GetStaticField(0xF7A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCIDFENOLCP")->GetStaticField(0xF7A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*>*(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoStageRow*>(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrackPhotoStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrackPhotoStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCIDFENOLCP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIDFENOLCP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCIDFENOLCP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCIDFENOLCP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCIDFENOLCP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrackPhotoStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrackPhotoStageRow*))((::PBYTE)hIl2Cpp + MCIDFENOLCP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

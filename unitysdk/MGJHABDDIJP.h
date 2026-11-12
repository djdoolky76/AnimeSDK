#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StateBroadcastPermissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGJHABDDIJP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E365A60)
#define MGJHABDDIJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E366030)
#define MGJHABDDIJP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E365BD0)
#define MGJHABDDIJP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3654B0)
#define MGJHABDDIJP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E365740)
#define MGJHABDDIJP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E365C70)
#define MGJHABDDIJP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E365CC0)
#define MGJHABDDIJP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E365AA0)
#define MGJHABDDIJP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3656E0)
#define MGJHABDDIJP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3658B0)
#define MGJHABDDIJP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E365B30)
#define MGJHABDDIJP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E365430)

inline static constexpr unsigned int MGJHABDDIJP_TypeDefinitionIndex = 13445;

	class MGJHABDDIJP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>**)UnitySDK::FromName("", "MGJHABDDIJP")->GetStaticField(0x3A640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGJHABDDIJP")->GetStaticField(0x3A648);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGJHABDDIJP")->GetStaticField(0x3A650);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGJHABDDIJP")->GetStaticField(0xCD10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGJHABDDIJP")->GetStaticField(0xCD11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>*(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StateBroadcastPermissionRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::StateBroadcastPermissionRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + MGJHABDDIJP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJHABDDIJP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGJHABDDIJP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJHABDDIJP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGJHABDDIJP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StateBroadcastPermissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StateBroadcastPermissionRow*))((::PBYTE)hIl2Cpp + MGJHABDDIJP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

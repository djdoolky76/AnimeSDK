#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBDBLIKIPGH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D104F50)
#define MBDBLIKIPGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1054D0)
#define MBDBLIKIPGH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1050C0)
#define MBDBLIKIPGH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D104A00)
#define MBDBLIKIPGH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D104C90)
#define MBDBLIKIPGH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D105160)
#define MBDBLIKIPGH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1051B0)
#define MBDBLIKIPGH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D104F90)
#define MBDBLIKIPGH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D104C30)
#define MBDBLIKIPGH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D104DC0)
#define MBDBLIKIPGH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D105020)
#define MBDBLIKIPGH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D104980)

inline static constexpr unsigned int MBDBLIKIPGH_TypeDefinitionIndex = 14710;

	class MBDBLIKIPGH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*>**)UnitySDK::FromName("", "MBDBLIKIPGH")->GetStaticField(0x40570);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBDBLIKIPGH")->GetStaticField(0x40578);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MBDBLIKIPGH")->GetStaticField(0x40580);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBDBLIKIPGH")->GetStaticField(0xF450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBDBLIKIPGH")->GetStaticField(0xF451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*>*(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomRow*>(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueRoomRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBDBLIKIPGH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDBLIKIPGH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBDBLIKIPGH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBDBLIKIPGH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBDBLIKIPGH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueRoomRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueRoomRow*))((::PBYTE)hIl2Cpp + MBDBLIKIPGH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

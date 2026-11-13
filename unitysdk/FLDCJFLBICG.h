#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2BirdRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLDCJFLBICG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA24C00)
#define FLDCJFLBICG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA25180)
#define FLDCJFLBICG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA24D70)
#define FLDCJFLBICG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA246F0)
#define FLDCJFLBICG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA24980)
#define FLDCJFLBICG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA24E10)
#define FLDCJFLBICG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA24E60)
#define FLDCJFLBICG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA24C40)
#define FLDCJFLBICG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA24920)
#define FLDCJFLBICG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA24AB0)
#define FLDCJFLBICG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA24CD0)
#define FLDCJFLBICG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA24670)

inline static constexpr unsigned int FLDCJFLBICG_TypeDefinitionIndex = 12004;

	class FLDCJFLBICG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLDCJFLBICG")->GetStaticField(0x9340);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLDCJFLBICG")->GetStaticField(0x9348);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*>**)UnitySDK::FromName("", "FLDCJFLBICG")->GetStaticField(0x9350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLDCJFLBICG")->GetStaticField(0x990);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLDCJFLBICG")->GetStaticField(0x991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*>*(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BirdRow*>(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2BirdRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2BirdRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLDCJFLBICG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDCJFLBICG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLDCJFLBICG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLDCJFLBICG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLDCJFLBICG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2BirdRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2BirdRow*))((::PBYTE)hIl2Cpp + FLDCJFLBICG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

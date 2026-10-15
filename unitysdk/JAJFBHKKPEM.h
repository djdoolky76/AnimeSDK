#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookEventTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAJFBHKKPEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF35270)
#define JAJFBHKKPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF357F0)
#define JAJFBHKKPEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF353E0)
#define JAJFBHKKPEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF34D20)
#define JAJFBHKKPEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF34FB0)
#define JAJFBHKKPEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF35480)
#define JAJFBHKKPEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF354D0)
#define JAJFBHKKPEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF352B0)
#define JAJFBHKKPEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF34F50)
#define JAJFBHKKPEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF35120)
#define JAJFBHKKPEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF35340)
#define JAJFBHKKPEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF34CA0)

inline static constexpr unsigned int JAJFBHKKPEM_TypeDefinitionIndex = 14834;

	class JAJFBHKKPEM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>**)UnitySDK::FromName("", "JAJFBHKKPEM")->GetStaticField(0x25390);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JAJFBHKKPEM")->GetStaticField(0x25398);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JAJFBHKKPEM")->GetStaticField(0x253A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JAJFBHKKPEM")->GetStaticField(0x8150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JAJFBHKKPEM")->GetStaticField(0x8151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>*(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventTypeRow*>(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueHandBookEventTypeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueHandBookEventTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JAJFBHKKPEM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJFBHKKPEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JAJFBHKKPEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAJFBHKKPEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JAJFBHKKPEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueHandBookEventTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHandBookEventTypeRow*))((::PBYTE)hIl2Cpp + JAJFBHKKPEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

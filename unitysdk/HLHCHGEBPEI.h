#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLHCHGEBPEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE92EB0)
#define HLHCHGEBPEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE93430)
#define HLHCHGEBPEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE93020)
#define HLHCHGEBPEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE929A0)
#define HLHCHGEBPEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE92C30)
#define HLHCHGEBPEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE930C0)
#define HLHCHGEBPEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE93110)
#define HLHCHGEBPEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE92EF0)
#define HLHCHGEBPEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE92BD0)
#define HLHCHGEBPEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE92D60)
#define HLHCHGEBPEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE92F80)
#define HLHCHGEBPEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE92920)

inline static constexpr unsigned int HLHCHGEBPEI_TypeDefinitionIndex = 11076;

	class HLHCHGEBPEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HLHCHGEBPEI")->GetStaticField(0x1CD90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*>**)UnitySDK::FromName("", "HLHCHGEBPEI")->GetStaticField(0x1CD98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HLHCHGEBPEI")->GetStaticField(0x1CDA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HLHCHGEBPEI")->GetStaticField(0x6390);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HLHCHGEBPEI")->GetStaticField(0x6391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*>*(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingStageRow*>(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLHCHGEBPEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLHCHGEBPEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HLHCHGEBPEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLHCHGEBPEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HLHCHGEBPEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingStageRow*))((::PBYTE)hIl2Cpp + HLHCHGEBPEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

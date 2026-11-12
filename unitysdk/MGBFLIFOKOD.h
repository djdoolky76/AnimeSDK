#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInfiniteMonsterGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGBFLIFOKOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E362910)
#define MGBFLIFOKOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E363460)
#define MGBFLIFOKOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E362CB0)
#define MGBFLIFOKOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E362950)
#define MGBFLIFOKOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3631A0)
#define MGBFLIFOKOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E362D50)
#define MGBFLIFOKOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E362DA0)
#define MGBFLIFOKOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E362B80)
#define MGBFLIFOKOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E363140)
#define MGBFLIFOKOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E363310)
#define MGBFLIFOKOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E362C10)
#define MGBFLIFOKOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3630C0)

inline static constexpr unsigned int MGBFLIFOKOD_TypeDefinitionIndex = 15310;

	class MGBFLIFOKOD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*>**)UnitySDK::FromName("", "MGBFLIFOKOD")->GetStaticField(0x3A490);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGBFLIFOKOD")->GetStaticField(0x3A498);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGBFLIFOKOD")->GetStaticField(0x3A4A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGBFLIFOKOD")->GetStaticField(0xCCB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGBFLIFOKOD")->GetStaticField(0xCCB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGBFLIFOKOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBFLIFOKOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGBFLIFOKOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInfiniteMonsterGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInfiniteMonsterGroupRow*))((::PBYTE)hIl2Cpp + MGBFLIFOKOD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*>*(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteMonsterGroupRow*>(*)())((::PBYTE)hIl2Cpp + MGBFLIFOKOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInfiniteMonsterGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInfiniteMonsterGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGBFLIFOKOD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

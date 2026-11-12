#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCKDAJOBMFK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFABB50)
#define FCKDAJOBMFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAC120)
#define FCKDAJOBMFK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFABCC0)
#define FCKDAJOBMFK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFAB5C0)
#define FCKDAJOBMFK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFAB850)
#define FCKDAJOBMFK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFABD60)
#define FCKDAJOBMFK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFABDB0)
#define FCKDAJOBMFK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFABB90)
#define FCKDAJOBMFK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFAB7F0)
#define FCKDAJOBMFK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFAB9C0)
#define FCKDAJOBMFK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFABC20)
#define FCKDAJOBMFK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFAB540)

inline static constexpr unsigned int FCKDAJOBMFK_TypeDefinitionIndex = 13524;

	class FCKDAJOBMFK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*>**)UnitySDK::FromName("", "FCKDAJOBMFK")->GetStaticField(0x403C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCKDAJOBMFK")->GetStaticField(0x403C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCKDAJOBMFK")->GetStaticField(0x403D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCKDAJOBMFK")->GetStaticField(0xDC90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCKDAJOBMFK")->GetStaticField(0xDC91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipConfigRow*>(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightEquipConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightEquipConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCKDAJOBMFK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCKDAJOBMFK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCKDAJOBMFK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCKDAJOBMFK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCKDAJOBMFK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightEquipConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightEquipConfigRow*))((::PBYTE)hIl2Cpp + FCKDAJOBMFK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

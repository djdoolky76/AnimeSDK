#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OELMDPAOLAJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E467650)
#define OELMDPAOLAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E467C20)
#define OELMDPAOLAJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4677C0)
#define OELMDPAOLAJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4670C0)
#define OELMDPAOLAJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E467350)
#define OELMDPAOLAJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E467860)
#define OELMDPAOLAJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4678B0)
#define OELMDPAOLAJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E467690)
#define OELMDPAOLAJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4672F0)
#define OELMDPAOLAJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4674C0)
#define OELMDPAOLAJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E467720)
#define OELMDPAOLAJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E467040)

inline static constexpr unsigned int OELMDPAOLAJ_TypeDefinitionIndex = 11820;

	class OELMDPAOLAJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x4F2F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x4F2F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>**)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0x4F300);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0xFCB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OELMDPAOLAJ")->GetStaticField(0xFCB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>*(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpEquipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELMDPAOLAJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipRow*))((::PBYTE)hIl2Cpp + OELMDPAOLAJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

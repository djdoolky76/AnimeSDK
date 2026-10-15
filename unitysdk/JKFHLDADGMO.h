#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JKFHLDADGMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D040080)
#define JKFHLDADGMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D040680)
#define JKFHLDADGMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0401F0)
#define JKFHLDADGMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D03FAB0)
#define JKFHLDADGMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D03FD40)
#define JKFHLDADGMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D040290)
#define JKFHLDADGMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0402E0)
#define JKFHLDADGMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0400C0)
#define JKFHLDADGMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D03FCE0)
#define JKFHLDADGMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D03FEB0)
#define JKFHLDADGMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D040150)
#define JKFHLDADGMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D03FA30)

inline static constexpr unsigned int JKFHLDADGMO_TypeDefinitionIndex = 12290;

	class JKFHLDADGMO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JKFHLDADGMO")->GetStaticField(0x2EFF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*>**)UnitySDK::FromName("", "JKFHLDADGMO")->GetStaticField(0x2EFF8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JKFHLDADGMO")->GetStaticField(0x2F000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JKFHLDADGMO")->GetStaticField(0x9C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKFHLDADGMO")->GetStaticField(0x9C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPunkLordConfigRow*>(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPunkLordConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ActivityPunkLordConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JKFHLDADGMO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKFHLDADGMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKFHLDADGMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKFHLDADGMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JKFHLDADGMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityPunkLordConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPunkLordConfigRow*))((::PBYTE)hIl2Cpp + JKFHLDADGMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

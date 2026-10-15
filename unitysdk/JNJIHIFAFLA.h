#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultiplePathAvatarConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNJIHIFAFLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D054040)
#define JNJIHIFAFLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0545C0)
#define JNJIHIFAFLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0541B0)
#define JNJIHIFAFLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D053B30)
#define JNJIHIFAFLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D053DC0)
#define JNJIHIFAFLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D054250)
#define JNJIHIFAFLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0542A0)
#define JNJIHIFAFLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D054080)
#define JNJIHIFAFLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D053D60)
#define JNJIHIFAFLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D053EF0)
#define JNJIHIFAFLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D054110)
#define JNJIHIFAFLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D053AB0)

inline static constexpr unsigned int JNJIHIFAFLA_TypeDefinitionIndex = 12800;

	class JNJIHIFAFLA : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JNJIHIFAFLA")->GetStaticField(0x2FF90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNJIHIFAFLA")->GetStaticField(0x2FF98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*>**)UnitySDK::FromName("", "JNJIHIFAFLA")->GetStaticField(0x2FFA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNJIHIFAFLA")->GetStaticField(0xA2C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNJIHIFAFLA")->GetStaticField(0xA2C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarConfigRow*>(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MultiplePathAvatarConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MultiplePathAvatarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNJIHIFAFLA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJIHIFAFLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNJIHIFAFLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNJIHIFAFLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNJIHIFAFLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MultiplePathAvatarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MultiplePathAvatarConfigRow*))((::PBYTE)hIl2Cpp + JNJIHIFAFLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNNEPLJLLNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1ABC80)
#define MNNEPLJLLNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC250)
#define MNNEPLJLLNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1ABDF0)
#define MNNEPLJLLNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1AB6F0)
#define MNNEPLJLLNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1AB980)
#define MNNEPLJLLNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1ABE90)
#define MNNEPLJLLNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1ABEE0)
#define MNNEPLJLLNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1ABCC0)
#define MNNEPLJLLNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1AB920)
#define MNNEPLJLLNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1ABAF0)
#define MNNEPLJLLNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1ABD50)
#define MNNEPLJLLNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1AB670)

inline static constexpr unsigned int MNNEPLJLLNH_TypeDefinitionIndex = 12166;

	class MNNEPLJLLNH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNNEPLJLLNH")->GetStaticField(0x3C8E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MNNEPLJLLNH")->GetStaticField(0x3C8E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*>**)UnitySDK::FromName("", "MNNEPLJLLNH")->GetStaticField(0x3C8F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNNEPLJLLNH")->GetStaticField(0xC150);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNNEPLJLLNH")->GetStaticField(0xC151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*>*(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirTalentRow*>(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirTalentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNNEPLJLLNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNNEPLJLLNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNNEPLJLLNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNNEPLJLLNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNNEPLJLLNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirTalentRow*))((::PBYTE)hIl2Cpp + MNNEPLJLLNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

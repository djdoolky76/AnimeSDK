#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNpcConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPHFBNCHDHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D28F210)
#define OPHFBNCHDHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28F7E0)
#define OPHFBNCHDHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D28F380)
#define OPHFBNCHDHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D28EC80)
#define OPHFBNCHDHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D28EF10)
#define OPHFBNCHDHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D28F420)
#define OPHFBNCHDHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D28F470)
#define OPHFBNCHDHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D28F250)
#define OPHFBNCHDHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D28EEB0)
#define OPHFBNCHDHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D28F080)
#define OPHFBNCHDHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D28F2E0)
#define OPHFBNCHDHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D28EC00)

inline static constexpr unsigned int OPHFBNCHDHF_TypeDefinitionIndex = 13488;

	class OPHFBNCHDHF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OPHFBNCHDHF")->GetStaticField(0x4C600);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OPHFBNCHDHF")->GetStaticField(0x4C608);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*>**)UnitySDK::FromName("", "OPHFBNCHDHF")->GetStaticField(0x4C610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OPHFBNCHDHF")->GetStaticField(0x117B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OPHFBNCHDHF")->GetStaticField(0x117B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNpcConfigRow*>(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightNpcConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightNpcConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OPHFBNCHDHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHFBNCHDHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OPHFBNCHDHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OPHFBNCHDHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OPHFBNCHDHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightNpcConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightNpcConfigRow*))((::PBYTE)hIl2Cpp + OPHFBNCHDHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

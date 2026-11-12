#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIKPFLFOKBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E428980)
#define NIKPFLFOKBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E428F50)
#define NIKPFLFOKBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E428AF0)
#define NIKPFLFOKBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4283F0)
#define NIKPFLFOKBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E428680)
#define NIKPFLFOKBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E428B90)
#define NIKPFLFOKBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E428BE0)
#define NIKPFLFOKBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4289C0)
#define NIKPFLFOKBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E428620)
#define NIKPFLFOKBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4287F0)
#define NIKPFLFOKBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E428A50)
#define NIKPFLFOKBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E428370)

inline static constexpr unsigned int NIKPFLFOKBF_TypeDefinitionIndex = 13493;

	class NIKPFLFOKBF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x4A1F0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x4A1F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>**)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0x4A200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0xF210);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NIKPFLFOKBF")->GetStaticField(0xF211);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBasicBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBasicBonusConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBasicBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKPFLFOKBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBasicBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBasicBonusConfigRow*))((::PBYTE)hIl2Cpp + NIKPFLFOKBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

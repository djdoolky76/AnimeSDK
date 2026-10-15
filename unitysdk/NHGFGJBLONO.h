#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NHGFGJBLONO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1DF6B0)
#define NHGFGJBLONO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DFC80)
#define NHGFGJBLONO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1DF820)
#define NHGFGJBLONO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1DF120)
#define NHGFGJBLONO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1DF3B0)
#define NHGFGJBLONO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1DF8C0)
#define NHGFGJBLONO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1DF910)
#define NHGFGJBLONO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1DF6F0)
#define NHGFGJBLONO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1DF350)
#define NHGFGJBLONO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1DF520)
#define NHGFGJBLONO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1DF780)
#define NHGFGJBLONO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DF0A0)

inline static constexpr unsigned int NHGFGJBLONO_TypeDefinitionIndex = 12467;

	class NHGFGJBLONO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>**)UnitySDK::FromName("", "NHGFGJBLONO")->GetStaticField(0x40830);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NHGFGJBLONO")->GetStaticField(0x40838);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NHGFGJBLONO")->GetStaticField(0x40840);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NHGFGJBLONO")->GetStaticField(0xF570);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NHGFGJBLONO")->GetStaticField(0xF571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>*(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEventRow*>(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHGFGJBLONO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGFGJBLONO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NHGFGJBLONO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHGFGJBLONO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NHGFGJBLONO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEventRow*))((::PBYTE)hIl2Cpp + NHGFGJBLONO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

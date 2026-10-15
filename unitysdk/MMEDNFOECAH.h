#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BMOBFAHAGGA;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMEDNFOECAH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1A28C0)
#define MMEDNFOECAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A2E90)
#define MMEDNFOECAH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1A2A30)
#define MMEDNFOECAH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1A2330)
#define MMEDNFOECAH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1A25C0)
#define MMEDNFOECAH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1A2AD0)
#define MMEDNFOECAH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1A2B20)
#define MMEDNFOECAH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1A2900)
#define MMEDNFOECAH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1A2560)
#define MMEDNFOECAH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1A2730)
#define MMEDNFOECAH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1A2990)
#define MMEDNFOECAH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1A22B0)

inline static constexpr unsigned int MMEDNFOECAH_TypeDefinitionIndex = 11534;

	class MMEDNFOECAH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*>**)UnitySDK::FromName("", "MMEDNFOECAH")->GetStaticField(0x3B9A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMEDNFOECAH")->GetStaticField(0x3B9A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMEDNFOECAH")->GetStaticField(0x3B9B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMEDNFOECAH")->GetStaticField(0xBF90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMEDNFOECAH")->GetStaticField(0xBF91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*>*(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BMOBFAHAGGA*>(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_FPHGMAMDFHE_OFFSET))();
		}

		static ::BMOBFAHAGGA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BMOBFAHAGGA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MMEDNFOECAH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEDNFOECAH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMEDNFOECAH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMEDNFOECAH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMEDNFOECAH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BMOBFAHAGGA* a1)
		{
			return ((::System::Void(*)(::BMOBFAHAGGA*))((::PBYTE)hIl2Cpp + MMEDNFOECAH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

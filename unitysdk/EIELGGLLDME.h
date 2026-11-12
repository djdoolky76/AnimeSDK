#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordHonorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIELGGLLDME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF5BAC0)
#define EIELGGLLDME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C090)
#define EIELGGLLDME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF5BC30)
#define EIELGGLLDME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF5B530)
#define EIELGGLLDME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF5B7C0)
#define EIELGGLLDME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF5BCD0)
#define EIELGGLLDME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF5BD20)
#define EIELGGLLDME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF5BB00)
#define EIELGGLLDME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF5B760)
#define EIELGGLLDME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF5B930)
#define EIELGGLLDME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF5BB90)
#define EIELGGLLDME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF5B4B0)

inline static constexpr unsigned int EIELGGLLDME_TypeDefinitionIndex = 12353;

	class EIELGGLLDME : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*>**)UnitySDK::FromName("", "EIELGGLLDME")->GetStaticField(0x37F00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EIELGGLLDME")->GetStaticField(0x37F08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIELGGLLDME")->GetStaticField(0x37F10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIELGGLLDME")->GetStaticField(0xC1E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIELGGLLDME")->GetStaticField(0xC1E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*>*(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordHonorRow*>(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PunkLordHonorRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PunkLordHonorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EIELGGLLDME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIELGGLLDME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIELGGLLDME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIELGGLLDME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIELGGLLDME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PunkLordHonorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PunkLordHonorRow*))((::PBYTE)hIl2Cpp + EIELGGLLDME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

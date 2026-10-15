#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesBonusMascotRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMAPJJKMFGL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CEB50)
#define MMAPJJKMFGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CF120)
#define MMAPJJKMFGL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CECC0)
#define MMAPJJKMFGL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CE5C0)
#define MMAPJJKMFGL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CE850)
#define MMAPJJKMFGL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CED60)
#define MMAPJJKMFGL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CEDB0)
#define MMAPJJKMFGL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CEB90)
#define MMAPJJKMFGL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CE7F0)
#define MMAPJJKMFGL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CE9C0)
#define MMAPJJKMFGL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CEC20)
#define MMAPJJKMFGL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CE540)

inline static constexpr unsigned int MMAPJJKMFGL_TypeDefinitionIndex = 12260;

	class MMAPJJKMFGL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMAPJJKMFGL")->GetStaticField(0x2A900);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*>**)UnitySDK::FromName("", "MMAPJJKMFGL")->GetStaticField(0x2A908);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MMAPJJKMFGL")->GetStaticField(0x2A910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMAPJJKMFGL")->GetStaticField(0x8530);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMAPJJKMFGL")->GetStaticField(0x8531);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*>*(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBonusMascotRow*>(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesBonusMascotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlanetFesBonusMascotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MMAPJJKMFGL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMAPJJKMFGL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMAPJJKMFGL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMAPJJKMFGL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMAPJJKMFGL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlanetFesBonusMascotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesBonusMascotRow*))((::PBYTE)hIl2Cpp + MMAPJJKMFGL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

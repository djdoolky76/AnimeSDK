#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCyreneModifyConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLLPJFKGDEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D3032E0)
#define PLLPJFKGDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D303910)
#define PLLPJFKGDEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D303450)
#define PLLPJFKGDEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D302CD0)
#define PLLPJFKGDEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D302F60)
#define PLLPJFKGDEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D3034F0)
#define PLLPJFKGDEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D303540)
#define PLLPJFKGDEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D303320)
#define PLLPJFKGDEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D302F00)
#define PLLPJFKGDEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3030D0)
#define PLLPJFKGDEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D3033B0)
#define PLLPJFKGDEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D302C50)

inline static constexpr unsigned int PLLPJFKGDEH_TypeDefinitionIndex = 13555;

	class PLLPJFKGDEH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>**)UnitySDK::FromName("", "PLLPJFKGDEH")->GetStaticField(0x45780);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PLLPJFKGDEH")->GetStaticField(0x45788);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLLPJFKGDEH")->GetStaticField(0x45790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLLPJFKGDEH")->GetStaticField(0x10A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLLPJFKGDEH")->GetStaticField(0x10A41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCyreneModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCyreneModifyConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightSkillType a3)
		{
			return ((::RPG::GameCore::GridFightCyreneModifyConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + PLLPJFKGDEH_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLLPJFKGDEH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLLPJFKGDEH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLLPJFKGDEH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLLPJFKGDEH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCyreneModifyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCyreneModifyConfigRow*))((::PBYTE)hIl2Cpp + PLLPJFKGDEH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

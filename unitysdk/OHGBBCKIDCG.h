#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILGMJDIJMHN.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHGBBCKIDCG_AMPGOOEHOJL_OFFSET UNITYSDK_OFFSET(0x1C964CE0)
#define OHGBBCKIDCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C965980)
#define OHGBBCKIDCG_DDKIOHCLIAH_OFFSET UNITYSDK_OFFSET(0x1C964A30)
#define OHGBBCKIDCG_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1C964FF0)
#define OHGBBCKIDCG_GIHKDLBOBMN_OFFSET UNITYSDK_OFFSET(0x1C9656C0)
#define OHGBBCKIDCG_KCNNBFOAFPN_OFFSET UNITYSDK_OFFSET(0x1C9658A0)
#define OHGBBCKIDCG_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1C965580)
#define OHGBBCKIDCG_LFFGOCHNPHF_OFFSET UNITYSDK_OFFSET(0x1C964B70)
#define OHGBBCKIDCG_LFGJIAINLBJ_OFFSET UNITYSDK_OFFSET(0x1C965770)
#define OHGBBCKIDCG_MFKCJIPCEPJ_OFFSET UNITYSDK_OFFSET(0x1C965320)
#define OHGBBCKIDCG_OHHFLKONIOF_OFFSET UNITYSDK_OFFSET(0x1C964AE0)

inline static constexpr unsigned int OHGBBCKIDCG_TypeDefinitionIndex = 43714;

	class OHGBBCKIDCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN>* FGFIJFAEIOB; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::System::String* OLOIFNNLKJP; // 0x20
		::System::String* NMMKDFFHOLL; // 0x28
		::RPG::GameCore::ChenLingFesDialogStyleType HCGHFDNHFNC; // 0x30
		::RPG::GameCore::ChenLingFesDialogStyleType KICGKFDELJP; // 0x34
		::System::Single NMMEODIEPKH; // 0x38
		::System::Boolean AEPILOPAFKG; // 0x3C
		::System::Boolean HCBMABMLFPG; // 0x3D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ChenLingFesDialogStyleType EKFHNPHMECK; // 0x40
		::RPG::GameCore::ChenLingFesProperty FODBMMCKAEN; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_CTOR_OFFSET))(this);
		}

		::System::Void DDKIOHCLIAH(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::ILGMJDIJMHN a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_DDKIOHCLIAH_OFFSET))(this, a1, a2);
		}

		::System::Void OHHFLKONIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_OHHFLKONIOF_OFFSET))(this);
		}

		::System::Void LFFGOCHNPHF(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::ILGMJDIJMHN a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_LFFGOCHNPHF_OFFSET))(this, a1, a2);
		}

		::System::Void AMPGOOEHOJL(::RPG::GameCore::ChenLingFesDialogStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_AMPGOOEHOJL_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::ChenLingFesProperty a4, ::System::Single a5, ::RPG::GameCore::ChenLingFesDialogStyleType a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::ChenLingFesProperty, ::System::Single, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_DMKJAJLNEBK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean MFKCJIPCEPJ(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Single))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_MFKCJIPCEPJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean KGJAMKFPOAB(::RPG::GameCore::ChenLingFesDialogStyleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::Boolean GIHKDLBOBMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_GIHKDLBOBMN_OFFSET))(this);
		}

		::System::Boolean LFGJIAINLBJ(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::ILGMJDIJMHN a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::ILGMJDIJMHN))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_LFGJIAINLBJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCNNBFOAFPN(::RPG::GameCore::ChenLingFesDialogStyleType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + OHGBBCKIDCG_KCNNBFOAFPN_OFFSET))(this, a1);
		}

	};

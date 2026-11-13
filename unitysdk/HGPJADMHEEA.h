#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CommonSkillPool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGPJADMHEEA_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0x1C45C6B0)
#define HGPJADMHEEA_AFPPKBKPFMD_OFFSET UNITYSDK_OFFSET(0x1C45C430)
#define HGPJADMHEEA_ANKEHGJLOAM_OFFSET UNITYSDK_OFFSET(0x1C45C7D0)
#define HGPJADMHEEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C45C8D0)
#define HGPJADMHEEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C45C8C0)
#define HGPJADMHEEA_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0x1C45C360)
#define HGPJADMHEEA_KFHNBNDFFKK_OFFSET UNITYSDK_OFFSET(0x1C45C770)

inline static constexpr unsigned int HGPJADMHEEA_TypeDefinitionIndex = 57712;

	class HGPJADMHEEA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>** StaticGet_EFMBDDPGLMC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CommonSkillPool*>**)UnitySDK::FromName("", "HGPJADMHEEA")->GetStaticField(0x73B40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPJADMHEEA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGPJADMHEEA_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGPJADMHEEA_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGPJADMHEEA_AABALFLGKPE_OFFSET))();
		}

		static ::System::Void KFHNBNDFFKK(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGPJADMHEEA_KFHNBNDFFKK_OFFSET))(a1);
		}

		static ::System::Void AFPPKBKPFMD(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGPJADMHEEA_AFPPKBKPFMD_OFFSET))(a1);
		}

		static ::RPG::GameCore::CommonSkillPool* ANKEHGJLOAM(::System::String* a1)
		{
			return ((::RPG::GameCore::CommonSkillPool*(*)(::System::String*))((::PBYTE)hIl2Cpp + HGPJADMHEEA_ANKEHGJLOAM_OFFSET))(a1);
		}

	};

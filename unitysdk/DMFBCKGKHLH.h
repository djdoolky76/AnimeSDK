#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DMFBCKGKHLH_EHIAAGAMCPM_1_OFFSET UNITYSDK_OFFSET(0x1A1F8D80)
#define DMFBCKGKHLH_EHIAAGAMCPM_OFFSET UNITYSDK_OFFSET(0x1A1F8AA0)
#define DMFBCKGKHLH_OOAEFPKJCEK_1_OFFSET UNITYSDK_OFFSET(0x1A1F8E20)
#define DMFBCKGKHLH_OOAEFPKJCEK_OFFSET UNITYSDK_OFFSET(0x1A1F8960)
#define DMFBCKGKHLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F8600)
#define DMFBCKGKHLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F85F0)

inline static constexpr unsigned int DMFBCKGKHLH_TypeDefinitionIndex = 47230;

class DMFBCKGKHLH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::GPNHHGBPCGM>*>** StaticGet_KAGKMODDCME()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::GPNHHGBPCGM>*>**)Il2CppClass::FromTypeDefinitionIndex(DMFBCKGKHLH_TypeDefinitionIndex)->GetStaticField(0x3D970);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::System::Int32>*>** StaticGet_FADBEFNMPHK()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageVoiceType, ::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(DMFBCKGKHLH_TypeDefinitionIndex)->GetStaticField(0x3D978);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFBCKGKHLH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFBCKGKHLH__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* OOAEFPKJCEK(::MoleMole::LanguageVoiceType OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + DMFBCKGKHLH_OOAEFPKJCEK_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::GPNHHGBPCGM>* EHIAAGAMCPM(::MoleMole::LanguageVoiceType OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GPNHHGBPCGM>*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + DMFBCKGKHLH_EHIAAGAMCPM_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::GPNHHGBPCGM>* EHIAAGAMCPM_1(::System::String* CPIKFOIAHOI)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GPNHHGBPCGM>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DMFBCKGKHLH_EHIAAGAMCPM_1_OFFSET))(CPIKFOIAHOI);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* OOAEFPKJCEK_1(::System::String* CPIKFOIAHOI)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DMFBCKGKHLH_OOAEFPKJCEK_1_OFFSET))(CPIKFOIAHOI);
	}
};

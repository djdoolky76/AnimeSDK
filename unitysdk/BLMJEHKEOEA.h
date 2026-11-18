#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNKOPDEKLKG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLMJEHKEOEA_ANEEGKIPIPC_OFFSET UNITYSDK_OFFSET(0x14EEC1A0)
#define BLMJEHKEOEA_BMJGFDPOAEL_OFFSET UNITYSDK_OFFSET(0x14EEB840)
#define BLMJEHKEOEA_FEOGCLCPCHN_OFFSET UNITYSDK_OFFSET(0x14EEBD30)
#define BLMJEHKEOEA_IBGBHNDPCBJ_OFFSET UNITYSDK_OFFSET(0x14EEB680)
#define BLMJEHKEOEA_OCCGKHHAHEH_OFFSET UNITYSDK_OFFSET(0x14EEBC60)

inline static constexpr unsigned int BLMJEHKEOEA_TypeDefinitionIndex = 66975;

class BLMJEHKEOEA : public ::System::Object
{
public:
	static ::FNKOPDEKLKG* StaticGet_HDIEABKPPNF()
	{
		return (::FNKOPDEKLKG*)Il2CppClass::FromTypeDefinitionIndex(BLMJEHKEOEA_TypeDefinitionIndex)->GetStaticField(0x30CC0);
	}
	// static const ::System::String* EMKGIPKJBJG; // 0x0
	// static const ::System::String* HGGKIOAHIAE; // 0x0
	// static const ::System::String* HNPLPACILBB; // 0x0
	// static const ::System::String* LPJPHNCGLGK; // 0x0

	static ::System::Void IBGBHNDPCBJ(::MoleMole::Battle::Entity* IBCPHFLBCHF)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLMJEHKEOEA_IBGBHNDPCBJ_OFFSET))(IBCPHFLBCHF);
	}

	static ::System::Void BMJGFDPOAEL(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BLMJEHKEOEA_BMJGFDPOAEL_OFFSET))(HPINBCPMHJE);
	}

	static ::System::Void OCCGKHHAHEH(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LPAGHHEGMIK, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* ICLMELHPHPL)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + BLMJEHKEOEA_OCCGKHHAHEH_OFFSET))(LPAGHHEGMIK, KECKGDFIALJ, ICLMELHPHPL);
	}

	static ::System::Void FEOGCLCPCHN(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Battle::Entity*>>* MNPIGHHDGIM, ::System::Int32 CLHLJKKAAPO, ::System::Single CLOOJLCNIOL, ::System::Single MDKFFCCGENN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Battle::Entity*>>*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BLMJEHKEOEA_FEOGCLCPCHN_OFFSET))(MNPIGHHDGIM, CLHLJKKAAPO, CLOOJLCNIOL, MDKFFCCGENN);
	}

	static ::System::Void ANEEGKIPIPC(::System::UInt32 NJNCGJLHLKC, ::System::Single CLOOJLCNIOL, ::System::Single MDKFFCCGENN)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BLMJEHKEOEA_ANEEGKIPIPC_OFFSET))(NJNCGJLHLKC, CLOOJLCNIOL, MDKFFCCGENN);
	}
};

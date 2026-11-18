#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDGBPCOGIEN;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LGIIMFJLAJA_GOJEGNDNLJB_OFFSET UNITYSDK_OFFSET(0x1E7A2B00)
#define LGIIMFJLAJA_HIHBIIANPHN_OFFSET UNITYSDK_OFFSET(0x1E7A2A30)
#define LGIIMFJLAJA_OAFBKDLICKO_OFFSET UNITYSDK_OFFSET(0x1E7A2960)
#define LGIIMFJLAJA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2BE0)
#define LGIIMFJLAJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2BD0)

inline static constexpr unsigned int LGIIMFJLAJA_TypeDefinitionIndex = 28683;

class LGIIMFJLAJA : public ::System::Object
{
public:
	static ::LGIIMFJLAJA** StaticGet_NJLLMPCDOEB()
	{
		return (::LGIIMFJLAJA**)Il2CppClass::FromTypeDefinitionIndex(LGIIMFJLAJA_TypeDefinitionIndex)->GetStaticField(0x25EF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGIIMFJLAJA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGIIMFJLAJA__CCTOR_OFFSET))();
	}

	::System::Void OAFBKDLICKO(::Foundation::IEntity* KECKGDFIALJ, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + LGIIMFJLAJA_OAFBKDLICKO_OFFSET))(this, KECKGDFIALJ, EJGDHCIBCJH);
	}

	::System::Void HIHBIIANPHN(::Foundation::IEntity* KECKGDFIALJ, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + LGIIMFJLAJA_HIHBIIANPHN_OFFSET))(this, KECKGDFIALJ, EJGDHCIBCJH);
	}

	::System::Collections::Generic::IReadOnlyList_1<::GDGBPCOGIEN*>* GOJEGNDNLJB(::Foundation::IEntity* KECKGDFIALJ)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GDGBPCOGIEN*>*(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + LGIIMFJLAJA_GOJEGNDNLJB_OFFSET))(this, KECKGDFIALJ);
	}
};

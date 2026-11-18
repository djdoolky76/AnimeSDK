#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDGBPCOGIEN;
namespace Foundation { class IEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LMMHGACAJBB_GOJEGNDNLJB_OFFSET UNITYSDK_OFFSET(0x16C68250)
#define LMMHGACAJBB_HIHBIIANPHN_OFFSET UNITYSDK_OFFSET(0x16C68180)
#define LMMHGACAJBB_OAFBKDLICKO_OFFSET UNITYSDK_OFFSET(0x16C680B0)
#define LMMHGACAJBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C683A0)
#define LMMHGACAJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C68390)

inline static constexpr unsigned int LMMHGACAJBB_TypeDefinitionIndex = 76799;

class LMMHGACAJBB : public ::System::Object
{
public:
	static ::LMMHGACAJBB** StaticGet_NJLLMPCDOEB()
	{
		return (::LMMHGACAJBB**)Il2CppClass::FromTypeDefinitionIndex(LMMHGACAJBB_TypeDefinitionIndex)->GetStaticField(0x3BBC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHGACAJBB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMHGACAJBB__CCTOR_OFFSET))();
	}

	::System::Void OAFBKDLICKO(::Foundation::IEntity* KECKGDFIALJ, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + LMMHGACAJBB_OAFBKDLICKO_OFFSET))(this, KECKGDFIALJ, EJGDHCIBCJH);
	}

	::System::Void HIHBIIANPHN(::Foundation::IEntity* KECKGDFIALJ, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + LMMHGACAJBB_HIHBIIANPHN_OFFSET))(this, KECKGDFIALJ, EJGDHCIBCJH);
	}

	::System::Collections::Generic::IReadOnlyList_1<::GDGBPCOGIEN*>* GOJEGNDNLJB(::Foundation::IEntity* KECKGDFIALJ)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::GDGBPCOGIEN*>*(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + LMMHGACAJBB_GOJEGNDNLJB_OFFSET))(this, KECKGDFIALJ);
	}
};

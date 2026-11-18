#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DABOHJFCDBP.h"

class GJCILIHCKDG;
class KAOHIFFJNFF;

#define FAKIEIBPKCK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1725E530)
#define FAKIEIBPKCK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1725E4A0)
#define FAKIEIBPKCK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1725E540)
#define FAKIEIBPKCK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1725E350)
#define FAKIEIBPKCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1725E3D0)
#define FAKIEIBPKCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1725E440)

inline static constexpr unsigned int FAKIEIBPKCK_TypeDefinitionIndex = 55334;

class FAKIEIBPKCK : public ::DABOHJFCDBP
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3; // 0x0
	::KAOHIFFJNFF* GJBHEJGENMI; // 0x28
	::GJCILIHCKDG* GBELIHABEDH; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKIEIBPKCK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIEIBPKCK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIEIBPKCK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIEIBPKCK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIEIBPKCK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIEIBPKCK_OHFHFOHMBJH_OFFSET))(this);
	}
};

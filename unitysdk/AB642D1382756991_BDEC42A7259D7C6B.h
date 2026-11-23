#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA85624D98D4C39B.h"

class AB642D1382756991;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AB642D1382756991_BDEC42A7259D7C6B_ECCB45EEB90CEF71_OFFSET UNITYSDK_OFFSET(0x26B5670)
#define AB642D1382756991_BDEC42A7259D7C6B_F0715F86377A7DD9_OFFSET UNITYSDK_OFFSET(0x26B55A0)
#define AB642D1382756991_BDEC42A7259D7C6B__CCTOR_OFFSET UNITYSDK_OFFSET(0x26B5750)
#define AB642D1382756991_BDEC42A7259D7C6B__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0210)

inline static constexpr unsigned int AB642D1382756991_BDEC42A7259D7C6B_TypeDefinitionIndex = 2580;

class AB642D1382756991_BDEC42A7259D7C6B : public ::AA85624D98D4C39B
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_EA3E2A3C3CC5EBDB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AB642D1382756991_BDEC42A7259D7C6B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::AB642D1382756991* FF51F34B499F227B; // 0x40

	::System::Void ECCB45EEB90CEF71()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB642D1382756991_BDEC42A7259D7C6B_ECCB45EEB90CEF71_OFFSET))(this);
	}

	::System::Void F0715F86377A7DD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB642D1382756991_BDEC42A7259D7C6B_F0715F86377A7DD9_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB642D1382756991_BDEC42A7259D7C6B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AB642D1382756991_BDEC42A7259D7C6B__CCTOR_OFFSET))();
	}
};

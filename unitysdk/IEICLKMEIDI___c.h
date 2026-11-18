#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FCPBOMMIHCE_LHKPOJLLMDK;
class IEICLKMEIDI_PGEFABNGHPC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define IEICLKMEIDI___C_HIIFPCFANDF_OFFSET UNITYSDK_OFFSET(0x1656E480)
#define IEICLKMEIDI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1656E430)
#define IEICLKMEIDI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1656E470)

inline static constexpr unsigned int IEICLKMEIDI___c_TypeDefinitionIndex = 75081;

class IEICLKMEIDI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEICLKMEIDI___c_TypeDefinitionIndex)->GetStaticField(0x4BBA0);
	}
	static ::System::Func_2<::System::Object*, ::System::Object*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(IEICLKMEIDI___c_TypeDefinitionIndex)->GetStaticField(0x4BBA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEICLKMEIDI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEICLKMEIDI___C__CTOR_OFFSET))(this);
	}

	::IEICLKMEIDI_PGEFABNGHPC* HIIFPCFANDF(::FCPBOMMIHCE_LHKPOJLLMDK* HAAEBCOBKFF)
	{
		return ((::IEICLKMEIDI_PGEFABNGHPC*(*)(::PVOID, ::FCPBOMMIHCE_LHKPOJLLMDK*))((::PBYTE)hIl2Cpp + IEICLKMEIDI___C_HIIFPCFANDF_OFFSET))(this, HAAEBCOBKFF);
	}
};

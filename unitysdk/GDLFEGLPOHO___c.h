#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;
class MDLKEKANMHL;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define GDLFEGLPOHO___C_CBAJGDMJLEB_OFFSET UNITYSDK_OFFSET(0x13DC03A0)
#define GDLFEGLPOHO___C_HIDDNOIHEEJ_OFFSET UNITYSDK_OFFSET(0x13DC0390)
#define GDLFEGLPOHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DC0340)
#define GDLFEGLPOHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC0380)

inline static constexpr unsigned int GDLFEGLPOHO___c_TypeDefinitionIndex = 44879;

class GDLFEGLPOHO___c : public ::System::Object
{
public:
	static ::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::IFLPGOKHDJI*, ::ENGKPGFGGLM*>**)Il2CppClass::FromTypeDefinitionIndex(GDLFEGLPOHO___c_TypeDefinitionIndex)->GetStaticField(0x40A10);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDLFEGLPOHO___c_TypeDefinitionIndex)->GetStaticField(0x40A18);
	}
	static ::System::Action_1<::MDLKEKANMHL*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::MDLKEKANMHL*>**)Il2CppClass::FromTypeDefinitionIndex(GDLFEGLPOHO___c_TypeDefinitionIndex)->GetStaticField(0x40A20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLFEGLPOHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLFEGLPOHO___C__CTOR_OFFSET))(this);
	}

	::System::Void HIDDNOIHEEJ(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GDLFEGLPOHO___C_HIDDNOIHEEJ_OFFSET))(this, MHPNGBGGMMN, FFNKDGGHBPP);
	}

	::System::Void CBAJGDMJLEB(::MDLKEKANMHL* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + GDLFEGLPOHO___C_CBAJGDMJLEB_OFFSET))(this, MNDIBLLFAJI);
	}
};

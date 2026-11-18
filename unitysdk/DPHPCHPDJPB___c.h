#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMLNKEMIOIK;
namespace System { template <typename T> class Predicate_1; }

#define DPHPCHPDJPB___C_GHHGNKAOBGF_OFFSET UNITYSDK_OFFSET(0x17217B30)
#define DPHPCHPDJPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17217AE0)
#define DPHPCHPDJPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17217B20)

inline static constexpr unsigned int DPHPCHPDJPB___c_TypeDefinitionIndex = 92829;

class DPHPCHPDJPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPHPCHPDJPB___c_TypeDefinitionIndex)->GetStaticField(0x37420);
	}
	static ::System::Predicate_1<::KMLNKEMIOIK*>** StaticGet___9__166_0()
	{
		return (::System::Predicate_1<::KMLNKEMIOIK*>**)Il2CppClass::FromTypeDefinitionIndex(DPHPCHPDJPB___c_TypeDefinitionIndex)->GetStaticField(0x37428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHPCHPDJPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHPCHPDJPB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GHHGNKAOBGF(::KMLNKEMIOIK* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::KMLNKEMIOIK*))((::PBYTE)hIl2Cpp + DPHPCHPDJPB___C_GHHGNKAOBGF_OFFSET))(this, IPMMCGDMODG);
	}
};

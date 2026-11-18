#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPNMFGPBMHL;
class JMNEANIBLKC;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define BPHAHGICCGN___C_HGJCHJPNAEK_OFFSET UNITYSDK_OFFSET(0x159A3B30)
#define BPHAHGICCGN___C_OIGHANAJEOP_OFFSET UNITYSDK_OFFSET(0x159A3AE0)
#define BPHAHGICCGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159A3A90)
#define BPHAHGICCGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159A3AD0)

inline static constexpr unsigned int BPHAHGICCGN___c_TypeDefinitionIndex = 65144;

class BPHAHGICCGN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BPHAHGICCGN___c_TypeDefinitionIndex)->GetStaticField(0x4CC60);
	}
	static ::System::Action_1<::JMNEANIBLKC*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::JMNEANIBLKC*>**)Il2CppClass::FromTypeDefinitionIndex(BPHAHGICCGN___c_TypeDefinitionIndex)->GetStaticField(0x4CC68);
	}
	static ::System::Comparison_1<::FPNMFGPBMHL*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::FPNMFGPBMHL*>**)Il2CppClass::FromTypeDefinitionIndex(BPHAHGICCGN___c_TypeDefinitionIndex)->GetStaticField(0x4CC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHAHGICCGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHAHGICCGN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 OIGHANAJEOP(::FPNMFGPBMHL* EJCBEJMGFAJ, ::FPNMFGPBMHL* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::FPNMFGPBMHL*, ::FPNMFGPBMHL*))((::PBYTE)hIl2Cpp + BPHAHGICCGN___C_OIGHANAJEOP_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void HGJCHJPNAEK(::JMNEANIBLKC* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JMNEANIBLKC*))((::PBYTE)hIl2Cpp + BPHAHGICCGN___C_HGJCHJPNAEK_OFFSET))(this, GLAOEHCGCFO);
	}
};

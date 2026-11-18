#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BPHAHGICCGN;
class BPHAHGICCGN_PMKIBMGAHAP;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define JCFJKEOJPPE___C_EBOFCNNEJIO_OFFSET UNITYSDK_OFFSET(0x15C36A60)
#define JCFJKEOJPPE___C_GCMDJMFLIGA_OFFSET UNITYSDK_OFFSET(0x15C36970)
#define JCFJKEOJPPE___C_GJDLPLBCMIJ_OFFSET UNITYSDK_OFFSET(0x15C36900)
#define JCFJKEOJPPE___C_OJAMGPDEBKH_OFFSET UNITYSDK_OFFSET(0x15C36990)
#define JCFJKEOJPPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C368B0)
#define JCFJKEOJPPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C368F0)

inline static constexpr unsigned int JCFJKEOJPPE___c_TypeDefinitionIndex = 47008;

class JCFJKEOJPPE___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__50_24()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(JCFJKEOJPPE___c_TypeDefinitionIndex)->GetStaticField(0x32580);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__50_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JCFJKEOJPPE___c_TypeDefinitionIndex)->GetStaticField(0x32588);
	}
	static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__80_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JCFJKEOJPPE___c_TypeDefinitionIndex)->GetStaticField(0x32590);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JCFJKEOJPPE___c_TypeDefinitionIndex)->GetStaticField(0x32598);
	}
	static ::System::Comparison_1<::BPHAHGICCGN*>** StaticGet___9__49_0()
	{
		return (::System::Comparison_1<::BPHAHGICCGN*>**)Il2CppClass::FromTypeDefinitionIndex(JCFJKEOJPPE___c_TypeDefinitionIndex)->GetStaticField(0x325A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath GJDLPLBCMIJ()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C_GJDLPLBCMIJ_OFFSET))(this);
	}

	::System::Boolean GCMDJMFLIGA(::BPHAHGICCGN_PMKIBMGAHAP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPHAHGICCGN_PMKIBMGAHAP*))((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C_GCMDJMFLIGA_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 OJAMGPDEBKH(::BPHAHGICCGN* HAAEBCOBKFF, ::BPHAHGICCGN* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::BPHAHGICCGN*, ::BPHAHGICCGN*))((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C_OJAMGPDEBKH_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Boolean EBOFCNNEJIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE___C_EBOFCNNEJIO_OFFSET))(this);
	}
};

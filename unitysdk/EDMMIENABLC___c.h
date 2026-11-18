#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBAHPGDJDFA.h"
#include "unitysdk/FHPEOALHKDM.h"
#include "unitysdk/NMILKOJNFFF.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EDMMIENABLC___C_AJOMOCCLPNK_OFFSET UNITYSDK_OFFSET(0xFDD8720)
#define EDMMIENABLC___C_IAGGEHBAIML_OFFSET UNITYSDK_OFFSET(0xFDD86E0)
#define EDMMIENABLC___C_LEKLKGHABAD_OFFSET UNITYSDK_OFFSET(0xFDD8700)
#define EDMMIENABLC___C_LPMPBOAJCBD_OFFSET UNITYSDK_OFFSET(0xFDD86C0)
#define EDMMIENABLC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDD8670)
#define EDMMIENABLC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD86B0)

inline static constexpr unsigned int EDMMIENABLC___c_TypeDefinitionIndex = 53785;

class EDMMIENABLC___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::DBAHPGDJDFA>** StaticGet___9__12_1()
	{
		return (::System::Func_2<::System::Int32, ::DBAHPGDJDFA>**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC___c_TypeDefinitionIndex)->GetStaticField(0x45F30);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC___c_TypeDefinitionIndex)->GetStaticField(0x45F38);
	}
	static ::System::Func_2<::System::Int32, ::NMILKOJNFFF>** StaticGet___9__12_2()
	{
		return (::System::Func_2<::System::Int32, ::NMILKOJNFFF>**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC___c_TypeDefinitionIndex)->GetStaticField(0x45F40);
	}
	static ::System::Func_2<::System::Int32, ::FHPEOALHKDM>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Int32, ::FHPEOALHKDM>**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC___c_TypeDefinitionIndex)->GetStaticField(0x45F48);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__11_0()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC___c_TypeDefinitionIndex)->GetStaticField(0x45F50);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDMMIENABLC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC___C__CTOR_OFFSET))(this);
	}

	::NMILKOJNFFF LPMPBOAJCBD(::System::Int32 JFCIBNANGHP)
	{
		return ((::NMILKOJNFFF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDMMIENABLC___C_LPMPBOAJCBD_OFFSET))(this, JFCIBNANGHP);
	}

	::DBAHPGDJDFA IAGGEHBAIML(::System::Int32 JFCIBNANGHP)
	{
		return ((::DBAHPGDJDFA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDMMIENABLC___C_IAGGEHBAIML_OFFSET))(this, JFCIBNANGHP);
	}

	::FHPEOALHKDM LEKLKGHABAD(::System::Int32 JFCIBNANGHP)
	{
		return ((::FHPEOALHKDM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDMMIENABLC___C_LEKLKGHABAD_OFFSET))(this, JFCIBNANGHP);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* AJOMOCCLPNK()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC___C_AJOMOCCLPNK_OFFSET))(this);
	}
};

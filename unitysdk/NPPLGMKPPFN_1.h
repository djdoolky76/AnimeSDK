#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

inline static constexpr unsigned int NPPLGMKPPFN_1_TypeDefinitionIndex = 77178;

template <typename T>
struct alignas(8) NPPLGMKPPFN_1
{
	static ::Il2CppArray<T>** StaticGet_HNEICPCPKNF()
	{
		return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(NPPLGMKPPFN_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::NPPLGMKPPFN_1<T>* StaticGet_FGBLILBNEHG()
	{
		return (::NPPLGMKPPFN_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NPPLGMKPPFN_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x0
	::System::Double PILKLGHPKJK; // 0x0
	T FEHNKNLAGBK; // 0x0
	T PEFDEAINFDP; // 0x0
	::Foundation::EnumAsFlag_1<T> ICEIIGLLBMP; // 0x0
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::System::Object*>> LBLDJIPHIAK; // 0x0
	::Foundation::ReadOnlyNativeVariableArray_1<::System::Single> JKAMOCKEFHJ; // 0x0
	::System::Double FODKKEGIFMI; // 0x0
};

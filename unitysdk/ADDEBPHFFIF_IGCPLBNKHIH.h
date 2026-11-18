#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_IOIGKKONACG.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ADDEBPHFFIF_IGCPLBNKHIH_NKIOPBONJFE_OFFSET UNITYSDK_OFFSET(0x16D61EC0)
#define ADDEBPHFFIF_IGCPLBNKHIH__CTOR_OFFSET UNITYSDK_OFFSET(0x16D61EB0)

inline static constexpr unsigned int ADDEBPHFFIF_IGCPLBNKHIH_TypeDefinitionIndex = 54160;

class ADDEBPHFFIF_IGCPLBNKHIH : public ::System::Object
{
public:
	::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>* AMHGBGMOMLL; // 0x10
	::System::Int32 HHEGANCPILH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_IGCPLBNKHIH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* NKIOPBONJFE(::ADDEBPHFFIF_IOIGKKONACG MLBNKKKCJGF)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::ADDEBPHFFIF_IOIGKKONACG))((::PBYTE)hIl2Cpp + ADDEBPHFFIF_IGCPLBNKHIH_NKIOPBONJFE_OFFSET))(this, MLBNKKKCJGF);
	}
};

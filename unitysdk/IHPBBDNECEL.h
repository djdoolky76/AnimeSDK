#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/Foundation/Tuple_4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHPBBDNECEL_HNNBGPKOEGE_OFFSET UNITYSDK_OFFSET(0xB935A40)
#define IHPBBDNECEL_OOELBMCFLCG_OFFSET UNITYSDK_OFFSET(0xB935A50)
#define IHPBBDNECEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB935630)

inline static constexpr unsigned int IHPBBDNECEL_TypeDefinitionIndex = 89641;

class IHPBBDNECEL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* _MFLAPIEGKBK_k__BackingField; // 0x10
	::System::Int32 IBEKHOENAEJ; // 0x18
	::System::Int32 KIMNOKAKJDF; // 0x1C

	::System::Void _ctor(::System::Int32 FFJGPKNMBBP, ::System::Int32 HDCEOGICEJE, ::System::Int32 MECCCNJCNKO, ::DBGNNAMFJDL OBNIAHNMHPF, ::System::Boolean CGOJOKHANJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::DBGNNAMFJDL, ::System::Boolean))((::PBYTE)hIl2Cpp + IHPBBDNECEL__CTOR_OFFSET))(this, FFJGPKNMBBP, HDCEOGICEJE, MECCCNJCNKO, OBNIAHNMHPF, CGOJOKHANJO);
	}

	::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* HNNBGPKOEGE()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPBBDNECEL_HNNBGPKOEGE_OFFSET))(this);
	}

	::System::Void OOELBMCFLCG(::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::Tuple_4<::System::Int32, ::System::String*, ::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + IHPBBDNECEL_OOELBMCFLCG_OFFSET))(this, EGEGIMGMJHN);
	}
};

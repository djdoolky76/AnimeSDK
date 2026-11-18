#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNOEKGJFJLE.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGPAAPHGCDB_KHLLLFNFJMP_OFFSET UNITYSDK_OFFSET(0x12562130)
#define LGPAAPHGCDB_OJNOGGOAGNN_OFFSET UNITYSDK_OFFSET(0x125617A0)
#define LGPAAPHGCDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x125616E0)

inline static constexpr unsigned int LGPAAPHGCDB_TypeDefinitionIndex = 41342;

class LGPAAPHGCDB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::NNOEKGJFJLE>*>** StaticGet_EJHKIILDPGK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::NNOEKGJFJLE>*>**)Il2CppClass::FromTypeDefinitionIndex(LGPAAPHGCDB_TypeDefinitionIndex)->GetStaticField(0x41640);
	}
	static ::Il2CppArray<::NNOEKGJFJLE>** StaticGet_KGCFHFKJMIN()
	{
		return (::Il2CppArray<::NNOEKGJFJLE>**)Il2CppClass::FromTypeDefinitionIndex(LGPAAPHGCDB_TypeDefinitionIndex)->GetStaticField(0x41648);
	}
	// static const ::System::Single PPNJJIKMBMH; // 0x0
	// static const ::System::Single MPAANGHBAEK; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGPAAPHGCDB__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::NNOEKGJFJLE>* OJNOGGOAGNN(::System::Int32 INEMAOLPAFN)
	{
		return ((::Il2CppArray<::NNOEKGJFJLE>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LGPAAPHGCDB_OJNOGGOAGNN_OFFSET))(INEMAOLPAFN);
	}

	static ::System::Void KHLLLFNFJMP(::System::Collections::Generic::List_1<::NNOEKGJFJLE>* DJLOKMMLFJC, ::System::Collections::Generic::List_1<::System::Int32>* KLMFPPILIIM)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::NNOEKGJFJLE>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LGPAAPHGCDB_KHLLLFNFJMP_OFFSET))(DJLOKMMLFJC, KLMFPPILIIM);
	}
};

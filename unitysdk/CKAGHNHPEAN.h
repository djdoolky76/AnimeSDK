#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEFKCFCIHDK;
class IHBOGGBMEGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKAGHNHPEAN_PPPKPHPLJCK_OFFSET UNITYSDK_OFFSET(0x1A545F30)
#define CKAGHNHPEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A545ED0)

inline static constexpr unsigned int CKAGHNHPEAN_TypeDefinitionIndex = 10562;

class CKAGHNHPEAN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PFPEDGOCLKE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKAGHNHPEAN__CTOR_OFFSET))(this);
	}

	::AEFKCFCIHDK* PPPKPHPLJCK(::IHBOGGBMEGJ* KNHIFHIKHIO, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::AEFKCFCIHDK*(*)(::PVOID, ::IHBOGGBMEGJ*, ::System::Int32))((::PBYTE)hIl2Cpp + CKAGHNHPEAN_PPPKPHPLJCK_OFFSET))(this, KNHIFHIKHIO, MOBNMDEDJIP);
	}
};

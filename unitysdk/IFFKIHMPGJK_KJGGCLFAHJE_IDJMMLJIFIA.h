#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFFKIHMPGJK_PGPENLLCLDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA_BNDOENDLCKK_OFFSET UNITYSDK_OFFSET(0x141C1500)
#define IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA__CTOR_OFFSET UNITYSDK_OFFSET(0x141C14F0)

inline static constexpr unsigned int IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA_TypeDefinitionIndex = 66906;

class IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA : public ::System::Object
{
public:
	::System::String* ONHHKAAMAEC; // 0x10
	::IFFKIHMPGJK_PGPENLLCLDF* OMHMHAFNCKC; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* MLLFIPNEEIL; // 0x20
	::System::Int32 JDPEKICOBOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* BNDOENDLCKK()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_KJGGCLFAHJE_IDJMMLJIFIA_BNDOENDLCKK_OFFSET))(this);
	}
};

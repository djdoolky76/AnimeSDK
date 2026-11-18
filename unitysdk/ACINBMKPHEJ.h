#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PointerClickForwarder; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACINBMKPHEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154DB0B0)
#define ACINBMKPHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x154DB0A0)

inline static constexpr unsigned int ACINBMKPHEJ_TypeDefinitionIndex = 67898;

class ACINBMKPHEJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>* GMILEFHFKOB; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>* FFAKBJJNIPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::PointerClickForwarder*>*))((::PBYTE)hIl2Cpp + ACINBMKPHEJ__CTOR_OFFSET))(this, FFAKBJJNIPI);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACINBMKPHEJ_DISPOSE_OFFSET))(this);
	}
};

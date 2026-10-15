#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEOJDGBAEDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15721F90)

inline static constexpr unsigned int FEOJDGBAEDA_TypeDefinitionIndex = 80596;

	class FEOJDGBAEDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* HNEOOKPBCNK; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOFHFKPKKJI*>*))((::PBYTE)hIl2Cpp + FEOJDGBAEDA_CTOR_OFFSET))(this, a1);
		}

	};

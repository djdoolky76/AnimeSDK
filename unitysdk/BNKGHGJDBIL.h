#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNKGHGJDBIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BD690)

inline static constexpr unsigned int BNKGHGJDBIL_TypeDefinitionIndex = 43741;

	class BNKGHGJDBIL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IFPFEAADJMG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKGHGJDBIL_CTOR_OFFSET))(this);
		}

	};

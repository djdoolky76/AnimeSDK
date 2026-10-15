#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLEDBOBEPKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D7BB0)

inline static constexpr unsigned int OLEDBOBEPKP_TypeDefinitionIndex = 37253;

	class OLEDBOBEPKP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::MVector3>* LGKOJHBJBDO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEDBOBEPKP_CTOR_OFFSET))(this);
		}

	};

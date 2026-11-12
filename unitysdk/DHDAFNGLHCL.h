#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHDAFNGLHCL_CTOR_OFFSET UNITYSDK_OFFSET(0xF44A450)
#define DHDAFNGLHCL_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0xF44A240)

inline static constexpr unsigned int DHDAFNGLHCL_TypeDefinitionIndex = 69091;

	class DHDAFNGLHCL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDAFNGLHCL_CTOR_OFFSET))(this);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + DHDAFNGLHCL_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};

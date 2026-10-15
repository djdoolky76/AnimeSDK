#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJOPMLKHAGC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC88F0)
#define AJOPMLKHAGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC84D0)
#define AJOPMLKHAGC_GIBPGBDMHML_OFFSET UNITYSDK_OFFSET(0x12CC8510)

inline static constexpr unsigned int AJOPMLKHAGC_TypeDefinitionIndex = 60313;

	class AJOPMLKHAGC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOPMLKHAGC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOPMLKHAGC_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple>* GIBPGBDMHML()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOPMLKHAGC_GIBPGBDMHML_OFFSET))(this);
		}

	};

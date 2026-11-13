#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJOPMLKHAGC_CTOR_OFFSET UNITYSDK_OFFSET(0x19D4AB60)
#define AJOPMLKHAGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D4A720)
#define AJOPMLKHAGC_GIBPGBDMHML_OFFSET UNITYSDK_OFFSET(0x19D4A760)

inline static constexpr unsigned int AJOPMLKHAGC_TypeDefinitionIndex = 61597;

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

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* GIBPGBDMHML()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOPMLKHAGC_GIBPGBDMHML_OFFSET))(this);
		}

	};

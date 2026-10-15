#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPFEAEOEGFA_EXTRAEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B482F0)

inline static constexpr unsigned int GPFEAEOEGFA_ExtraExportData_TypeDefinitionIndex = 49040;

	class GPFEAEOEGFA_ExtraExportData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* chilren; // 0x10
		::System::String* MainTexPath; // 0x18
		::System::String* MaskTexPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA_EXTRAEXPORTDATA_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOJMGEMDNN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGPLDAFBAEO_CTOR_OFFSET UNITYSDK_OFFSET(0x193608C0)
#define JGPLDAFBAEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19360830)

inline static constexpr unsigned int JGPLDAFBAEO_TypeDefinitionIndex = 59908;

	class JGPLDAFBAEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HKOJMGEMDNN*>* PIALMPLGGKN; // 0x10
		::System::Boolean FGBAFHGIGHO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPLDAFBAEO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPLDAFBAEO_DISPOSE_OFFSET))(this);
		}

	};

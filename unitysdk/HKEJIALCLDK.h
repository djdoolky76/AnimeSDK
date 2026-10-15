#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOEIAKJOONB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKEJIALCLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABE800)

inline static constexpr unsigned int HKEJIALCLDK_TypeDefinitionIndex = 42847;

	class HKEJIALCLDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MOEIAKJOONB*>* OGKKJKFNCFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEJIALCLDK_CTOR_OFFSET))(this);
		}

	};

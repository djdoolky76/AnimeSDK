#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MDPMJLDHNAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924CE0)

	class MDPMJLDHNAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* CAAEJNLOIMH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPMJLDHNAD_CTOR_OFFSET))(this);
		}

	};

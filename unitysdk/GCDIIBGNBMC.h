#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCDIIBGNBMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50930)

inline static constexpr unsigned int GCDIIBGNBMC_TypeDefinitionIndex = 43784;

	class GCDIIBGNBMC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* JBOPGKKLDKH; // 0x10
		::System::UInt32 PPMHGJCKECF; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 KELOGFMDGMO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDIIBGNBMC_CTOR_OFFSET))(this);
		}

	};

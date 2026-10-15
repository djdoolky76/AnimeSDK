#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCEBAMHOOJM.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CABIEOJNNIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59A7E0)

inline static constexpr unsigned int CABIEOJNNIM_TypeDefinitionIndex = 37158;

	class CABIEOJNNIM : public ::NCEBAMHOOJM
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DDAOLIFBGMD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABIEOJNNIM_CTOR_OFFSET))(this);
		}

	};

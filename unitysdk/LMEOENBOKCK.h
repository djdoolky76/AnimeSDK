#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LMEOENBOKCK;

#define LMEOENBOKCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E5CA0)
#define LMEOENBOKCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E5B00)

inline static constexpr unsigned int LMEOENBOKCK_TypeDefinitionIndex = 14413;

	class LMEOENBOKCK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* JFAGECNFHJL; // 0x10
		::System::Boolean OHGCLLOGKOE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 FNBGMDDOHEA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEOENBOKCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LMEOENBOKCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMEOENBOKCK*))((::PBYTE)hIl2Cpp + LMEOENBOKCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

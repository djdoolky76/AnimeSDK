#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LDGFEEFHNKH;

#define LDGFEEFHNKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B22F0)
#define LDGFEEFHNKH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0B2060)

inline static constexpr unsigned int LDGFEEFHNKH_TypeDefinitionIndex = 13926;

	class LDGFEEFHNKH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GLBIANIMBII; // 0x10
		::System::UInt32 HFFBGDNDBHC; // 0x18
		::System::Boolean ENJDBDEKJIM; // 0x1C
		::System::Boolean GNDCCBNILML; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 KIFJECNOHDG; // 0x20
		::System::UInt32 AEDOBNFDODI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGFEEFHNKH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDGFEEFHNKH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDGFEEFHNKH*))((::PBYTE)hIl2Cpp + LDGFEEFHNKH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

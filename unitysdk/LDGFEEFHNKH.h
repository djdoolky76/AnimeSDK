#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LDGFEEFHNKH;

#define LDGFEEFHNKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0180)
#define LDGFEEFHNKH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0DFEF0)

inline static constexpr unsigned int LDGFEEFHNKH_TypeDefinitionIndex = 13926;

	class LDGFEEFHNKH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GLBIANIMBII; // 0x10
		::System::UInt32 AEDOBNFDODI; // 0x18
		::System::UInt32 HFFBGDNDBHC; // 0x1C
		::System::UInt32 KIFJECNOHDG; // 0x20
		::System::Boolean GNDCCBNILML; // 0x24
		::System::Boolean ENJDBDEKJIM; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGFEEFHNKH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDGFEEFHNKH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDGFEEFHNKH*))((::PBYTE)hIl2Cpp + LDGFEEFHNKH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

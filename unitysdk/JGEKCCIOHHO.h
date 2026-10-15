#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JGEKCCIOHHO;

#define JGEKCCIOHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D029460)
#define JGEKCCIOHHO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D029350)

	class JGEKCCIOHHO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ELJPCBHPKJK; // 0x10
		::System::UInt32 IEHAFKLEBEF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGEKCCIOHHO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JGEKCCIOHHO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JGEKCCIOHHO*))((::PBYTE)hIl2Cpp + JGEKCCIOHHO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

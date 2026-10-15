#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMKKKHJMOCE;

#define GMKKKHJMOCE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15AC9420)
#define GMKKKHJMOCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC9510)
#define GMKKKHJMOCE_MDNLOJEGBLJ_OFFSET UNITYSDK_OFFSET(0x15AC9520)

inline static constexpr unsigned int GMKKKHJMOCE_TypeDefinitionIndex = 72185;

	class GMKKKHJMOCE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* HEHMNMIMFMP; // 0x10
		// static const ::System::Object ODGGBCFCLHH; // 0x0
		// static const ::System::Object MIFODGBDLDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKKKHJMOCE_CTOR_OFFSET))(this);
		}

		static ::GMKKKHJMOCE* BPLPBPMEODA()
		{
			return ((::GMKKKHJMOCE*(*)())((::PBYTE)hIl2Cpp + GMKKKHJMOCE_BPLPBPMEODA_OFFSET))();
		}

		::System::Int32 MDNLOJEGBLJ(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMKKKHJMOCE_MDNLOJEGBLJ_OFFSET))(this, a1);
		}

	};

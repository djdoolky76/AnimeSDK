#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBLELMJDBEA;
class MFKLCJHKNBK;
class MGMALPPFOMA;

#define MGMALPPFOMA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB9285F0)
#define MGMALPPFOMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB928680)
#define MGMALPPFOMA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB928690)
#define MGMALPPFOMA_PMDIKIMNKOK_OFFSET UNITYSDK_OFFSET(0xB9286E0)

inline static constexpr unsigned int MGMALPPFOMA_TypeDefinitionIndex = 75758;

	class MGMALPPFOMA : public ::System::Object
	{
	public:
		::KBLELMJDBEA* PDENFEFCAGN; // 0x10
		::MFKLCJHKNBK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMALPPFOMA_CTOR_OFFSET))(this);
		}

		static ::MGMALPPFOMA* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::MGMALPPFOMA*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + MGMALPPFOMA_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMALPPFOMA_EXECUTE_OFFSET))(this);
		}

		::System::Void PMDIKIMNKOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMALPPFOMA_PMDIKIMNKOK_OFFSET))(this);
		}

	};

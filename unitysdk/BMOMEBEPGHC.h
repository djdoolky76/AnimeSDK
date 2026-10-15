#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;

#define BMOMEBEPGHC_CCBGOINCDEF_OFFSET UNITYSDK_OFFSET(0xBDC23C0)
#define BMOMEBEPGHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1D70)
#define BMOMEBEPGHC_EDEIAIDBONK_OFFSET UNITYSDK_OFFSET(0xBDC1DD0)
#define BMOMEBEPGHC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDC2180)
#define BMOMEBEPGHC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDC1D80)
#define BMOMEBEPGHC_JGBJFFCIGBO_OFFSET UNITYSDK_OFFSET(0xBDC3030)
#define BMOMEBEPGHC_NFPCHEOGBPP_OFFSET UNITYSDK_OFFSET(0xBDC2AA0)
#define BMOMEBEPGHC_PICLGALMMBC_OFFSET UNITYSDK_OFFSET(0xBDC3260)
#define BMOMEBEPGHC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBDC3180)

	class BMOMEBEPGHC : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::BNLHGENFEHG* PDENFEFCAGN; // 0x18
		::System::Int32 KGCFMJPBJGJ; // 0x20
		::System::Single OCNLFGLEPKG; // 0x24
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_TEARDOWN_OFFSET))(this);
		}

		::System::Void EDEIAIDBONK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_EDEIAIDBONK_OFFSET))(this);
		}

		::System::Void CCBGOINCDEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_CCBGOINCDEF_OFFSET))(this);
		}

		::System::Void NFPCHEOGBPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_NFPCHEOGBPP_OFFSET))(this);
		}

		::System::Void JGBJFFCIGBO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_JGBJFFCIGBO_OFFSET))(this, a1);
		}

		::System::Void PICLGALMMBC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMOMEBEPGHC_PICLGALMMBC_OFFSET))(this, a1);
		}

	};

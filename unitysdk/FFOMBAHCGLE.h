#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class BFAANIPGJEB;
class IJFIHJJPHNA;
class PLAJONHLDJN;

#define FFOMBAHCGLE_BHDLPPBDFNL_OFFSET UNITYSDK_OFFSET(0x1D7979C0)
#define FFOMBAHCGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7975B0)
#define FFOMBAHCGLE_DFLEMJFLBMF_OFFSET UNITYSDK_OFFSET(0x1D797A20)
#define FFOMBAHCGLE_ENFAMCOGFII_OFFSET UNITYSDK_OFFSET(0x1D797660)
#define FFOMBAHCGLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D797930)
#define FFOMBAHCGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7975C0)

inline static constexpr unsigned int FFOMBAHCGLE_TypeDefinitionIndex = 37452;

	class FFOMBAHCGLE : public ::System::Object
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x10
		::IJFIHJJPHNA* CEBLMNANOMJ; // 0x18
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x20
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_INITIALIZE_OFFSET))(this);
		}

		::System::Void ENFAMCOGFII(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_ENFAMCOGFII_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_EXECUTE_OFFSET))(this);
		}

		::System::Single BHDLPPBDFNL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_BHDLPPBDFNL_OFFSET))(this);
		}

		::BFAANIPGJEB* DFLEMJFLBMF()
		{
			return ((::BFAANIPGJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOMBAHCGLE_DFLEMJFLBMF_OFFSET))(this);
		}

	};

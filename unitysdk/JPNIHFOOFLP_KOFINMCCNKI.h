#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNIHFOOFLP_ZoneOut.h"
#include "unitysdk/System/Object.h"

#define JPNIHFOOFLP_KOFINMCCNKI_ACIFNKPKLPN_OFFSET UNITYSDK_OFFSET(0xB2C6A00)
#define JPNIHFOOFLP_KOFINMCCNKI_BHDEAPKIGGD_OFFSET UNITYSDK_OFFSET(0xB2C76B0)
#define JPNIHFOOFLP_KOFINMCCNKI_CLDELANGKJL_OFFSET UNITYSDK_OFFSET(0xB2C6AA0)
#define JPNIHFOOFLP_KOFINMCCNKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C7A40)
#define JPNIHFOOFLP_KOFINMCCNKI_GCIIGOIBABF_OFFSET UNITYSDK_OFFSET(0xB2C6A50)
#define JPNIHFOOFLP_KOFINMCCNKI_KDHDMDBKNJE_OFFSET UNITYSDK_OFFSET(0xB2C69B0)
#define JPNIHFOOFLP_KOFINMCCNKI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB2C7360)

inline static constexpr unsigned int JPNIHFOOFLP_KOFINMCCNKI_TypeDefinitionIndex = 62312;

	class JPNIHFOOFLP_KOFINMCCNKI : public ::System::Object
	{
	public:
		::System::Single BLOBOKKCOAA; // 0x10
		::System::Single MEFOJIDMGJE; // 0x14
		::JPNIHFOOFLP_ZoneOut MNHEIJMJNCJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_CTOR_OFFSET))(this);
		}

		::System::Boolean BHDEAPKIGGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_BHDEAPKIGGD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean KDHDMDBKNJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_KDHDMDBKNJE_OFFSET))(this);
		}

		::System::Boolean ACIFNKPKLPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_ACIFNKPKLPN_OFFSET))(this);
		}

		::System::Boolean GCIIGOIBABF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_GCIIGOIBABF_OFFSET))(this);
		}

		::System::Boolean CLDELANGKJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNIHFOOFLP_KOFINMCCNKI_CLDELANGKJL_OFFSET))(this);
		}

	};

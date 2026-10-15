#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
class KPMHFPMPBBD;

#define IAJLELNJPEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0A030)
#define IAJLELNJPEA_FOKPGFJKKAJ_OFFSET UNITYSDK_OFFSET(0x15E09FF0)
#define IAJLELNJPEA_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x15E09E70)
#define IAJLELNJPEA_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x15E09FB0)

inline static constexpr unsigned int IAJLELNJPEA_TypeDefinitionIndex = 74840;

	class IAJLELNJPEA : public ::APDMIIEDMLI_CFHOMFLPNNO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLELNJPEA_CTOR_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + IAJLELNJPEA_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLELNJPEA_MGFCPBINGNJ_OFFSET))(this);
		}

		::System::Void FOKPGFJKKAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJLELNJPEA_FOKPGFJKKAJ_OFFSET))(this);
		}

	};

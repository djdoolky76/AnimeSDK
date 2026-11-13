#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class BFAANIPGJEB;
class GGDIMKDOIGA;
class IJFIHJJPHNA;

#define NPHBGGCPGFP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1B07D700)
#define NPHBGGCPGFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B07D150)
#define NPHBGGCPGFP_ECPPOHPODJH_OFFSET UNITYSDK_OFFSET(0x1B07D680)
#define NPHBGGCPGFP_ELIPCAOMKAM_OFFSET UNITYSDK_OFFSET(0x1B07D510)
#define NPHBGGCPGFP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B07D210)
#define NPHBGGCPGFP_FCBKKNHDPEG_OFFSET UNITYSDK_OFFSET(0x1B06AD80)
#define NPHBGGCPGFP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B07D160)
#define NPHBGGCPGFP_JHEMLIMEJDO_OFFSET UNITYSDK_OFFSET(0x1B07D610)

inline static constexpr unsigned int NPHBGGCPGFP_TypeDefinitionIndex = 37453;

	class NPHBGGCPGFP : public ::System::Object
	{
	public:
		::IJFIHJJPHNA* CEBLMNANOMJ; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x20
		// static const ::System::Object GFNLAHFGPDC; // 0x0
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_EXECUTE_OFFSET))(this);
		}

		::System::Void FCBKKNHDPEG(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_FCBKKNHDPEG_OFFSET))(this, a1, a2);
		}

		::System::Single ELIPCAOMKAM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_ELIPCAOMKAM_OFFSET))(this);
		}

		::System::Single ECPPOHPODJH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_ECPPOHPODJH_OFFSET))(this);
		}

		::System::Single JHEMLIMEJDO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_JHEMLIMEJDO_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::BFAANIPGJEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAANIPGJEB*))((::PBYTE)hIl2Cpp + NPHBGGCPGFP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};

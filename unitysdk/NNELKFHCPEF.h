#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJDIAMLNILA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HBEEANKKCIK;
namespace System { class Action; }

#define NNELKFHCPEF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195BD520)
#define NNELKFHCPEF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x195BD2F0)
#define NNELKFHCPEF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195BD300)
#define NNELKFHCPEF_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x195BD760)
#define NNELKFHCPEF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x195BD3A0)
#define NNELKFHCPEF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x195BD4A0)
#define NNELKFHCPEF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195BD5E0)
#define NNELKFHCPEF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195BD0A0)
#define NNELKFHCPEF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x195BD080)
#define NNELKFHCPEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x195BD230)
#define NNELKFHCPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x195BD5D0)

inline static constexpr unsigned int NNELKFHCPEF_TypeDefinitionIndex = 15452;

class NNELKFHCPEF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::HBEEANKKCIK* EFFAONJBCOG; // 0x18
	::CJDIAMLNILA DHDJDGFNBOA; // 0x20
	::System::Int32 IJDGGCANOFI; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NNELKFHCPEF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NNELKFHCPEF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NNELKFHCPEF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HBEEANKKCIK* EKHHIIJOEFN()
	{
		return ((::HBEEANKKCIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNELKFHCPEF_EKHHIIJOEFN_OFFSET))(this);
	}
};

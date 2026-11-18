#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPHNNKCINNK.h"
#include "unitysdk/MLJIBNABKGM.h"

class FDABFGBJMAD;
class KGBFLHNJHHN;
namespace System { class String; }

#define KFGGFDDILAG_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x17494AA0)
#define KFGGFDDILAG_IDDGIEOODKH_OFFSET UNITYSDK_OFFSET(0x17494C30)
#define KFGGFDDILAG_IDJIDIDEAEP_OFFSET UNITYSDK_OFFSET(0x17494BF0)
#define KFGGFDDILAG_IKMDPFBMMGD_OFFSET UNITYSDK_OFFSET(0x17494C80)
#define KFGGFDDILAG_LKFPLJIGPFA_OFFSET UNITYSDK_OFFSET(0x17494DF0)
#define KFGGFDDILAG_LMMHKDKLAOE_OFFSET UNITYSDK_OFFSET(0x17494E30)
#define KFGGFDDILAG_OHLPKBMKKHO_OFFSET UNITYSDK_OFFSET(0x17494C40)
#define KFGGFDDILAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17494960)

inline static constexpr unsigned int KFGGFDDILAG_TypeDefinitionIndex = 10208;

class KFGGFDDILAG : public ::GPHNNKCINNK
{
public:
	::System::String* LMCJCMLKKKG; // 0x138

	::System::Void _ctor(::MLJIBNABKGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLJIBNABKGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KFGGFDDILAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean CGADIPLIANC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGFDDILAG_CGADIPLIANC_OFFSET))(this);
	}

	::System::Boolean IDJIDIDEAEP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGFDDILAG_IDJIDIDEAEP_OFFSET))(this);
	}

	::System::Void IDDGIEOODKH(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFGGFDDILAG_IDDGIEOODKH_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::String* OHLPKBMKKHO(::System::Boolean HGPMPDIPBOA)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGGFDDILAG_OHLPKBMKKHO_OFFSET))(this, HGPMPDIPBOA);
	}

	::System::Boolean IKMDPFBMMGD(::System::Boolean FJLPKBAHNLN, ::FDABFGBJMAD*& LPJMANEJPFO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::FDABFGBJMAD*&))((::PBYTE)hIl2Cpp + KFGGFDDILAG_IKMDPFBMMGD_OFFSET))(this, FJLPKBAHNLN, LPJMANEJPFO);
	}

	::System::Boolean LKFPLJIGPFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGFDDILAG_LKFPLJIGPFA_OFFSET))(this);
	}

	::System::String* LMMHKDKLAOE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGGFDDILAG_LMMHKDKLAOE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define IEJEOJHBDGD_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF15B0)
#define IEJEOJHBDGD_FPPBMJDOAEB_OFFSET UNITYSDK_OFFSET(0x15EF1CF0)
#define IEJEOJHBDGD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15EF15C0)
#define IEJEOJHBDGD_IPCHECMDJDO_OFFSET UNITYSDK_OFFSET(0x15EF16E0)
#define IEJEOJHBDGD_LOFLDNFOCKL_OFFSET UNITYSDK_OFFSET(0x15EF1C10)
#define IEJEOJHBDGD_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15EF1AF0)

inline static constexpr unsigned int IEJEOJHBDGD_TypeDefinitionIndex = 77131;

	class IEJEOJHBDGD : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_TEARDOWN_OFFSET))(this);
		}

		::System::Void IPCHECMDJDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_IPCHECMDJDO_OFFSET))(this);
		}

		::System::Boolean LOFLDNFOCKL(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_LOFLDNFOCKL_OFFSET))(this, a1);
		}

		::System::Boolean FPPBMJDOAEB(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + IEJEOJHBDGD_FPPBMJDOAEB_OFFSET))(this, a1);
		}

	};

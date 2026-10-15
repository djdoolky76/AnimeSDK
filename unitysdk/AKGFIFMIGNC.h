#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIKPKGHHFN;

#define AKGFIFMIGNC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x12CCA330)
#define AKGFIFMIGNC_CLEAR_OFFSET UNITYSDK_OFFSET(0x12CCA2B0)
#define AKGFIFMIGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCA250)
#define AKGFIFMIGNC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x12CCA2F0)
#define AKGFIFMIGNC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CCA260)

inline static constexpr unsigned int AKGFIFMIGNC_TypeDefinitionIndex = 77108;

	class AKGFIFMIGNC : public ::System::Object
	{
	public:
		::BJIKPKGHHFN* FKIBGPJNCIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFIFMIGNC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BJIKPKGHHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIKPKGHHFN*))((::PBYTE)hIl2Cpp + AKGFIFMIGNC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFIFMIGNC_CLEAR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFIFMIGNC_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFIFMIGNC_CHAHBFGGIDL_OFFSET))(this);
		}

	};

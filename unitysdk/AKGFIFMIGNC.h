#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIKPKGHHFN;

#define AKGFIFMIGNC_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x19D588C0)
#define AKGFIFMIGNC_CLEAR_OFFSET UNITYSDK_OFFSET(0x19D58840)
#define AKGFIFMIGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x19D587E0)
#define AKGFIFMIGNC_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x19D58880)
#define AKGFIFMIGNC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19D587F0)

inline static constexpr unsigned int AKGFIFMIGNC_TypeDefinitionIndex = 79442;

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

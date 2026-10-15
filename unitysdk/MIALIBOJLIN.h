#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define MIALIBOJLIN_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xB94BE20)
#define MIALIBOJLIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB94BD00)
#define MIALIBOJLIN_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB94BDE0)
#define MIALIBOJLIN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB94BD10)

inline static constexpr unsigned int MIALIBOJLIN_TypeDefinitionIndex = 60337;

	class MIALIBOJLIN : public ::EFNJLACKEDH
	{
	public:
		::System::Boolean INJJGMIGFFD; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + MIALIBOJLIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIALIBOJLIN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIALIBOJLIN_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIALIBOJLIN_BJLJAHMLKIO_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELBFOBKAK.h"
class AIMNKMEFBKE;
class PLAJONHLDJN;

#define OIHECABGFIM_APAIPDDDGEG_OFFSET UNITYSDK_OFFSET(0x1C78A5D0)
#define OIHECABGFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A1970)
#define OIHECABGFIM_MCIDOBKHIBF_OFFSET UNITYSDK_OFFSET(0x1C7A19D0)

inline static constexpr unsigned int OIHECABGFIM_TypeDefinitionIndex = 36471;

	class OIHECABGFIM : public ::JGELBFOBKAK
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x10
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x18
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + OIHECABGFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void APAIPDDDGEG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHECABGFIM_APAIPDDDGEG_OFFSET))(this, a1, a2);
		}

		::System::Void MCIDOBKHIBF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIHECABGFIM_MCIDOBKHIBF_OFFSET))(this, a1);
		}

	};

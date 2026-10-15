#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHECHLOIEJO_PJIJFDCBEEP;

#define HHECHLOIEJO_PJIJFDCBEEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBC420)
#define HHECHLOIEJO_PJIJFDCBEEP_HBHCKEGINEN_OFFSET UNITYSDK_OFFSET(0x15CB63C0)
#define HHECHLOIEJO_PJIJFDCBEEP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15CB2EC0)
#define HHECHLOIEJO_PJIJFDCBEEP_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15CB60E0)

inline static constexpr unsigned int HHECHLOIEJO_PJIJFDCBEEP_TypeDefinitionIndex = 57140;

	class HHECHLOIEJO_PJIJFDCBEEP : public ::System::Object
	{
	public:
		::System::Single OMGBJNBDBFC; // 0x10
		::System::Int32 GDLKKJEMPON; // 0x14
		::System::Single NNNAGHMNFKB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PJIJFDCBEEP_CTOR_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PJIJFDCBEEP_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PJIJFDCBEEP_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HBHCKEGINEN(::HHECHLOIEJO_PJIJFDCBEEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHECHLOIEJO_PJIJFDCBEEP*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_PJIJFDCBEEP_HBHCKEGINEN_OFFSET))(this, a1);
		}

	};

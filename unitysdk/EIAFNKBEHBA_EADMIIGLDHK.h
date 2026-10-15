#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIAFNKBEHBA_EADMIIGLDHK;

#define EIAFNKBEHBA_EADMIIGLDHK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x154BAFB0)
#define EIAFNKBEHBA_EADMIIGLDHK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x154BB550)
#define EIAFNKBEHBA_EADMIIGLDHK_CTOR_OFFSET UNITYSDK_OFFSET(0x154BB540)

inline static constexpr unsigned int EIAFNKBEHBA_EADMIIGLDHK_TypeDefinitionIndex = 71444;

	class EIAFNKBEHBA_EADMIIGLDHK : public ::System::Object
	{
	public:
		::System::Int32 BOCOKNFLKID; // 0x10
		::System::Int32 FFNBLDFFMCN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_EADMIIGLDHK_CTOR_OFFSET))(this);
		}

		static ::EIAFNKBEHBA_EADMIIGLDHK* BPLPBPMEODA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::EIAFNKBEHBA_EADMIIGLDHK*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_EADMIIGLDHK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::EIAFNKBEHBA_EADMIIGLDHK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EIAFNKBEHBA_EADMIIGLDHK*))((::PBYTE)hIl2Cpp + EIAFNKBEHBA_EADMIIGLDHK_COMPARETO_OFFSET))(this, a1);
		}

	};

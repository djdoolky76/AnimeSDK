#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGIKEJFECDM.h"
namespace System { class String; }

#define FFIONHCALGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15738D90)
#define FFIONHCALGN_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x15738E60)
#define FFIONHCALGN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15738DA0)

inline static constexpr unsigned int FFIONHCALGN_TypeDefinitionIndex = 53631;

	class FFIONHCALGN : public ::MGIKEJFECDM
	{
	public:
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FFIONHCALGN_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFIONHCALGN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFIONHCALGN_FHAPPCADGCE_OFFSET))(this, a1);
		}

	};

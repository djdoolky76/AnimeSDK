#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OPBIBEBHGEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF98770)
#define OPBIBEBHGEA_FDEELCKPEKM_OFFSET UNITYSDK_OFFSET(0xBF98710)
#define OPBIBEBHGEA_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xBF98670)

inline static constexpr unsigned int OPBIBEBHGEA_TypeDefinitionIndex = 72936;

	class OPBIBEBHGEA : public ::System::Object
	{
	public:
		// static const ::System::Object PFONJLMDIAM; // 0x0
		// static const ::System::Object EPOMHCLLHCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBIBEBHGEA_CTOR_OFFSET))(this);
		}

		::System::Boolean MIFJNPKACOB(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + OPBIBEBHGEA_MIFJNPKACOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean FDEELCKPEKM(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + OPBIBEBHGEA_FDEELCKPEKM_OFFSET))(this, a1);
		}

	};

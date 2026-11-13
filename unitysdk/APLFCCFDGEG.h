#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define APLFCCFDGEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D882650)

inline static constexpr unsigned int APLFCCFDGEG_TypeDefinitionIndex = 42903;

	class APLFCCFDGEG : public ::System::Object
	{
	public:
		::System::String* AADAFGFFODK; // 0x10
		::System::Boolean LFMIBJBEFIE; // 0x18
		::System::Boolean DFBBNFOPDHE; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 CIIFGAJONEF; // 0x1C
		::System::UInt32 BGLBJCOOMGI; // 0x20
		::System::UInt32 NALMBOOCCIN; // 0x24
		::System::UInt32 BOKJJKFCFME; // 0x28
		::System::Int32 EMLHCLFCCIC; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLFCCFDGEG_CTOR_OFFSET))(this);
		}

	};

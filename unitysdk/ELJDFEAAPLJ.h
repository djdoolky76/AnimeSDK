#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJDFEAAPLJ;
class LCJPDOOLBEC;
class OEENEGJBMCO;

#define ELJDFEAAPLJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x199AEE40)
#define ELJDFEAAPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x199AEEB0)
#define ELJDFEAAPLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x199AEEC0)
#define ELJDFEAAPLJ_HGHCGLKKHCO_OFFSET UNITYSDK_OFFSET(0x199AEF00)
#define ELJDFEAAPLJ_MKEOFKMHHBE_OFFSET UNITYSDK_OFFSET(0x199AF100)

inline static constexpr unsigned int ELJDFEAAPLJ_TypeDefinitionIndex = 74197;

	class ELJDFEAAPLJ : public ::System::Object
	{
	public:
		::OEENEGJBMCO* IPKDEJMHHJG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDFEAAPLJ_CTOR_OFFSET))(this);
		}

		static ::ELJDFEAAPLJ* BPLPBPMEODA(::OEENEGJBMCO* a1)
		{
			return ((::ELJDFEAAPLJ*(*)(::OEENEGJBMCO*))((::PBYTE)hIl2Cpp + ELJDFEAAPLJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDFEAAPLJ_DISPOSE_OFFSET))(this);
		}

		::System::Int32 HGHCGLKKHCO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDFEAAPLJ_HGHCGLKKHCO_OFFSET))(this);
		}

		::LCJPDOOLBEC* MKEOFKMHHBE()
		{
			return ((::LCJPDOOLBEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDFEAAPLJ_MKEOFKMHHBE_OFFSET))(this);
		}

	};

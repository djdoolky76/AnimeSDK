#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class DMOCAEMFOAG;
class JBACCAGFHON;

#define DMOCAEMFOAG_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC22E0)
#define DMOCAEMFOAG_GAAGAMCADAD_OFFSET UNITYSDK_OFFSET(0xFEC2100)
#define DMOCAEMFOAG_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xFEC2270)
#define DMOCAEMFOAG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xFEC2190)

inline static constexpr unsigned int DMOCAEMFOAG_TypeDefinitionIndex = 78170;

	class DMOCAEMFOAG : public ::AJHHFMBOCEN
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x20
		::System::Int64 BCLDHBAFCBP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOCAEMFOAG_CTOR_OFFSET))(this);
		}

		static ::DMOCAEMFOAG* GAAGAMCADAD(::JBACCAGFHON* a1, ::System::Int64 a2)
		{
			return ((::DMOCAEMFOAG*(*)(::JBACCAGFHON*, ::System::Int64))((::PBYTE)hIl2Cpp + DMOCAEMFOAG_GAAGAMCADAD_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOCAEMFOAG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOCAEMFOAG_ONCLEAR_OFFSET))(this);
		}

	};

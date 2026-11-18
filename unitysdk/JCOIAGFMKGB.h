#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HKLIHBEDIDE;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JCOIAGFMKGB_AMCDAOJKFNF_OFFSET UNITYSDK_OFFSET(0x160D9CA0)
#define JCOIAGFMKGB_EIBHHEMIPPH_OFFSET UNITYSDK_OFFSET(0x160D9B70)
#define JCOIAGFMKGB_OLOPFLIBJJN_OFFSET UNITYSDK_OFFSET(0x160D9CF0)
#define JCOIAGFMKGB_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x160D9C10)
#define JCOIAGFMKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x160D9AF0)

inline static constexpr unsigned int JCOIAGFMKGB_TypeDefinitionIndex = 45895;

class JCOIAGFMKGB : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::HKLIHBEDIDE*>* DGCEDIBEHMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOIAGFMKGB__CTOR_OFFSET))(this);
	}

	::System::Boolean EIBHHEMIPPH(::HKLIHBEDIDE*& CEGKJHBPBDI)
	{
		return ((::System::Boolean(*)(::PVOID, ::HKLIHBEDIDE*&))((::PBYTE)hIl2Cpp + JCOIAGFMKGB_EIBHHEMIPPH_OFFSET))(this, CEGKJHBPBDI);
	}

	::System::Void PBFBICMFFFN(::HKLIHBEDIDE* CEGKJHBPBDI)
	{
		return ((::System::Void(*)(::PVOID, ::HKLIHBEDIDE*))((::PBYTE)hIl2Cpp + JCOIAGFMKGB_PBFBICMFFFN_OFFSET))(this, CEGKJHBPBDI);
	}

	::System::Int32 AMCDAOJKFNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOIAGFMKGB_AMCDAOJKFNF_OFFSET))(this);
	}

	::System::Void OLOPFLIBJJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCOIAGFMKGB_OLOPFLIBJJN_OFFSET))(this);
	}
};

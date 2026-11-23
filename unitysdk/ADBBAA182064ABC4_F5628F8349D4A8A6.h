#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define ADBBAA182064ABC4_F5628F8349D4A8A6_F5A8087D4643B623_OFFSET UNITYSDK_OFFSET(0x277C8A0)
#define ADBBAA182064ABC4_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x277C930)
#define ADBBAA182064ABC4_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADBBAA182064ABC4_F5628F8349D4A8A6_TypeDefinitionIndex = 16487;

class ADBBAA182064ABC4_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ADBBAA182064ABC4_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ADBBAA182064ABC4_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ADBBAA182064ABC4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::Single>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::ADDF5F55A85EB950<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ADBBAA182064ABC4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 F5A8087D4643B623(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ADBBAA182064ABC4_F5628F8349D4A8A6_F5A8087D4643B623_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};

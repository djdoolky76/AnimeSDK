#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class LHFOGMNIJMP;
template <typename T> class LJHFMILANJA_1;

#define LFLKAEJOACL_CLEJAPKHGMI_OFFSET UNITYSDK_OFFSET(0x1524A9C0)
#define LFLKAEJOACL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1524A8D0)
#define LFLKAEJOACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1524A9B0)

inline static constexpr unsigned int LFLKAEJOACL_TypeDefinitionIndex = 66342;

class LFLKAEJOACL : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Int32>* ABABKHPIPIO; // 0x88
	::LJHFMILANJA_1<::System::Int32>* JIFINBOJPHA; // 0x90
	::LJHFMILANJA_1<::System::UInt32>* AHHPDDJNHOD; // 0x98
	::LJHFMILANJA_1<::System::Boolean>* AMGBGFDJNFG; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKAEJOACL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKAEJOACL_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void CLEJAPKHGMI(::LHFOGMNIJMP* HPEMFJDOAKL)
	{
		return ((::System::Void(*)(::PVOID, ::LHFOGMNIJMP*))((::PBYTE)hIl2Cpp + LFLKAEJOACL_CLEJAPKHGMI_OFFSET))(this, HPEMFJDOAKL);
	}
};

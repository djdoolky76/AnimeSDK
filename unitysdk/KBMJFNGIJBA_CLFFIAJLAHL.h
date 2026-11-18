#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;

#define KBMJFNGIJBA_CLFFIAJLAHL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12977C30)
#define KBMJFNGIJBA_CLFFIAJLAHL__CTOR_OFFSET UNITYSDK_OFFSET(0x12977C20)

inline static constexpr unsigned int KBMJFNGIJBA_CLFFIAJLAHL_TypeDefinitionIndex = 60139;

class KBMJFNGIJBA_CLFFIAJLAHL : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle KBKDKLKDGAC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMJFNGIJBA_CLFFIAJLAHL__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::IFLPGOKHDJI* FHEJELHALJE, ::ENGKPGFGGLM* HNHFLCJLMMO)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KBMJFNGIJBA_CLFFIAJLAHL_LIDNPLMPHAL_OFFSET))(this, FHEJELHALJE, HNHFLCJLMMO);
	}
};

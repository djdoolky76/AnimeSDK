#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }

#define JKJDCEALLEI_BKNNOEHHBGH_OFFSET UNITYSDK_OFFSET(0x152997A0)
#define JKJDCEALLEI_COCEAKKMJHP_OFFSET UNITYSDK_OFFSET(0x15299A50)
#define JKJDCEALLEI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15299890)
#define JKJDCEALLEI_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x15299940)
#define JKJDCEALLEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x152997F0)
#define JKJDCEALLEI__CTOR_OFFSET UNITYSDK_OFFSET(0x15299750)

inline static constexpr unsigned int JKJDCEALLEI_TypeDefinitionIndex = 49821;

class JKJDCEALLEI : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::JKJDCEALLEI*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::JKJDCEALLEI*>**)Il2CppClass::FromTypeDefinitionIndex(JKJDCEALLEI_TypeDefinitionIndex)->GetStaticField(0x4E630);
	}
	::System::Boolean EMFEIBLIAKL; // 0x10
	::System::Boolean EBJGLFJJPEC; // 0x11
	::System::Boolean KOFHLJPBKJJ; // 0x12

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDCEALLEI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKJDCEALLEI__CCTOR_OFFSET))();
	}

	static ::JKJDCEALLEI* COKNIICCODC()
	{
		return ((::JKJDCEALLEI*(*)())((::PBYTE)hIl2Cpp + JKJDCEALLEI_COKNIICCODC_OFFSET))();
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDCEALLEI_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void BKNNOEHHBGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDCEALLEI_BKNNOEHHBGH_OFFSET))(this);
	}

	static ::JKJDCEALLEI* COCEAKKMJHP()
	{
		return ((::JKJDCEALLEI*(*)())((::PBYTE)hIl2Cpp + JKJDCEALLEI_COCEAKKMJHP_OFFSET))();
	}
};

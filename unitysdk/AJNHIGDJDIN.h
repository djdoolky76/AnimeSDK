#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCJBFABIOLG.h"

#define AJNHIGDJDIN_DKNKNENGHFC_OFFSET UNITYSDK_OFFSET(0x16D8BB20)
#define AJNHIGDJDIN_GCDEENNNGKN_OFFSET UNITYSDK_OFFSET(0x16D8BB30)
#define AJNHIGDJDIN_NJLLMPCDOEB_OFFSET UNITYSDK_OFFSET(0x16D8B9F0)
#define AJNHIGDJDIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x16D8B910)
#define AJNHIGDJDIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16D8B7F0)
#define AJNHIGDJDIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8B960)

inline static constexpr unsigned int AJNHIGDJDIN_TypeDefinitionIndex = 90722;

class AJNHIGDJDIN : public ::LCJBFABIOLG
{
public:
	static ::AJNHIGDJDIN** StaticGet_PMKINFHDLFD()
	{
		return (::AJNHIGDJDIN**)Il2CppClass::FromTypeDefinitionIndex(AJNHIGDJDIN_TypeDefinitionIndex)->GetStaticField(0x4FFB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHIGDJDIN__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHIGDJDIN_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHIGDJDIN_ONCLOSE_OFFSET))(this);
	}

	static ::AJNHIGDJDIN* NJLLMPCDOEB()
	{
		return ((::AJNHIGDJDIN*(*)())((::PBYTE)hIl2Cpp + AJNHIGDJDIN_NJLLMPCDOEB_OFFSET))();
	}

	::System::Void DKNKNENGHFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHIGDJDIN_DKNKNENGHFC_OFFSET))(this);
	}

	::System::Void GCDEENNNGKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNHIGDJDIN_GCDEENNNGKN_OFFSET))(this);
	}
};

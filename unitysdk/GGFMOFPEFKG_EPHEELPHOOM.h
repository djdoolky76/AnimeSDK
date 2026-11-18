#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GGFMOFPEFKG_EPHEELPHOOM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1CE94330)
#define GGFMOFPEFKG_EPHEELPHOOM_JBPMDFJGBFG_OFFSET UNITYSDK_OFFSET(0x1CE937A0)
#define GGFMOFPEFKG_EPHEELPHOOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x861980)
#define GGFMOFPEFKG_EPHEELPHOOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE94820)

inline static constexpr unsigned int GGFMOFPEFKG_EPHEELPHOOM_TypeDefinitionIndex = 34837;

struct alignas(4) GGFMOFPEFKG_EPHEELPHOOM
{
	static ::System::Int32* StaticGet_LIFDGGKMLBJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GGFMOFPEFKG_EPHEELPHOOM_TypeDefinitionIndex)->GetStaticField(0x89E0);
	}
	::System::Int32 LBLHIHBGDND; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGFMOFPEFKG_EPHEELPHOOM__CCTOR_OFFSET))();
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFMOFPEFKG_EPHEELPHOOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	/*
	static ::GGFMOFPEFKG_EPHEELPHOOM BBPCBEEHALC(::System::Int32 OPOOIIEPDEA, ::System::String* BHNHOEONIBL)
	{
		return ((::GGFMOFPEFKG_EPHEELPHOOM(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GGFMOFPEFKG_EPHEELPHOOM_BBPCBEEHALC_OFFSET))(OPOOIIEPDEA, BHNHOEONIBL);
	}
	*/

	/*
	static ::GGFMOFPEFKG_EPHEELPHOOM JBPMDFJGBFG()
	{
		return ((::GGFMOFPEFKG_EPHEELPHOOM(*)())((::PBYTE)hIl2Cpp + GGFMOFPEFKG_EPHEELPHOOM_JBPMDFJGBFG_OFFSET))();
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ButtonPressType.h"
#include "unitysdk/System/ValueType.h"

#define NNHOMBCMFON_JBMFHAPBOOD_OFFSET UNITYSDK_OFFSET(0x595FB0)
#define NNHOMBCMFON_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x595F40)
#define NNHOMBCMFON_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x596020)

inline static constexpr unsigned int NNHOMBCMFON_TypeDefinitionIndex = 73255;

struct alignas(4) NNHOMBCMFON
{
	::System::Boolean FLAIAHHDOLJ; // 0x10
	::System::Boolean GNKOOEOLNOI; // 0x11
	::System::Boolean ACANCAIOEDA; // 0x12

	::System::Void LCOMPIBAKEI(::System::Boolean FCPCLIJNDLA, ::MoleMole::ButtonPressType JIHLGFDODBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + NNHOMBCMFON_LCOMPIBAKEI_OFFSET))(this, FCPCLIJNDLA, JIHLGFDODBC);
	}

	::System::Boolean JBMFHAPBOOD(::MoleMole::ButtonPressType JIHLGFDODBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ButtonPressType))((::PBYTE)hIl2Cpp + NNHOMBCMFON_JBMFHAPBOOD_OFFSET))(this, JIHLGFDODBC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHOMBCMFON_NPOLNFDBOOD_OFFSET))(this);
	}
};

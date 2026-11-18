#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;

#define EKGAHGCJOAN_CAKEJMKFBDI_EELCHKMKNMM_OFFSET UNITYSDK_OFFSET(0x161583F0)
#define EKGAHGCJOAN_CAKEJMKFBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x161583E0)

inline static constexpr unsigned int EKGAHGCJOAN_CAKEJMKFBDI_TypeDefinitionIndex = 51206;

class EKGAHGCJOAN_CAKEJMKFBDI : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Int32 MOHCFNIGGOE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CAKEJMKFBDI__CTOR_OFFSET))(this);
	}

	::System::Void EELCHKMKNMM(::System::Int32 KCNOHOOPNAH, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CAKEJMKFBDI_EELCHKMKNMM_OFFSET))(this, KCNOHOOPNAH, BIOGEIHKABE);
	}
};

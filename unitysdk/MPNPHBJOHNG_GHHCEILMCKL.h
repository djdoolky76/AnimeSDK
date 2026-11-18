#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAMOKNJGP;
namespace System { class String; }

#define MPNPHBJOHNG_GHHCEILMCKL_BIALHNAOJFE_OFFSET UNITYSDK_OFFSET(0x19211C80)
#define MPNPHBJOHNG_GHHCEILMCKL__CTOR_OFFSET UNITYSDK_OFFSET(0x19211C70)

inline static constexpr unsigned int MPNPHBJOHNG_GHHCEILMCKL_TypeDefinitionIndex = 66746;

class MPNPHBJOHNG_GHHCEILMCKL : public ::System::Object
{
public:
	::EKGAMOKNJGP* FODKKIJGBGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_GHHCEILMCKL__CTOR_OFFSET))(this);
	}

	::System::String* BIALHNAOJFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNPHBJOHNG_GHHCEILMCKL_BIALHNAOJFE_OFFSET))(this);
	}
};

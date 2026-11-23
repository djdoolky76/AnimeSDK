#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BE02B8B968EDF886;
template <typename T> class BF99F5374C2D4358;

#define F80E696C4482D33F_A5A343965E7F2CEC_OFFSET UNITYSDK_OFFSET(0x27FBCE0)
#define F80E696C4482D33F_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x27FBA90)
#define F80E696C4482D33F__CCTOR_OFFSET UNITYSDK_OFFSET(0x27FBC60)

inline static constexpr unsigned int F80E696C4482D33F_TypeDefinitionIndex = 16775;

class F80E696C4482D33F : public ::System::Object
{
public:
	static ::BF99F5374C2D4358<::BE02B8B968EDF886*>** StaticGet_BE85F120634F571A()
	{
		return (::BF99F5374C2D4358<::BE02B8B968EDF886*>**)Il2CppClass::FromTypeDefinitionIndex(F80E696C4482D33F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void EC22F59F2C588175()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F80E696C4482D33F_EC22F59F2C588175_OFFSET))();
	}

	static ::BF99F5374C2D4358<::BE02B8B968EDF886*>* A5A343965E7F2CEC()
	{
		return ((::BF99F5374C2D4358<::BE02B8B968EDF886*>*(*)())((::PBYTE)hIl2Cpp + F80E696C4482D33F_A5A343965E7F2CEC_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F80E696C4482D33F__CCTOR_OFFSET))();
	}
};

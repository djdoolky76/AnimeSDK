#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFOKJJJOOEF;
class FOBPIEGBNKH;
namespace System { class String; }

#define HMIGICEEGDE_CCAJENCIIJH_OFFSET UNITYSDK_OFFSET(0x1470B1D0)
#define HMIGICEEGDE_LMKHPCPEEIA_OFFSET UNITYSDK_OFFSET(0x1470B120)

inline static constexpr unsigned int HMIGICEEGDE_TypeDefinitionIndex = 39695;

class HMIGICEEGDE : public ::System::Object
{
public:
	static ::FOBPIEGBNKH* LMKHPCPEEIA(::BFOKJJJOOEF* AAOCANGHBDG)
	{
		return ((::FOBPIEGBNKH*(*)(::BFOKJJJOOEF*))((::PBYTE)hIl2Cpp + HMIGICEEGDE_LMKHPCPEEIA_OFFSET))(AAOCANGHBDG);
	}

	static ::System::Int32 CCAJENCIIJH(::System::String* IPOABPNFPHJ)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HMIGICEEGDE_CCAJENCIIJH_OFFSET))(IPOABPNFPHJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIAEJGNHIEC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define GMMBMCIOBKM_BBKHPEFPCGA_OMCCADPIBLP_OFFSET UNITYSDK_OFFSET(0x18161C40)
#define GMMBMCIOBKM_BBKHPEFPCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1815DD70)

inline static constexpr unsigned int GMMBMCIOBKM_BBKHPEFPCGA_TypeDefinitionIndex = 72252;

class GMMBMCIOBKM_BBKHPEFPCGA : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::HIAEJGNHIEC*>* BJCMOCOOCND; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMBMCIOBKM_BBKHPEFPCGA__CTOR_OFFSET))(this);
	}

	::System::Void OMCCADPIBLP(::System::Boolean EBFCACIEKBC, ::HIAEJGNHIEC* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::HIAEJGNHIEC*))((::PBYTE)hIl2Cpp + GMMBMCIOBKM_BBKHPEFPCGA_OMCCADPIBLP_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};

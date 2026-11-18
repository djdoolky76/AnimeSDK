#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMMBMCIOBKM;
class INEGGCPFANF;
namespace System { template <typename T1, typename T2> class Action_2; }

#define GMMBMCIOBKM_AFMPMLODDFO_HAMAFOGPBIA_OFFSET UNITYSDK_OFFSET(0x16CD53A0)
#define GMMBMCIOBKM_AFMPMLODDFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD5390)

inline static constexpr unsigned int GMMBMCIOBKM_AFMPMLODDFO_TypeDefinitionIndex = 72251;

class GMMBMCIOBKM_AFMPMLODDFO : public ::System::Object
{
public:
	::GMMBMCIOBKM* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::INEGGCPFANF*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMBMCIOBKM_AFMPMLODDFO__CTOR_OFFSET))(this);
	}

	::System::Void HAMAFOGPBIA(::System::Boolean EBFCACIEKBC, ::INEGGCPFANF* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::INEGGCPFANF*))((::PBYTE)hIl2Cpp + GMMBMCIOBKM_AFMPMLODDFO_HAMAFOGPBIA_OFFSET))(this, EBFCACIEKBC, GLAOEHCGCFO);
	}
};

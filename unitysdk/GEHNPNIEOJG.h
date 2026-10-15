#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define GEHNPNIEOJG_CTOR_OFFSET UNITYSDK_OFFSET(0x159CE170)
#define GEHNPNIEOJG_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x159CE210)

inline static constexpr unsigned int GEHNPNIEOJG_TypeDefinitionIndex = 76921;

	class GEHNPNIEOJG : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* JKEKGMCBLEF; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + GEHNPNIEOJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHNPNIEOJG_LATEEXECUTE_OFFSET))(this);
		}

	};

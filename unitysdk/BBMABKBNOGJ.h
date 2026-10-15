#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define BBMABKBNOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E930D0)
#define BBMABKBNOGJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E93170)

inline static constexpr unsigned int BBMABKBNOGJ_TypeDefinitionIndex = 76948;

	class BBMABKBNOGJ : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::Entitas::IGroup* GJMDKJKKCKE; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BBMABKBNOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABKBNOGJ_EXECUTE_OFFSET))(this);
		}

	};

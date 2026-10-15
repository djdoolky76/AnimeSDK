#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define BBMABKBNOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E86270)
#define BBMABKBNOGJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15E86310)

inline static constexpr unsigned int BBMABKBNOGJ_TypeDefinitionIndex = 76947;

	class BBMABKBNOGJ : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* GJMDKJKKCKE; // 0x18
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

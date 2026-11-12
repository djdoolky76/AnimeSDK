#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define BBMABKBNOGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1708B680)
#define BBMABKBNOGJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1708B720)

inline static constexpr unsigned int BBMABKBNOGJ_TypeDefinitionIndex = 79282;

	class BBMABKBNOGJ : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* GJMDKJKKCKE; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::EFODGECFLLC* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BBMABKBNOGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMABKBNOGJ_EXECUTE_OFFSET))(this);
		}

	};

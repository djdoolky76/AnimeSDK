#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define EKDIBKHLGPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1998A9A0)
#define EKDIBKHLGPM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1998AA40)

inline static constexpr unsigned int EKDIBKHLGPM_TypeDefinitionIndex = 79497;

	class EKDIBKHLGPM : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* JPKEBGGDFPL; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + EKDIBKHLGPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDIBKHLGPM_EXECUTE_OFFSET))(this);
		}

	};

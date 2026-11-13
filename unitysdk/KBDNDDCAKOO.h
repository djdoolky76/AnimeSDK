#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define KBDNDDCAKOO_CTOR_OFFSET UNITYSDK_OFFSET(0x19DCD930)
#define KBDNDDCAKOO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19DCDA60)
#define KBDNDDCAKOO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19DCD940)
#define KBDNDDCAKOO_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x19DCDA10)

inline static constexpr unsigned int KBDNDDCAKOO_TypeDefinitionIndex = 79492;

	class KBDNDDCAKOO : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PECJBCGJFDN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBDNDDCAKOO_EXECUTE_OFFSET))(this);
		}

	};

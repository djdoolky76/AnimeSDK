#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define PEODPILAKEI_CTOR_OFFSET UNITYSDK_OFFSET(0xCAD4EC0)
#define PEODPILAKEI_EXECUTE_OFFSET UNITYSDK_OFFSET(0xCAD5110)

inline static constexpr unsigned int PEODPILAKEI_TypeDefinitionIndex = 80031;

	class PEODPILAKEI : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* MHAEBFAEFCG; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + PEODPILAKEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEODPILAKEI_EXECUTE_OFFSET))(this);
		}

	};

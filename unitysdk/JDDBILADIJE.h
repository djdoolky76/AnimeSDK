#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define JDDBILADIJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB904FF0)
#define JDDBILADIJE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB9050C0)

inline static constexpr unsigned int JDDBILADIJE_TypeDefinitionIndex = 80008;

	class JDDBILADIJE : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* OOPNDGNIJNL; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JDDBILADIJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDBILADIJE_EXECUTE_OFFSET))(this);
		}

	};

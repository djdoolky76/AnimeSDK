#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define JDDBILADIJE_CTOR_OFFSET UNITYSDK_OFFSET(0x16981700)
#define JDDBILADIJE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x169817D0)

inline static constexpr unsigned int JDDBILADIJE_TypeDefinitionIndex = 80007;

	class JDDBILADIJE : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* OOPNDGNIJNL; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + JDDBILADIJE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDBILADIJE_EXECUTE_OFFSET))(this);
		}

	};

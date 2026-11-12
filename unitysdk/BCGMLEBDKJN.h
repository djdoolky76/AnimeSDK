#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define BCGMLEBDKJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1709FF10)
#define BCGMLEBDKJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1709FFE0)

inline static constexpr unsigned int BCGMLEBDKJN_TypeDefinitionIndex = 80021;

	class BCGMLEBDKJN : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* MHAEBFAEFCG; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + BCGMLEBDKJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGMLEBDKJN_EXECUTE_OFFSET))(this);
		}

	};

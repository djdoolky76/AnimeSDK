#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define FMLNHCAOKIB_CTOR_OFFSET UNITYSDK_OFFSET(0x167D1F90)
#define FMLNHCAOKIB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x167D2060)
#define FMLNHCAOKIB_KBPCJGLMFJL_OFFSET UNITYSDK_OFFSET(0x167D22E0)
#define FMLNHCAOKIB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x167D24D0)

inline static constexpr unsigned int FMLNHCAOKIB_TypeDefinitionIndex = 79999;

	class FMLNHCAOKIB : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* MHAEBFAEFCG; // 0x18
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + FMLNHCAOKIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLNHCAOKIB_EXECUTE_OFFSET))(this);
		}

		::System::Void KBPCJGLMFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLNHCAOKIB_KBPCJGLMFJL_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLNHCAOKIB_TEARDOWN_OFFSET))(this);
		}

	};

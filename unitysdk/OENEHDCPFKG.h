#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define OENEHDCPFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x17659E60)
#define OENEHDCPFKG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17659F30)
#define OENEHDCPFKG_MJGJMPGIKDC_OFFSET UNITYSDK_OFFSET(0x1765A220)
#define OENEHDCPFKG_NLDCHAIOMBJ_OFFSET UNITYSDK_OFFSET(0x1765A2D0)

inline static constexpr unsigned int OENEHDCPFKG_TypeDefinitionIndex = 79994;

	class OENEHDCPFKG : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* LELLJFPOBBK; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x20
		// static const ::System::Object MDJEGDHFKOE; // 0x0
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + OENEHDCPFKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENEHDCPFKG_EXECUTE_OFFSET))(this);
		}

		::System::Void NLDCHAIOMBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENEHDCPFKG_NLDCHAIOMBJ_OFFSET))(this);
		}

		::System::Single MJGJMPGIKDC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OENEHDCPFKG_MJGJMPGIKDC_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderTestModule_DJIICLIILAM_TestStatus.h"
#include "unitysdk/System/Object.h"
class HipplenBuilderTestAsset_TestConfig;
namespace System { class String; }

#define HIPPLENBUILDERTESTMODULE_DJIICLIILAM_CTOR_OFFSET UNITYSDK_OFFSET(0x193FBA30)
#define HIPPLENBUILDERTESTMODULE_DJIICLIILAM_EMGEGENNKGF_OFFSET UNITYSDK_OFFSET(0x193FA560)
#define HIPPLENBUILDERTESTMODULE_DJIICLIILAM_KIFKEHEBGKF_OFFSET UNITYSDK_OFFSET(0x193FA5B0)
#define HIPPLENBUILDERTESTMODULE_DJIICLIILAM_KMBHEADNNGI_OFFSET UNITYSDK_OFFSET(0x193FC650)
#define HIPPLENBUILDERTESTMODULE_DJIICLIILAM_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x193FC5F0)

inline static constexpr unsigned int HipplenBuilderTestModule_DJIICLIILAM_TypeDefinitionIndex = 48242;

	class HipplenBuilderTestModule_DJIICLIILAM : public ::System::Object
	{
	public:
		::HipplenBuilderTestAsset_TestConfig* IBPIJIANEFM; // 0x10
		::HipplenBuilderTestModule_DJIICLIILAM_TestStatus FFEPLIHOFLA; // 0x18
		::System::Void _ctor(::HipplenBuilderTestAsset_TestConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderTestAsset_TestConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_DJIICLIILAM_CTOR_OFFSET))(this, a1);
		}

		::System::String* PNLLINHJDJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_DJIICLIILAM_PNLLINHJDJF_OFFSET))(this);
		}

		::System::Int32 EMGEGENNKGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_DJIICLIILAM_EMGEGENNKGF_OFFSET))(this);
		}

		::System::Int32 KIFKEHEBGKF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_DJIICLIILAM_KIFKEHEBGKF_OFFSET))(this);
		}

		::System::String* KMBHEADNNGI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTMODULE_DJIICLIILAM_KMBHEADNNGI_OFFSET))(this);
		}

	};

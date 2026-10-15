#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODCELNBAEIB;
namespace System { template <typename T> class Action_1; }

#define FGPBFMIECPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15762C90)
#define FGPBFMIECPL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15762DB0)
#define FGPBFMIECPL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15762D10)
#define FGPBFMIECPL_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x15762D70)
#define FGPBFMIECPL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15762CA0)

inline static constexpr unsigned int FGPBFMIECPL_TypeDefinitionIndex = 79093;

	class FGPBFMIECPL : public ::System::Object
	{
	public:
		::System::Action_1<::ODCELNBAEIB*>* PEIHJAEIGHK; // 0x10
		::System::Void _ctor(::System::Action_1<::ODCELNBAEIB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ODCELNBAEIB*>*))((::PBYTE)hIl2Cpp + FGPBFMIECPL_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::ODCELNBAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*))((::PBYTE)hIl2Cpp + FGPBFMIECPL_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGPBFMIECPL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPBFMIECPL_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPBFMIECPL_HADOHLNHHGB_OFFSET))(this);
		}

	};

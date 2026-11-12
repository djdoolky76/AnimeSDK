#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }

#define PCGHKFAFCOL_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xC903D30)
#define PCGHKFAFCOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC903D20)
#define PCGHKFAFCOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC903E70)
#define PCGHKFAFCOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC903D70)

inline static constexpr unsigned int PCGHKFAFCOL_TypeDefinitionIndex = 79001;

	class PCGHKFAFCOL : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* CIIFMONKDJK; // 0x20
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_EXECUTE_OFFSET))(this);
		}

	};

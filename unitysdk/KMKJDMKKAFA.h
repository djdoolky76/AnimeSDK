#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreReleaseScheduleState.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KMKJDMKKAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB55D460)
#define KMKJDMKKAFA_IHBNDMPMFGD_OFFSET UNITYSDK_OFFSET(0xB55D240)
#define KMKJDMKKAFA_IMGKINDBMBJ_OFFSET UNITYSDK_OFFSET(0xB55D0A0)
#define KMKJDMKKAFA_JFMENNFLJIE_OFFSET UNITYSDK_OFFSET(0xB55D130)
#define KMKJDMKKAFA_KNLMHHELDFM_OFFSET UNITYSDK_OFFSET(0xB55CEB0)
#define KMKJDMKKAFA_KNNALFDCDDL_OFFSET UNITYSDK_OFFSET(0xB55D000)
#define KMKJDMKKAFA_LKFCBFDLBLD_OFFSET UNITYSDK_OFFSET(0xB55CF50)
#define KMKJDMKKAFA_ONCHHIJLCJI_OFFSET UNITYSDK_OFFSET(0xB55CF00)

inline static constexpr unsigned int KMKJDMKKAFA_TypeDefinitionIndex = 66709;

	class KMKJDMKKAFA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_CTOR_OFFSET))(this);
		}

		::System::Boolean KNLMHHELDFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_KNLMHHELDFM_OFFSET))(this, a1);
		}

		::RPG::Client::PreReleaseScheduleState ONCHHIJLCJI(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreReleaseScheduleState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_ONCHHIJLCJI_OFFSET))(this, a1);
		}

		::System::Boolean LKFCBFDLBLD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_LKFCBFDLBLD_OFFSET))(this, a1);
		}

		::System::UInt32 KNNALFDCDDL(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_KNNALFDCDDL_OFFSET))(this, a1);
		}

		::System::Nullable* IMGKINDBMBJ(::System::UInt32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_IMGKINDBMBJ_OFFSET))(this, a1);
		}

		::System::Nullable* JFMENNFLJIE(::System::UInt32 a1)
		{
			return ((::System::Nullable*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_JFMENNFLJIE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* IHBNDMPMFGD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_IHBNDMPMFGD_OFFSET))(this);
		}

	};

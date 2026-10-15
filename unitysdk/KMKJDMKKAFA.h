#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PreReleaseScheduleState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KMKJDMKKAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB556B30)
#define KMKJDMKKAFA_IHBNDMPMFGD_OFFSET UNITYSDK_OFFSET(0xB556910)
#define KMKJDMKKAFA_IMGKINDBMBJ_OFFSET UNITYSDK_OFFSET(0xB556770)
#define KMKJDMKKAFA_JFMENNFLJIE_OFFSET UNITYSDK_OFFSET(0xB556800)
#define KMKJDMKKAFA_KNLMHHELDFM_OFFSET UNITYSDK_OFFSET(0xB556580)
#define KMKJDMKKAFA_KNNALFDCDDL_OFFSET UNITYSDK_OFFSET(0xB5566D0)
#define KMKJDMKKAFA_LKFCBFDLBLD_OFFSET UNITYSDK_OFFSET(0xB556620)
#define KMKJDMKKAFA_ONCHHIJLCJI_OFFSET UNITYSDK_OFFSET(0xB5565D0)

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

		::System::Nullable_1<::System::UInt32> IMGKINDBMBJ(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_IMGKINDBMBJ_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt32> JFMENNFLJIE(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_JFMENNFLJIE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* IHBNDMPMFGD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMKJDMKKAFA_IHBNDMPMFGD_OFFSET))(this);
		}

	};

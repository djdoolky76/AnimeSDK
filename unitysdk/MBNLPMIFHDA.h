#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBNLPMIFHDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B834490)
#define MBNLPMIFHDA_GET_LONGTAILMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B8352E0)
#define MBNLPMIFHDA_JICCHJKDJNM_OFFSET UNITYSDK_OFFSET(0x1B835200)
#define MBNLPMIFHDA_LNCEGKNJPKM_OFFSET UNITYSDK_OFFSET(0x1B835270)
#define MBNLPMIFHDA_SET_LONGTAILMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B8352F0)

inline static constexpr unsigned int MBNLPMIFHDA_TypeDefinitionIndex = 83523;

	class MBNLPMIFHDA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FIHNBGAGLPL; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* JLMLECFFHEH; // 0x18
		::System::UInt32 _LongTailMainMissionID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNLPMIFHDA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* JICCHJKDJNM()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNLPMIFHDA_JICCHJKDJNM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* LNCEGKNJPKM()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNLPMIFHDA_LNCEGKNJPKM_OFFSET))(this);
		}

		::System::UInt32 get_LongTailMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNLPMIFHDA_GET_LONGTAILMAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_LongTailMainMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBNLPMIFHDA_SET_LONGTAILMAINMISSIONID_OFFSET))(this, a1);
		}

	};

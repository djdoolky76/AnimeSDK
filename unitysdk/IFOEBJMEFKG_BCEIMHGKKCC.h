#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIILELJGIE;
namespace System { template <typename T> class Predicate_1; }

#define IFOEBJMEFKG_BCEIMHGKKCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15F24570)
#define IFOEBJMEFKG_BCEIMHGKKCC_GET_ISPROGRESSMET_OFFSET UNITYSDK_OFFSET(0x15F24550)
#define IFOEBJMEFKG_BCEIMHGKKCC_SET_ISPROGRESSMET_OFFSET UNITYSDK_OFFSET(0x15F24560)

inline static constexpr unsigned int IFOEBJMEFKG_BCEIMHGKKCC_TypeDefinitionIndex = 79439;

	class IFOEBJMEFKG_BCEIMHGKKCC : public ::System::Object
	{
	public:
		::System::Predicate_1<::OFIILELJGIE*>* _IsProgressMet_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_BCEIMHGKKCC_CTOR_OFFSET))(this);
		}

		::System::Predicate_1<::OFIILELJGIE*>* get_IsProgressMet()
		{
			return ((::System::Predicate_1<::OFIILELJGIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_BCEIMHGKKCC_GET_ISPROGRESSMET_OFFSET))(this);
		}

		::System::Void set_IsProgressMet(::System::Predicate_1<::OFIILELJGIE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::OFIILELJGIE*>*))((::PBYTE)hIl2Cpp + IFOEBJMEFKG_BCEIMHGKKCC_SET_ISPROGRESSMET_OFFSET))(this, a1);
		}

	};

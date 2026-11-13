#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHNLMGAACM;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define KNMJJHEKJDI_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x18FAEF40)
#define KNMJJHEKJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x18FAF000)
#define KNMJJHEKJDI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FAF0C0)
#define KNMJJHEKJDI_OFBKIOEEMKE_OFFSET UNITYSDK_OFFSET(0x18FAF140)
#define KNMJJHEKJDI_PPEDLFNLPCN_OFFSET UNITYSDK_OFFSET(0x18FAF3E0)
#define KNMJJHEKJDI_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x18FAEFA0)

inline static constexpr unsigned int KNMJJHEKJDI_TypeDefinitionIndex = 82454;

	class KNMJJHEKJDI : public ::System::Object
	{
	public:
		::System::Action* OnMaybeChanged; // 0x10
		::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* EOPAAKIBIEP; // 0x18
		::NLHNLMGAACM* OJDFLANLCEF; // 0x20
		::System::Void _ctor(::NLHNLMGAACM* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NLHNLMGAACM*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_DISPOSE_OFFSET))(this);
		}

		::System::Void OFBKIOEEMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_OFBKIOEEMKE_OFFSET))(this, a1);
		}

		::System::Boolean PPEDLFNLPCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMJJHEKJDI_PPEDLFNLPCN_OFFSET))(this);
		}

	};

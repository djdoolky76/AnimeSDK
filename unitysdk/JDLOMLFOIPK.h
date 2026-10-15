#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGJHEBNJD;
namespace RPG::Client { class PSManager; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDLOMLFOIPK_CTOR_OFFSET UNITYSDK_OFFSET(0x165C8B40)
#define JDLOMLFOIPK_FAEBNMMIADH_OFFSET UNITYSDK_OFFSET(0x165C89F0)
#define JDLOMLFOIPK_IECFILHPBEF_OFFSET UNITYSDK_OFFSET(0x165C8980)
#define JDLOMLFOIPK_JMBCNNMEGAE_OFFSET UNITYSDK_OFFSET(0x165C8830)

inline static constexpr unsigned int JDLOMLFOIPK_TypeDefinitionIndex = 64258;

	class JDLOMLFOIPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_CTOR_OFFSET))(this);
		}

		::System::Void JMBCNNMEGAE(::System::Action_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_JMBCNNMEGAE_OFFSET))(this, a1, a2);
		}

		::System::Void FAEBNMMIADH(::System::Action_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::List_1<::NNAGJHEBNJD*>*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_FAEBNMMIADH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PSManager* IECFILHPBEF()
		{
			return ((::RPG::Client::PSManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_IECFILHPBEF_OFFSET))(this);
		}

	};

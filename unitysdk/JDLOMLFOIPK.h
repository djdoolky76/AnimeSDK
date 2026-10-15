#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNAGJHEBNJD;
namespace RPG::Client { class PSManager; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDLOMLFOIPK_CTOR_OFFSET UNITYSDK_OFFSET(0x165D8000)
#define JDLOMLFOIPK_FAEBNMMIADH_OFFSET UNITYSDK_OFFSET(0x165D7EB0)
#define JDLOMLFOIPK_IECFILHPBEF_OFFSET UNITYSDK_OFFSET(0x165D7E40)
#define JDLOMLFOIPK_JMBCNNMEGAE_OFFSET UNITYSDK_OFFSET(0x165D7CF0)

inline static constexpr unsigned int JDLOMLFOIPK_TypeDefinitionIndex = 64258;

	class JDLOMLFOIPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_CTOR_OFFSET))(this);
		}

		::System::Void JMBCNNMEGAE(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_JMBCNNMEGAE_OFFSET))(this, a1, a2);
		}

		::System::Void FAEBNMMIADH(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_FAEBNMMIADH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PSManager* IECFILHPBEF()
		{
			return ((::RPG::Client::PSManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLOMLFOIPK_IECFILHPBEF_OFFSET))(this);
		}

	};

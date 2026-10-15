#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAGHNEIEPGP;
class OJDIPBBEIOB;
namespace RPG::GameCore { class RogueTournWeeklyDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAGHNEIEPGP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B76160)
#define HAGHNEIEPGP_GCFLBAKNFHP_OFFSET UNITYSDK_OFFSET(0x15B76440)
#define HAGHNEIEPGP_GET_HYPERPARAMS_OFFSET UNITYSDK_OFFSET(0x15B76430)
#define HAGHNEIEPGP_MMDAAEJLJEM_OFFSET UNITYSDK_OFFSET(0x15B76240)
#define HAGHNEIEPGP_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0x15B761E0)

inline static constexpr unsigned int HAGHNEIEPGP_TypeDefinitionIndex = 67878;

	class HAGHNEIEPGP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* _HyperParams_k__BackingField; // 0x10
		::System::UInt32 IMLOBFECNEH; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAGHNEIEPGP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::HAGHNEIEPGP*>* MMDAAEJLJEM(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::HAGHNEIEPGP*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + HAGHNEIEPGP_MMDAAEJLJEM_OFFSET))(a1);
		}

		::RPG::GameCore::RogueTournWeeklyDisplayRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::RogueTournWeeklyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGHNEIEPGP_PDAENODHFCM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* get_HyperParams()
		{
			return ((::System::Collections::Generic::List_1<::OJDIPBBEIOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGHNEIEPGP_GET_HYPERPARAMS_OFFSET))(this);
		}

		::System::String* GCFLBAKNFHP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGHNEIEPGP_GCFLBAKNFHP_OFFSET))(this);
		}

	};

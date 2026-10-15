#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFHFKPKKJI;
class DCCEKONOPCK;
class IEODIJJGAGM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AADIBKNAJJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C1BD0)
#define AADIBKNAJJI_GET_MASTER_OFFSET UNITYSDK_OFFSET(0xB0C1BB0)
#define AADIBKNAJJI_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0xB0C1BC0)
#define AADIBKNAJJI_GET_TEAMHEALTH_OFFSET UNITYSDK_OFFSET(0xB0C1B90)
#define AADIBKNAJJI_GET_TEAMSTATUSES_OFFSET UNITYSDK_OFFSET(0xB0C1BA0)

inline static constexpr unsigned int AADIBKNAJJI_TypeDefinitionIndex = 80821;

	class AADIBKNAJJI : public ::System::Object
	{
	public:
		::IEODIJJGAGM* _Servant_k__BackingField; // 0x10
		::DCCEKONOPCK* _TeamHealth_k__BackingField; // 0x18
		::IEODIJJGAGM* _Master_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* _TeamStatuses_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADIBKNAJJI_CTOR_OFFSET))(this);
		}

		::DCCEKONOPCK* get_TeamHealth()
		{
			return ((::DCCEKONOPCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADIBKNAJJI_GET_TEAMHEALTH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* get_TeamStatuses()
		{
			return ((::System::Collections::Generic::List_1<::AOFHFKPKKJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADIBKNAJJI_GET_TEAMSTATUSES_OFFSET))(this);
		}

		::IEODIJJGAGM* get_Master()
		{
			return ((::IEODIJJGAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADIBKNAJJI_GET_MASTER_OFFSET))(this);
		}

		::IEODIJJGAGM* get_Servant()
		{
			return ((::IEODIJJGAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AADIBKNAJJI_GET_SERVANT_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGOKLGGHOE;
class EPCFIBODPIE;
class HNFFJNEKJHA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EPCFIBODPIE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155C3A60)
#define EPCFIBODPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x155C3AF0)
#define EPCFIBODPIE_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x155C3B00)
#define EPCFIBODPIE_GET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x155C3B20)
#define EPCFIBODPIE_MMFIOKJJMJO_OFFSET UNITYSDK_OFFSET(0x155C34F0)
#define EPCFIBODPIE_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x155C3B10)
#define EPCFIBODPIE_SET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x155C3B30)

inline static constexpr unsigned int EPCFIBODPIE_TypeDefinitionIndex = 66758;

	class EPCFIBODPIE : public ::System::Object
	{
	public:
		::EAGOKLGGHOE* _ReplayInfo_k__BackingField; // 0x10
		::System::String* _BattleReplayKey_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCFIBODPIE_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::EPCFIBODPIE*>* MMFIOKJJMJO(::System::Collections::Generic::IEnumerable_1<::HNFFJNEKJHA*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::EPCFIBODPIE*>*(*)(::System::Collections::Generic::IEnumerable_1<::HNFFJNEKJHA*>*))((::PBYTE)hIl2Cpp + EPCFIBODPIE_MMFIOKJJMJO_OFFSET))(a1);
		}

		static ::EPCFIBODPIE* BPLPBPMEODA(::HNFFJNEKJHA* a1)
		{
			return ((::EPCFIBODPIE*(*)(::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + EPCFIBODPIE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::String* get_BattleReplayKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCFIBODPIE_GET_BATTLEREPLAYKEY_OFFSET))(this);
		}

		::System::Void set_BattleReplayKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPCFIBODPIE_SET_BATTLEREPLAYKEY_OFFSET))(this, a1);
		}

		::EAGOKLGGHOE* get_ReplayInfo()
		{
			return ((::EAGOKLGGHOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCFIBODPIE_GET_REPLAYINFO_OFFSET))(this);
		}

		::System::Void set_ReplayInfo(::EAGOKLGGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGOKLGGHOE*))((::PBYTE)hIl2Cpp + EPCFIBODPIE_SET_REPLAYINFO_OFFSET))(this, a1);
		}

	};

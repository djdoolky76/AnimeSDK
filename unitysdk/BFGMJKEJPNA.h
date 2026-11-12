#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKFODPFGEA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFGMJKEJPNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ECE90)
#define BFGMJKEJPNA_GET_FULLUNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0xB7ECE70)
#define BFGMJKEJPNA_GET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0xB7ECE50)
#define BFGMJKEJPNA_GET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0xB7ECE30)
#define BFGMJKEJPNA_SET_FULLUNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0xB7ECE80)
#define BFGMJKEJPNA_SET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0xB7ECE60)
#define BFGMJKEJPNA_SET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0xB7ECE40)

inline static constexpr unsigned int BFGMJKEJPNA_TypeDefinitionIndex = 84618;

	class BFGMJKEJPNA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FullUnlockedDriverIDs_k__BackingField; // 0x10
		::KHKFODPFGEA* _NextAgendaDto_k__BackingField; // 0x18
		::System::Boolean _IsCycleFinished_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_CTOR_OFFSET))(this);
		}

		::KHKFODPFGEA* get_NextAgendaDto()
		{
			return ((::KHKFODPFGEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_GET_NEXTAGENDADTO_OFFSET))(this);
		}

		::System::Void set_NextAgendaDto(::KHKFODPFGEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKFODPFGEA*))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_SET_NEXTAGENDADTO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCycleFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_GET_ISCYCLEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsCycleFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_SET_ISCYCLEFINISHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FullUnlockedDriverIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_GET_FULLUNLOCKEDDRIVERIDS_OFFSET))(this);
		}

		::System::Void set_FullUnlockedDriverIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BFGMJKEJPNA_SET_FULLUNLOCKEDDRIVERIDS_OFFSET))(this, a1);
		}

	};

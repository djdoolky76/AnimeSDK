#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfEnterNextDayHint; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGEJJDKCGHB_BPPMDJJDCNH_OFFSET UNITYSDK_OFFSET(0xBB04B70)
#define BGEJJDKCGHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB04D00)
#define BGEJJDKCGHB_IFLDDKGGEIC_OFFSET UNITYSDK_OFFSET(0xBB04520)
#define BGEJJDKCGHB_JKNCGLONGFO_OFFSET UNITYSDK_OFFSET(0xBB046C0)
#define BGEJJDKCGHB_NMELMFEELAD_OFFSET UNITYSDK_OFFSET(0xBB04850)
#define BGEJJDKCGHB_OLGMGLEOCEL_OFFSET UNITYSDK_OFFSET(0xBB044C0)
#define BGEJJDKCGHB_POIBIIOPLGG_OFFSET UNITYSDK_OFFSET(0xBB049E0)

inline static constexpr unsigned int BGEJJDKCGHB_TypeDefinitionIndex = 65131;

	class BGEJJDKCGHB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_CTOR_OFFSET))(this);
		}

		::System::Boolean OLGMGLEOCEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_OLGMGLEOCEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfEnterNextDayHint*>* IFLDDKGGEIC()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfEnterNextDayHint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_IFLDDKGGEIC_OFFSET))(this);
		}

		::RPG::Client::ElfEnterNextDayHint* JKNCGLONGFO()
		{
			return ((::RPG::Client::ElfEnterNextDayHint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_JKNCGLONGFO_OFFSET))(this);
		}

		::RPG::Client::ElfEnterNextDayHint* NMELMFEELAD()
		{
			return ((::RPG::Client::ElfEnterNextDayHint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_NMELMFEELAD_OFFSET))(this);
		}

		::RPG::Client::ElfEnterNextDayHint* POIBIIOPLGG()
		{
			return ((::RPG::Client::ElfEnterNextDayHint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_POIBIIOPLGG_OFFSET))(this);
		}

		::RPG::Client::ElfEnterNextDayHint* BPPMDJJDCNH()
		{
			return ((::RPG::Client::ElfEnterNextDayHint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJJDKCGHB_BPPMDJJDCNH_OFFSET))(this);
		}

	};

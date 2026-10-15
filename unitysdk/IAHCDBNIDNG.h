#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIFFMGIAHL;
class KADBJJAOMGI;
class KOENIOPIGHK;
class NHPAANINLPK;
class NKLAFHFHELL;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAHCDBNIDNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0D420)
#define IAHCDBNIDNG_DCFAKMPMNFJ_OFFSET UNITYSDK_OFFSET(0x15E0D8D0)
#define IAHCDBNIDNG_DGHONILEANL_OFFSET UNITYSDK_OFFSET(0x15E0E380)
#define IAHCDBNIDNG_IFMOAJFEBDO_OFFSET UNITYSDK_OFFSET(0x15E0E290)
#define IAHCDBNIDNG_PENLOOKMGKI_OFFSET UNITYSDK_OFFSET(0x15E0DCA0)

inline static constexpr unsigned int IAHCDBNIDNG_TypeDefinitionIndex = 65568;

	class IAHCDBNIDNG : public ::System::Object
	{
	public:
		::KADBJJAOMGI* ODCAGDKPCEA; // 0x10
		::System::Collections::Generic::List_1<::NKLAFHFHELL*>* FDDMBDIOIOH; // 0x18
		::System::Collections::Generic::List_1<::KOENIOPIGHK*>* OOPCLGFHEJF; // 0x20
		// static const ::System::Object ANHOJHDGEDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHCDBNIDNG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* DCFAKMPMNFJ(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IAHCDBNIDNG_DCFAKMPMNFJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::PIHNNIFOPOC*>* PENLOOKMGKI(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::PIHNNIFOPOC*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean))((::PBYTE)hIl2Cpp + IAHCDBNIDNG_PENLOOKMGKI_OFFSET))(this, a1, a2);
		}

		::PIHNNIFOPOC* DGHONILEANL(::RPG::AvatarSystem::IAvatar* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::PIHNNIFOPOC*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + IAHCDBNIDNG_DGHONILEANL_OFFSET))(this, a1, a2);
		}

		::System::Int32 IFMOAJFEBDO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHCDBNIDNG_IFMOAJFEBDO_OFFSET))(this);
		}

	};

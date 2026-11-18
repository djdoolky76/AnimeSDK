#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJIKDMNECGN;
class EPGBGNCKKDE;
class FADNHLFCEIE;
class MAJDEJFBDCI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNLCKNENNCI_CGADHBLFOBJ_OFFSET UNITYSDK_OFFSET(0x13233E50)
#define FNLCKNENNCI_DKMHIEJHLDB_OFFSET UNITYSDK_OFFSET(0x13233C20)
#define FNLCKNENNCI_IIGELLCBGPM_OFFSET UNITYSDK_OFFSET(0x13233D20)
#define FNLCKNENNCI_JAEGIKGCLDN_OFFSET UNITYSDK_OFFSET(0x13233D80)
#define FNLCKNENNCI_KHAGLCMJDHG_OFFSET UNITYSDK_OFFSET(0x13233E10)
#define FNLCKNENNCI_NDEAFANEONA_OFFSET UNITYSDK_OFFSET(0x13233CE0)
#define FNLCKNENNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x13233BA0)

inline static constexpr unsigned int FNLCKNENNCI_TypeDefinitionIndex = 58252;

class FNLCKNENNCI : public ::System::Object
{
public:
	::EPGBGNCKKDE* BEHGLKJAONJ; // 0x10
	::System::Collections::Generic::List_1<::DJIKDMNECGN*>* GKKDKOFAFPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLCKNENNCI__CTOR_OFFSET))(this);
	}

	::System::Void DKMHIEJHLDB(::MAJDEJFBDCI* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MAJDEJFBDCI*))((::PBYTE)hIl2Cpp + FNLCKNENNCI_DKMHIEJHLDB_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::List_1<::DJIKDMNECGN*>* NDEAFANEONA()
	{
		return ((::System::Collections::Generic::List_1<::DJIKDMNECGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLCKNENNCI_NDEAFANEONA_OFFSET))(this);
	}

	::System::Boolean IIGELLCBGPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLCKNENNCI_IIGELLCBGPM_OFFSET))(this);
	}

	::System::Void JAEGIKGCLDN(::FADNHLFCEIE* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::FADNHLFCEIE*))((::PBYTE)hIl2Cpp + FNLCKNENNCI_JAEGIKGCLDN_OFFSET))(this, LJBPECKCCEA);
	}

	::EPGBGNCKKDE* KHAGLCMJDHG()
	{
		return ((::EPGBGNCKKDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLCKNENNCI_KHAGLCMJDHG_OFFSET))(this);
	}

	::System::Boolean CGADHBLFOBJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLCKNENNCI_CGADHBLFOBJ_OFFSET))(this);
	}
};

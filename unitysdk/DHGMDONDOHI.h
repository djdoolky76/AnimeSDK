#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBGOLOEGMP.h"
#include "unitysdk/LKGCKKEHADE.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/NOKBGPDHIHN.h"

class MLEGHKPPBBH;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHGMDONDOHI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E4E6A0)
#define DHGMDONDOHI_GKJKLLCHJDJ_OFFSET UNITYSDK_OFFSET(0x13E4E9E0)
#define DHGMDONDOHI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13E4E8B0)
#define DHGMDONDOHI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13E4E820)
#define DHGMDONDOHI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E4E540)
#define DHGMDONDOHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E4E6F0)
#define DHGMDONDOHI__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4E770)

inline static constexpr unsigned int DHGMDONDOHI_TypeDefinitionIndex = 43782;

class DHGMDONDOHI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB5; // 0x0
	::MoleMole::Battle::Entity* OONCJFIKFFM; // 0x48
	::System::Collections::Generic::List_1<::MLEGHKPPBBH*>* IBOPJMFEHLJ; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* JODELKCMMJN; // 0x58
	::MoleMole::Battle::Entity* NNCBMOALDBI; // 0x60
	::NOKBGPDHIHN GDCBDLNANNB; // 0x68
	::System::Boolean JHADLOMHJAL; // 0x6C
	::System::Boolean JJAEDPDEHEJ; // 0x6D
	::System::Byte _padding0[0x2];
	::KFBGOLOEGMP OCOJFKMOKMK; // 0x70
	::System::Single JBMGONACMLF; // 0x74
	::System::Single CPPHLHMBEMO; // 0x78
	::System::Boolean CGMJIEBJHCO; // 0x7C
	::System::Boolean BPONAJFEEDE; // 0x7D
	::System::Boolean IHFCMKMMMPP; // 0x7E
	::System::Boolean OLDFDKBLEKL; // 0x7F
	::LKGCKKEHADE PLANAKOLPLK; // 0x80
	::System::Boolean LJGAIDDPHGH; // 0x84
	::System::Boolean CMOHPICLMNM; // 0x85
	::System::Boolean PBHPPEHPJBK; // 0x86
	::System::Byte _padding1[0x1];
	::System::Int32 NEJOGLIDIFK; // 0x88

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGMDONDOHI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGMDONDOHI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGMDONDOHI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGMDONDOHI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGMDONDOHI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::DHGMDONDOHI* JFDOOELFAOA()
	{
		return ((::DHGMDONDOHI*(*)())((::PBYTE)hIl2Cpp + DHGMDONDOHI_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GKJKLLCHJDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGMDONDOHI_GKJKLLCHJDJ_OFFSET))(this);
	}
};

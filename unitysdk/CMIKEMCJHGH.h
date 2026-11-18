#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMIKEMCJHGH_OELADBPLLEM_OFFSET UNITYSDK_OFFSET(0x19717B00)
#define CMIKEMCJHGH_PFAAKOBCPJL_OFFSET UNITYSDK_OFFSET(0x19717840)
#define CMIKEMCJHGH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x197179D0)
#define CMIKEMCJHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x19717830)

inline static constexpr unsigned int CMIKEMCJHGH_TypeDefinitionIndex = 79690;

class CMIKEMCJHGH : public ::System::Object
{
public:
	static ::CMIKEMCJHGH** StaticGet_PMKINFHDLFD()
	{
		return (::CMIKEMCJHGH**)Il2CppClass::FromTypeDefinitionIndex(CMIKEMCJHGH_TypeDefinitionIndex)->GetStaticField(0x4CD10);
	}
	// static const ::System::UInt16 CGICCOBHACH = 0x0; // 0x0
	// static const ::System::UInt16 HPHODBCBOPL = 0x1; // 0x0
	// static const ::System::UInt16 CMMFJKNFPKM = 0x2; // 0x0
	// static const ::System::UInt16 FJMBADHAOHG = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Type*>* JAEDIDCIGFM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>* IEFNIPOGLBE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEMCJHGH__CTOR_OFFSET))(this);
	}

	::System::Void PFAAKOBCPJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEMCJHGH_PFAAKOBCPJL_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIKEMCJHGH_PHOADBJGFBE_OFFSET))(this);
	}

	static ::CMIKEMCJHGH* OELADBPLLEM()
	{
		return ((::CMIKEMCJHGH*(*)())((::PBYTE)hIl2Cpp + CMIKEMCJHGH_OELADBPLLEM_OFFSET))();
	}
};

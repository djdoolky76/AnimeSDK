#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }

#define GMCPAFDJNLH_BKNNOEHHBGH_OFFSET UNITYSDK_OFFSET(0x125E5300)
#define GMCPAFDJNLH_BNEIJDHADMK_OFFSET UNITYSDK_OFFSET(0x125E5470)
#define GMCPAFDJNLH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x125E54E0)
#define GMCPAFDJNLH_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x125E53C0)
#define GMCPAFDJNLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x125E5260)
#define GMCPAFDJNLH__CTOR_OFFSET UNITYSDK_OFFSET(0x125E5250)

inline static constexpr unsigned int GMCPAFDJNLH_TypeDefinitionIndex = 69467;

class GMCPAFDJNLH : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::GMCPAFDJNLH*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::GMCPAFDJNLH*>**)Il2CppClass::FromTypeDefinitionIndex(GMCPAFDJNLH_TypeDefinitionIndex)->GetStaticField(0x4E500);
	}
	::System::String* IIFMGICGIDA; // 0x10
	::System::String* KBMPLDNADEB; // 0x18
	::LIBOIKJGAIH EIEOJFEPMAB; // 0x20
	::System::Int32 KMOHKCADPNA; // 0x30
	::UnityEngine::Vector3 GADABMPMNEM; // 0x34
	::System::Boolean IPJBEHGOEFL; // 0x40
	::System::Boolean JNBDMPNPPEG; // 0x41
	::System::Boolean IIMLHCDLPJB; // 0x42
	::System::Boolean KEHFKCDKHPB; // 0x43

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCPAFDJNLH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMCPAFDJNLH__CCTOR_OFFSET))();
	}

	::System::Void BKNNOEHHBGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCPAFDJNLH_BKNNOEHHBGH_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCPAFDJNLH_JJEJHGOJOII_OFFSET))(this);
	}

	static ::GMCPAFDJNLH* BNEIJDHADMK()
	{
		return ((::GMCPAFDJNLH*(*)())((::PBYTE)hIl2Cpp + GMCPAFDJNLH_BNEIJDHADMK_OFFSET))();
	}

	static ::GMCPAFDJNLH* COKNIICCODC(::System::Boolean KEHFKCDKHPB)
	{
		return ((::GMCPAFDJNLH*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + GMCPAFDJNLH_COKNIICCODC_OFFSET))(KEHFKCDKHPB);
	}
};

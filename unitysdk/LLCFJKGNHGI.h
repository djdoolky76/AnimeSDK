#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHBCCGMCFC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLCFJKGNHGI_JELPPJFEIAC_OFFSET UNITYSDK_OFFSET(0x1D9C0CE0)
#define LLCFJKGNHGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9C0E90)
#define LLCFJKGNHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C0E80)

inline static constexpr unsigned int LLCFJKGNHGI_TypeDefinitionIndex = 93350;

class LLCFJKGNHGI : public ::System::Object
{
public:
	static ::LLCFJKGNHGI** StaticGet_NJLLMPCDOEB()
	{
		return (::LLCFJKGNHGI**)Il2CppClass::FromTypeDefinitionIndex(LLCFJKGNHGI_TypeDefinitionIndex)->GetStaticField(0x52550);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* LEFCKNFDGBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCFJKGNHGI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCFJKGNHGI__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* JELPPJFEIAC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCFJKGNHGI_JELPPJFEIAC_OFFSET))(this);
	}
};

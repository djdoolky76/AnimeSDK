#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKHBCCGMCFC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBHHPCFMAKB_JELPPJFEIAC_OFFSET UNITYSDK_OFFSET(0x15CD07B0)
#define GBHHPCFMAKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CD0910)
#define GBHHPCFMAKB__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD0900)

inline static constexpr unsigned int GBHHPCFMAKB_TypeDefinitionIndex = 85123;

class GBHHPCFMAKB : public ::System::Object
{
public:
	static ::GBHHPCFMAKB** StaticGet_NJLLMPCDOEB()
	{
		return (::GBHHPCFMAKB**)Il2CppClass::FromTypeDefinitionIndex(GBHHPCFMAKB_TypeDefinitionIndex)->GetStaticField(0x4F4D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* LEFCKNFDGBG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHHPCFMAKB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHHPCFMAKB__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>* JELPPJFEIAC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::AKHBCCGMCFC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHHPCFMAKB_JELPPJFEIAC_OFFSET))(this);
	}
};

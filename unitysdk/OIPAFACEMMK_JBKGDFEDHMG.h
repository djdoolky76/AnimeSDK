#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class INBCNFOEDGH;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define OIPAFACEMMK_JBKGDFEDHMG_DLGHJJBMMED_OFFSET UNITYSDK_OFFSET(0xFD8A850)
#define OIPAFACEMMK_JBKGDFEDHMG_HGPCADAGJHB_OFFSET UNITYSDK_OFFSET(0xFD8A7A0)
#define OIPAFACEMMK_JBKGDFEDHMG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8A790)

inline static constexpr unsigned int OIPAFACEMMK_JBKGDFEDHMG_TypeDefinitionIndex = 40849;

class OIPAFACEMMK_JBKGDFEDHMG : public ::System::Object
{
public:
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::INBCNFOEDGH*>* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_JBKGDFEDHMG__CTOR_OFFSET))(this);
	}

	::System::Void HGPCADAGJHB(::INBCNFOEDGH* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::INBCNFOEDGH*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_JBKGDFEDHMG_HGPCADAGJHB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DLGHJJBMMED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_JBKGDFEDHMG_DLGHJJBMMED_OFFSET))(this);
	}
};

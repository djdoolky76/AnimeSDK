#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LLLNCCPNOGA_CGBFBFBMMLE.h"
#include "unitysdk/System/Object.h"

class BDAGGNNDKIL;
class DLPBHONHLDF;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLLNCCPNOGA_PPMOABCMBPJ_ADKJOJAGMCA_OFFSET UNITYSDK_OFFSET(0x12D3B180)
#define LLLNCCPNOGA_PPMOABCMBPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3B080)

inline static constexpr unsigned int LLLNCCPNOGA_PPMOABCMBPJ_TypeDefinitionIndex = 63642;

class LLLNCCPNOGA_PPMOABCMBPJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DOOPJKNBKLE; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* DHOHCEPDPFC; // 0x18
	::DLPBHONHLDF* HOFHBACNHOE; // 0x20
	::BDAGGNNDKIL* MOBNJGNENPH; // 0x28
	::Foundation::ViewObject::ViewObjectHandle PHHOGDLABNP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* JEEEFHEOGED; // 0x40
	::LLLNCCPNOGA_CGBFBFBMMLE CCHFLKAKOMO; // 0x48
	::System::Int32 KOMCHMAIGIL; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_PPMOABCMBPJ__CTOR_OFFSET))(this);
	}

	::System::Void ADKJOJAGMCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_PPMOABCMBPJ_ADKJOJAGMCA_OFFSET))(this);
	}
};

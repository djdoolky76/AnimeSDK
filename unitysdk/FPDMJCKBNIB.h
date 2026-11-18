#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPDMJCKBNIB_CIODDJKMJPC_OFFSET UNITYSDK_OFFSET(0x125B9520)
#define FPDMJCKBNIB_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x125B9450)
#define FPDMJCKBNIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x125B9390)

inline static constexpr unsigned int FPDMJCKBNIB_TypeDefinitionIndex = 76415;

class FPDMJCKBNIB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet_GIIDONKLKJF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FPDMJCKBNIB_TypeDefinitionIndex)->GetStaticField(0x4E480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDMJCKBNIB__CCTOR_OFFSET))();
	}

	static ::System::Void IBBLCAOMCKF(::System::Int32 COMDNFILAIC, ::System::Int32 BNLHPGHLKDK, ::System::Int32 CMJLFAIMHLE)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FPDMJCKBNIB_IBBLCAOMCKF_OFFSET))(COMDNFILAIC, BNLHPGHLKDK, CMJLFAIMHLE);
	}

	static ::System::Void CIODDJKMJPC(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FPDMJCKBNIB_CIODDJKMJPC_OFFSET))(COMDNFILAIC);
	}
};

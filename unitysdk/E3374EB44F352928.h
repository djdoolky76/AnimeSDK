#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E1B3077A797CC3A5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E3374EB44F352928_BB1EA88F6C7A18E3_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E3374EB44F352928_E9153515BE97B958_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E3374EB44F352928_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E3374EB44F352928_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2747330)
#define E3374EB44F352928__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3374EB44F352928_TypeDefinitionIndex = 3036;

class E3374EB44F352928 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1B3077A797CC3A5*>* E697ED4F08AF3D7F; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3374EB44F352928__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E3374EB44F352928*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E3374EB44F352928*&))((::PBYTE)hIl2Cpp + E3374EB44F352928_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1B3077A797CC3A5*>* E9153515BE97B958()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1B3077A797CC3A5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E3374EB44F352928_E9153515BE97B958_OFFSET))(this);
	}

	::System::Void BB1EA88F6C7A18E3(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1B3077A797CC3A5*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E1B3077A797CC3A5*>*))((::PBYTE)hIl2Cpp + E3374EB44F352928_BB1EA88F6C7A18E3_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E1B3077A797CC3A5* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E1B3077A797CC3A5*))((::PBYTE)hIl2Cpp + E3374EB44F352928_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};

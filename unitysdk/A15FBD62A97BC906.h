#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E4CF5132312BCA50;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A15FBD62A97BC906_E66526315634F1E8_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A15FBD62A97BC906_F1B2F7ED6BA74FCF_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A15FBD62A97BC906_FB461AE34A1D2FF9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A15FBD62A97BC906_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D53F0)
#define A15FBD62A97BC906__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A15FBD62A97BC906_TypeDefinitionIndex = 5585;

class A15FBD62A97BC906 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E4CF5132312BCA50*>* E62500191068DF21; // 0x10

	static ::System::UInt32 F1B2F7ED6BA74FCF(::E4CF5132312BCA50* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E4CF5132312BCA50*))((::PBYTE)hIl2Cpp + A15FBD62A97BC906_F1B2F7ED6BA74FCF_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A15FBD62A97BC906*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A15FBD62A97BC906*&))((::PBYTE)hIl2Cpp + A15FBD62A97BC906_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A15FBD62A97BC906__CTOR_OFFSET))(this);
	}

	::System::Void E66526315634F1E8(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E4CF5132312BCA50*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E4CF5132312BCA50*>*))((::PBYTE)hIl2Cpp + A15FBD62A97BC906_E66526315634F1E8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E4CF5132312BCA50*>* FB461AE34A1D2FF9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E4CF5132312BCA50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A15FBD62A97BC906_FB461AE34A1D2FF9_OFFSET))(this);
	}
};

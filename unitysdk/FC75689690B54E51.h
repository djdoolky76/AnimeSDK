#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B42BCF547000E5CF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FC75689690B54E51_B0312FAFE84B0127_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FC75689690B54E51_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FC75689690B54E51_F11B447AAE71097D_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FC75689690B54E51_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2453270)
#define FC75689690B54E51__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC75689690B54E51_TypeDefinitionIndex = 2415;

class FC75689690B54E51 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B42BCF547000E5CF*>* E51D89004E724589; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B42BCF547000E5CF*>* F11B447AAE71097D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B42BCF547000E5CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC75689690B54E51_F11B447AAE71097D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC75689690B54E51__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::B42BCF547000E5CF* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B42BCF547000E5CF*))((::PBYTE)hIl2Cpp + FC75689690B54E51_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FC75689690B54E51*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FC75689690B54E51*&))((::PBYTE)hIl2Cpp + FC75689690B54E51_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B0312FAFE84B0127(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B42BCF547000E5CF*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B42BCF547000E5CF*>*))((::PBYTE)hIl2Cpp + FC75689690B54E51_B0312FAFE84B0127_OFFSET))(this, E937D4885DAA1AE8);
	}
};

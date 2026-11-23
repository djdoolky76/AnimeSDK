#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BD1D3EE65E785F8F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACB8AA3A22B2A27F_B88F01F3015A0206_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ACB8AA3A22B2A27F_E66A2244C879EB49_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ACB8AA3A22B2A27F_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define ACB8AA3A22B2A27F_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x269E5D0)
#define ACB8AA3A22B2A27F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ACB8AA3A22B2A27F_TypeDefinitionIndex = 6559;

class ACB8AA3A22B2A27F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BD1D3EE65E785F8F*>* EBA4FE79A37049FD; // 0x10

	::System::Void E66A2244C879EB49(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BD1D3EE65E785F8F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BD1D3EE65E785F8F*>*))((::PBYTE)hIl2Cpp + ACB8AA3A22B2A27F_E66A2244C879EB49_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BD1D3EE65E785F8F*>* B88F01F3015A0206()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BD1D3EE65E785F8F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACB8AA3A22B2A27F_B88F01F3015A0206_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::BD1D3EE65E785F8F* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::BD1D3EE65E785F8F*))((::PBYTE)hIl2Cpp + ACB8AA3A22B2A27F_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ACB8AA3A22B2A27F*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ACB8AA3A22B2A27F*&))((::PBYTE)hIl2Cpp + ACB8AA3A22B2A27F_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACB8AA3A22B2A27F__CTOR_OFFSET))(this);
	}
};

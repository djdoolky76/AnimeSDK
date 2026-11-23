#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A8EB745DA234C3CC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F5D4B988AE7BA074_AC37510B269432CA_OFFSET UNITYSDK_OFFSET(0x2652B60)
#define F5D4B988AE7BA074_B1E223B53EDC3F96_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F5D4B988AE7BA074_B2C8D9EAAE3409F0_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F5D4B988AE7BA074_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2652B80)
#define F5D4B988AE7BA074__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5D4B988AE7BA074_TypeDefinitionIndex = 6127;

class F5D4B988AE7BA074 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::A8EB745DA234C3CC*>* A4E61133B6D3D14A; // 0x10

	static ::System::String* AC37510B269432CA(::A8EB745DA234C3CC* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::A8EB745DA234C3CC*))((::PBYTE)hIl2Cpp + F5D4B988AE7BA074_AC37510B269432CA_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F5D4B988AE7BA074*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F5D4B988AE7BA074*&))((::PBYTE)hIl2Cpp + F5D4B988AE7BA074_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::A8EB745DA234C3CC*>* B1E223B53EDC3F96()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::A8EB745DA234C3CC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D4B988AE7BA074_B1E223B53EDC3F96_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D4B988AE7BA074__CTOR_OFFSET))(this);
	}

	::System::Void B2C8D9EAAE3409F0(::System::Collections::Generic::Dictionary_2<::System::String*, ::A8EB745DA234C3CC*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::A8EB745DA234C3CC*>*))((::PBYTE)hIl2Cpp + F5D4B988AE7BA074_B2C8D9EAAE3409F0_OFFSET))(this, E937D4885DAA1AE8);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B345278A14C57E19;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E2B1C934D7206218_B02DB708840BD331_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E2B1C934D7206218_E16B612164DBB75C_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define E2B1C934D7206218_E2F06C618F3643EA_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define E2B1C934D7206218_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26222C0)
#define E2B1C934D7206218_FD6CB5C29A4080EB_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E2B1C934D7206218__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2B1C934D7206218_TypeDefinitionIndex = 5902;

class E2B1C934D7206218 : public ::System::Object
{
public:
	::System::Int32 E3B65F0DAFA73D05; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::B345278A14C57E19*>* F321D9E2323B9C19; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E2B1C934D7206218*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E2B1C934D7206218*&))((::PBYTE)hIl2Cpp + E2B1C934D7206218_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2B1C934D7206218__CTOR_OFFSET))(this);
	}

	::System::Void FD6CB5C29A4080EB(::System::Collections::Generic::Dictionary_2<::System::Int32, ::B345278A14C57E19*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::B345278A14C57E19*>*))((::PBYTE)hIl2Cpp + E2B1C934D7206218_FD6CB5C29A4080EB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::B345278A14C57E19*>* B02DB708840BD331()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::B345278A14C57E19*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E2B1C934D7206218_B02DB708840BD331_OFFSET))(this);
	}

	::System::Void E2F06C618F3643EA(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E2B1C934D7206218_E2F06C618F3643EA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 E16B612164DBB75C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + E2B1C934D7206218_E16B612164DBB75C_OFFSET))(this);
	}
};

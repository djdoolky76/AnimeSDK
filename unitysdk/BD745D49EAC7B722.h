#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F9F9044C21CDCC53;
class FD4E3FCC423C73AE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BD745D49EAC7B722_A7DEAC1A7F82DCAF_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BD745D49EAC7B722_AB8CD67D55AB594B_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define BD745D49EAC7B722_B71B8E44B9714FE5_OFFSET UNITYSDK_OFFSET(0x17D6430)
#define BD745D49EAC7B722_EB625568E7FCF400_OFFSET UNITYSDK_OFFSET(0x23255F0)
#define BD745D49EAC7B722_F0BD27609089BAB6_OFFSET UNITYSDK_OFFSET(0x16B0640)
#define BD745D49EAC7B722_F119745DAD189AA7_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define BD745D49EAC7B722_F1FA1D99C1D9839D_OFFSET UNITYSDK_OFFSET(0x1B0A930)
#define BD745D49EAC7B722_F22C646F83FEFE10_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BD745D49EAC7B722_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26A1540)
#define BD745D49EAC7B722__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BD745D49EAC7B722_TypeDefinitionIndex = 6519;

class BD745D49EAC7B722 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::FD4E3FCC423C73AE*>* F74BCC2B62F43C10; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::F9F9044C21CDCC53*>* E512F8E5D1876165; // 0x18
	::System::Single F163DA8BFEC6BF4C; // 0x20
	::System::Int32 B630C88365A5963C; // 0x24

	::System::Single F1FA1D99C1D9839D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_F1FA1D99C1D9839D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::F9F9044C21CDCC53*>* AB8CD67D55AB594B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::F9F9044C21CDCC53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_AB8CD67D55AB594B_OFFSET))(this);
	}

	::System::Void F22C646F83FEFE10(::System::Collections::Generic::Dictionary_2<::System::String*, ::FD4E3FCC423C73AE*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FD4E3FCC423C73AE*>*))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_F22C646F83FEFE10_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void B71B8E44B9714FE5(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_B71B8E44B9714FE5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD745D49EAC7B722__CTOR_OFFSET))(this);
	}

	::System::Int32 F0BD27609089BAB6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_F0BD27609089BAB6_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BD745D49EAC7B722*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BD745D49EAC7B722*&))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::FD4E3FCC423C73AE*>* A7DEAC1A7F82DCAF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FD4E3FCC423C73AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_A7DEAC1A7F82DCAF_OFFSET))(this);
	}

	::System::Void EB625568E7FCF400(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_EB625568E7FCF400_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F119745DAD189AA7(::System::Collections::Generic::Dictionary_2<::System::Int32, ::F9F9044C21CDCC53*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::F9F9044C21CDCC53*>*))((::PBYTE)hIl2Cpp + BD745D49EAC7B722_F119745DAD189AA7_OFFSET))(this, E937D4885DAA1AE8);
	}
};

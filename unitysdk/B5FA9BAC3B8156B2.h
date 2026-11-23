#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1E42D2EDEE263D0.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B5FA9BAC3B8156B2_A2CC6B0ABDBFA19B_OFFSET UNITYSDK_OFFSET(0x3A89720)
#define B5FA9BAC3B8156B2_B288008B63EE37A2_OFFSET UNITYSDK_OFFSET(0x2C7C570)
#define B5FA9BAC3B8156B2_B53A74FFC46F8F96_OFFSET UNITYSDK_OFFSET(0x3A899B0)
#define B5FA9BAC3B8156B2_E02871F71EC4CE69_OFFSET UNITYSDK_OFFSET(0x3A8AD50)
#define B5FA9BAC3B8156B2_E5B2640FD28894F2_OFFSET UNITYSDK_OFFSET(0x3A8B6A0)
#define B5FA9BAC3B8156B2_E73CFC0D9B7FEA06_OFFSET UNITYSDK_OFFSET(0x3A8B3A0)
#define B5FA9BAC3B8156B2_EDE8B452C53376B2_OFFSET UNITYSDK_OFFSET(0x3A89BB0)
#define B5FA9BAC3B8156B2_F5E381587395BEE7_OFFSET UNITYSDK_OFFSET(0x3A89940)
#define B5FA9BAC3B8156B2_FB8E25EB8211BF2B_OFFSET UNITYSDK_OFFSET(0x3A8AE30)
#define B5FA9BAC3B8156B2_FC29D8BD19FA42E1_OFFSET UNITYSDK_OFFSET(0x3A898E0)
#define B5FA9BAC3B8156B2__CTOR_OFFSET UNITYSDK_OFFSET(0x3A8B810)

inline static constexpr unsigned int B5FA9BAC3B8156B2_TypeDefinitionIndex = 12016;

class B5FA9BAC3B8156B2 : public ::A1E42D2EDEE263D0
{
public:
	::System::Collections::Generic::List_1<::System::String*>* BFEC27FE91E436EA; // 0x50

	::System::Void EDE8B452C53376B2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_EDE8B452C53376B2_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Boolean F5E381587395BEE7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_F5E381587395BEE7_OFFSET))(this);
	}

	::System::Void E02871F71EC4CE69(::System::String* B960AC235824C6C8, ::System::Action* F8668871271D968A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_E02871F71EC4CE69_OFFSET))(this, B960AC235824C6C8, F8668871271D968A);
	}

	::System::Void E5B2640FD28894F2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_E5B2640FD28894F2_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::String* FC29D8BD19FA42E1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_FC29D8BD19FA42E1_OFFSET))(this);
	}

	::System::Void B53A74FFC46F8F96(::System::String* B6018BB9F7294B44, ::System::Int32 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_B53A74FFC46F8F96_OFFSET))(this, B6018BB9F7294B44, B714679C324FF96E);
	}

	::System::Void FB8E25EB8211BF2B(::System::String* BD2C65BCCC92F212)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_FB8E25EB8211BF2B_OFFSET))(this, BD2C65BCCC92F212);
	}

	::System::Void A2CC6B0ABDBFA19B(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Boolean A1671803299F2F51)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_A2CC6B0ABDBFA19B_OFFSET))(this, E04D2BE64FCE9814, A1671803299F2F51);
	}

	::System::Void E73CFC0D9B7FEA06(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_E73CFC0D9B7FEA06_OFFSET))(this, F1BF0FE85E9DD584);
	}

	::System::Int32 B288008B63EE37A2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_B288008B63EE37A2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2__CTOR_OFFSET))(this);
	}
};

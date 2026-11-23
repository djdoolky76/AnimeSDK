#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1E42D2EDEE263D0.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A99E611D68D1D7A4_A2CC6B0ABDBFA19B_OFFSET UNITYSDK_OFFSET(0x3A56800)
#define A99E611D68D1D7A4_B288008B63EE37A2_OFFSET UNITYSDK_OFFSET(0x2C7C590)
#define A99E611D68D1D7A4_B53A74FFC46F8F96_OFFSET UNITYSDK_OFFSET(0x3A56AB0)
#define A99E611D68D1D7A4_E02871F71EC4CE69_OFFSET UNITYSDK_OFFSET(0x3A57E20)
#define A99E611D68D1D7A4_EDE8B452C53376B2_OFFSET UNITYSDK_OFFSET(0x3A56CE0)
#define A99E611D68D1D7A4_F5E381587395BEE7_OFFSET UNITYSDK_OFFSET(0x3A56A40)
#define A99E611D68D1D7A4_FC29D8BD19FA42E1_OFFSET UNITYSDK_OFFSET(0x3A569F0)
#define A99E611D68D1D7A4__CTOR_OFFSET UNITYSDK_OFFSET(0x3A57F00)

inline static constexpr unsigned int A99E611D68D1D7A4_TypeDefinitionIndex = 12988;

class A99E611D68D1D7A4 : public ::A1E42D2EDEE263D0
{
public:
	::System::String* FC29D8BD19FA42E1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_FC29D8BD19FA42E1_OFFSET))(this);
	}

	::System::Void B53A74FFC46F8F96(::System::String* B6018BB9F7294B44, ::System::Int32 B714679C324FF96E)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_B53A74FFC46F8F96_OFFSET))(this, B6018BB9F7294B44, B714679C324FF96E);
	}

	::System::Void A2CC6B0ABDBFA19B(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::Boolean A1671803299F2F51)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_A2CC6B0ABDBFA19B_OFFSET))(this, E04D2BE64FCE9814, A1671803299F2F51);
	}

	::System::Void E02871F71EC4CE69(::System::String* B960AC235824C6C8, ::System::Action* F8668871271D968A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_E02871F71EC4CE69_OFFSET))(this, B960AC235824C6C8, F8668871271D968A);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4__CTOR_OFFSET))(this);
	}

	::System::Int32 B288008B63EE37A2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_B288008B63EE37A2_OFFSET))(this);
	}

	::System::Void EDE8B452C53376B2(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_EDE8B452C53376B2_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Boolean F5E381587395BEE7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_F5E381587395BEE7_OFFSET))(this);
	}
};

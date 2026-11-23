#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FC68F82CE416CD4B_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x1EC8FD0)
#define FC68F82CE416CD4B_A78DC67E5C908129_OFFSET UNITYSDK_OFFSET(0x1EC8E40)
#define FC68F82CE416CD4B_ADF00B9DAA56FACA_OFFSET UNITYSDK_OFFSET(0x1EC9450)
#define FC68F82CE416CD4B_B3F7EC308224F9D2_OFFSET UNITYSDK_OFFSET(0x1EC92E0)
#define FC68F82CE416CD4B_BCAF8C3098A6A910_OFFSET UNITYSDK_OFFSET(0x1EC9170)

inline static constexpr unsigned int FC68F82CE416CD4B_TypeDefinitionIndex = 7332;

class FC68F82CE416CD4B : public ::System::Object
{
public:
	static ::System::Void A78DC67E5C908129()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC68F82CE416CD4B_A78DC67E5C908129_OFFSET))();
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC68F82CE416CD4B_A1E97155B145443C_OFFSET))();
	}

	static ::System::Void BCAF8C3098A6A910(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Byte>* E0C0689B1CEBE48C)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FC68F82CE416CD4B_BCAF8C3098A6A910_OFFSET))(F79B4D487F303AB2, E0C0689B1CEBE48C);
	}

	static ::System::Void B3F7EC308224F9D2(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Byte>* E0C0689B1CEBE48C)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FC68F82CE416CD4B_B3F7EC308224F9D2_OFFSET))(F79B4D487F303AB2, E0C0689B1CEBE48C);
	}

	static ::System::Void ADF00B9DAA56FACA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC68F82CE416CD4B_ADF00B9DAA56FACA_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeEventModel; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FCECB52A00C1344E;

#define E62DDC200756A569_A03268FFD1CD14EE_OFFSET UNITYSDK_OFFSET(0x3A22A50)
#define E62DDC200756A569_A0773A17413F3BB2_OFFSET UNITYSDK_OFFSET(0x3A22BC0)
#define E62DDC200756A569_A3D4534D6CDA4D77_OFFSET UNITYSDK_OFFSET(0x3A22E30)
#define E62DDC200756A569_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3A227C0)
#define E62DDC200756A569_B858CACCAECFDF3A_OFFSET UNITYSDK_OFFSET(0x3A232F0)
#define E62DDC200756A569_BE8DF0E2527B5F44_OFFSET UNITYSDK_OFFSET(0x3A22C60)
#define E62DDC200756A569_BF6D50A8E30571FB_OFFSET UNITYSDK_OFFSET(0x3A22500)
#define E62DDC200756A569_BFE550A23F3B7432_OFFSET UNITYSDK_OFFSET(0x3A22990)
#define E62DDC200756A569_E01A9988761280AF_OFFSET UNITYSDK_OFFSET(0x3A22720)
#define E62DDC200756A569_E0994D917D1E6792_OFFSET UNITYSDK_OFFSET(0x3A222D0)
#define E62DDC200756A569_EEFDB251FD615759_OFFSET UNITYSDK_OFFSET(0x3A23090)
#define E62DDC200756A569_F282D0431A762C7A_OFFSET UNITYSDK_OFFSET(0x3A22B60)
#define E62DDC200756A569_F344EF81187682EF_OFFSET UNITYSDK_OFFSET(0x3A22DD0)
#define E62DDC200756A569__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A233F0)
#define E62DDC200756A569__CTOR_OFFSET UNITYSDK_OFFSET(0x3A23440)

inline static constexpr unsigned int E62DDC200756A569_TypeDefinitionIndex = 12877;

class E62DDC200756A569 : public ::System::Object
{
public:
	static ::E62DDC200756A569** StaticGet_E0E7A5F93551109B()
	{
		return (::E62DDC200756A569**)Il2CppClass::FromTypeDefinitionIndex(E62DDC200756A569_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::FCECB52A00C1344E<::System::String*>* B8EF9BDD929B5E89; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* F6647AD135EF0926; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* A345A0BD519FA81C; // 0x20
	::System::Boolean A026D86DBB949DA8; // 0x28

	static ::E62DDC200756A569* A68C7B7988A81FDD()
	{
		return ((::E62DDC200756A569*(*)())((::PBYTE)hIl2Cpp + E62DDC200756A569_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void E0994D917D1E6792(::System::String* B26FB45137C102C9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E62DDC200756A569_E0994D917D1E6792_OFFSET))(this, B26FB45137C102C9);
	}

	::System::Void E01A9988761280AF(::System::String* B26FB45137C102C9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E62DDC200756A569_E01A9988761280AF_OFFSET))(this, B26FB45137C102C9);
	}

	::System::Void A3D4534D6CDA4D77(::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* AF709860C1B7582C)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + E62DDC200756A569_A3D4534D6CDA4D77_OFFSET))(this, AF709860C1B7582C);
	}

	::System::Boolean BFE550A23F3B7432(::System::String* B26FB45137C102C9)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E62DDC200756A569_BFE550A23F3B7432_OFFSET))(this, B26FB45137C102C9);
	}

	::System::Void B858CACCAECFDF3A(::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* AF709860C1B7582C)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*))((::PBYTE)hIl2Cpp + E62DDC200756A569_B858CACCAECFDF3A_OFFSET))(this, AF709860C1B7582C);
	}

	::System::Void F282D0431A762C7A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E62DDC200756A569_F282D0431A762C7A_OFFSET))(this);
	}

	::System::Boolean A0773A17413F3BB2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E62DDC200756A569_A0773A17413F3BB2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E62DDC200756A569__CTOR_OFFSET))(this);
	}

	::System::Void BF6D50A8E30571FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E62DDC200756A569_BF6D50A8E30571FB_OFFSET))(this);
	}

	::System::Void EEFDB251FD615759(::System::String* EF7C9F47C930BAD6, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel* AF709860C1B7582C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::PluginUI::PluginUIBridgeEventModel*))((::PBYTE)hIl2Cpp + E62DDC200756A569_EEFDB251FD615759_OFFSET))(this, EF7C9F47C930BAD6, AF709860C1B7582C);
	}

	::System::Void F344EF81187682EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E62DDC200756A569_F344EF81187682EF_OFFSET))(this);
	}

	::System::Boolean A03268FFD1CD14EE(::System::String* B26FB45137C102C9)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E62DDC200756A569_A03268FFD1CD14EE_OFFSET))(this, B26FB45137C102C9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E62DDC200756A569__CCTOR_OFFSET))();
	}

	::System::Void BE8DF0E2527B5F44(::System::String* B845D473740A6B03)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E62DDC200756A569_BE8DF0E2527B5F44_OFFSET))(this, B845D473740A6B03);
	}
};

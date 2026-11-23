#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeElement; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A8DE0169DBF0981F_A479600816E2C3C1_OFFSET UNITYSDK_OFFSET(0x3A3BDF0)
#define A8DE0169DBF0981F_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3A3B650)
#define A8DE0169DBF0981F_A85DEDD90518960D_OFFSET UNITYSDK_OFFSET(0x3A3BB20)
#define A8DE0169DBF0981F_AE17D63AC52A5BFB_OFFSET UNITYSDK_OFFSET(0x3A3B530)
#define A8DE0169DBF0981F_B1DF2053B8AE7D03_OFFSET UNITYSDK_OFFSET(0x3A3BB40)
#define A8DE0169DBF0981F_B46C01E30FE4EBC8_OFFSET UNITYSDK_OFFSET(0x3A3BB60)
#define A8DE0169DBF0981F_B75355883821D169_OFFSET UNITYSDK_OFFSET(0x3A3B8A0)
#define A8DE0169DBF0981F_BBAC1A25D6784785_OFFSET UNITYSDK_OFFSET(0x3A3B720)
#define A8DE0169DBF0981F_EA9891A405341168_OFFSET UNITYSDK_OFFSET(0x3A3BEA0)
#define A8DE0169DBF0981F_F4D261949C2ED46D_OFFSET UNITYSDK_OFFSET(0x3A3B990)
#define A8DE0169DBF0981F__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A3C080)
#define A8DE0169DBF0981F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8DE0169DBF0981F_TypeDefinitionIndex = 12937;

class A8DE0169DBF0981F : public ::System::Object
{
public:
	static ::A8DE0169DBF0981F** StaticGet_E0E7A5F93551109B()
	{
		return (::A8DE0169DBF0981F**)Il2CppClass::FromTypeDefinitionIndex(A8DE0169DBF0981F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void B1DF2053B8AE7D03(::System::String* B26FB45137C102C9, ::System::Collections::Generic::List_1<::System::String*>* A2A8C7A35AEA7A1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_B1DF2053B8AE7D03_OFFSET))(this, B26FB45137C102C9, A2A8C7A35AEA7A1F);
	}

	::System::Void EA9891A405341168(::System::String* B26FB45137C102C9, ::System::String* EF11C18C8216A86E, ::System::String* EF40C79919409CDF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_EA9891A405341168_OFFSET))(this, B26FB45137C102C9, EF11C18C8216A86E, EF40C79919409CDF);
	}

	::System::Void A479600816E2C3C1(::System::String* B26FB45137C102C9, ::System::String* BAB513B6349CE104)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_A479600816E2C3C1_OFFSET))(this, B26FB45137C102C9, BAB513B6349CE104);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8DE0169DBF0981F__CCTOR_OFFSET))();
	}

	::System::Void F4D261949C2ED46D(::System::Action_1<::System::String*>* E04D2BE64FCE9814, ::System::String* B26FB45137C102C9, ::System::String* BAB513B6349CE104)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_F4D261949C2ED46D_OFFSET))(this, E04D2BE64FCE9814, B26FB45137C102C9, BAB513B6349CE104);
	}

	static ::MiHoYo::SDK::PluginUI::PluginUIBridgeElement* AE17D63AC52A5BFB(::System::String* F5AEFA05C9F71B82, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* BC288918C940C7A6, ::System::String* E97E8D008427A296, ::System::String* E398DC9C5BFABB03, ::System::Boolean B3C251F68EAD9A3F, ::System::Boolean FD96BCA2122A7513, ::System::Int16 A288CB28FC2A6DA3)
	{
		return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeElement*(*)(::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int16))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_AE17D63AC52A5BFB_OFFSET))(F5AEFA05C9F71B82, BC288918C940C7A6, E97E8D008427A296, E398DC9C5BFABB03, B3C251F68EAD9A3F, FD96BCA2122A7513, A288CB28FC2A6DA3);
	}

	::System::Void B75355883821D169(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_B75355883821D169_OFFSET))(this, E04D2BE64FCE9814);
	}

	static ::A8DE0169DBF0981F* A68C7B7988A81FDD()
	{
		return ((::A8DE0169DBF0981F*(*)())((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void B46C01E30FE4EBC8(::System::String* B26FB45137C102C9, ::System::Collections::Generic::List_1<::System::String*>* A2A8C7A35AEA7A1F, ::System::Boolean B8725B4F387C2913)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_B46C01E30FE4EBC8_OFFSET))(this, B26FB45137C102C9, A2A8C7A35AEA7A1F, B8725B4F387C2913);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F__CTOR_OFFSET))(this);
	}

	::System::Void A85DEDD90518960D(::System::String* B26FB45137C102C9, ::System::Collections::Generic::List_1<::System::String*>* A2A8C7A35AEA7A1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_A85DEDD90518960D_OFFSET))(this, B26FB45137C102C9, A2A8C7A35AEA7A1F);
	}

	::System::Void BBAC1A25D6784785(::System::String* B26FB45137C102C9, ::System::String* EF11C18C8216A86E, ::System::String* EB997D219EECCA88, ::System::String* E8D3E399A3CE5592)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A8DE0169DBF0981F_BBAC1A25D6784785_OFFSET))(this, B26FB45137C102C9, EF11C18C8216A86E, EB997D219EECCA88, E8D3E399A3CE5592);
	}
};

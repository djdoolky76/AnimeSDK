#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B6A9FAA43F3D9E70_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x3A46400)
#define B6A9FAA43F3D9E70_A6E1B4101D24A3EA_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define B6A9FAA43F3D9E70_AB2687FA625A24F2_OFFSET UNITYSDK_OFFSET(0x3A466C0)
#define B6A9FAA43F3D9E70_B18FBBAD9A09B540_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define B6A9FAA43F3D9E70_B64C132592E30EB2_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define B6A9FAA43F3D9E70_B69127DB0A94CA9F_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define B6A9FAA43F3D9E70_B71A087851BCBD0A_OFFSET UNITYSDK_OFFSET(0x3A46600)
#define B6A9FAA43F3D9E70_E0B689DD4F24D5E5_OFFSET UNITYSDK_OFFSET(0x3A46680)
#define B6A9FAA43F3D9E70_E1041EB5DB14D329_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B6A9FAA43F3D9E70_E8344BB0C3BEAB37_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B6A9FAA43F3D9E70_EA260080A1F268B3_OFFSET UNITYSDK_OFFSET(0x169C070)
#define B6A9FAA43F3D9E70_EACDC883BA7B97F4_OFFSET UNITYSDK_OFFSET(0x3A46390)
#define B6A9FAA43F3D9E70_EC18C9D608B09C14_OFFSET UNITYSDK_OFFSET(0x3A46640)
#define B6A9FAA43F3D9E70_EE3948B03F2C51CF_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B6A9FAA43F3D9E70_F17208CD71A1BF6B_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define B6A9FAA43F3D9E70_FBC0248000618FDD_OFFSET UNITYSDK_OFFSET(0x3A46380)
#define B6A9FAA43F3D9E70_FCA2862EF88F23E7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B6A9FAA43F3D9E70__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6A9FAA43F3D9E70_TypeDefinitionIndex = 13002;

class B6A9FAA43F3D9E70 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* A45DCFE559C8F992; // 0x10
	::System::Action_1<::System::String*>* F3F2B43613CB9C89; // 0x18
	::System::Action* E41A4F3939C9E81C; // 0x20
	::System::Action* B0A81AB4C23019A7; // 0x28
	::System::Action_1<::System::String*>* B7A9D93974F51995; // 0x30

	::System::Action* EA260080A1F268B3()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_EA260080A1F268B3_OFFSET))(this);
	}

	::System::Void B18FBBAD9A09B540(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_B18FBBAD9A09B540_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EC18C9D608B09C14(::MiHoYo::SDK::AccountModel* E2170609419F59AF)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_EC18C9D608B09C14_OFFSET))(this, E2170609419F59AF);
	}

	::System::Void E1041EB5DB14D329(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_E1041EB5DB14D329_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Action_1<::System::String*>* EE3948B03F2C51CF()
	{
		return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_EE3948B03F2C51CF_OFFSET))(this);
	}

	::System::Void A16C8ED92C989C9B(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* B9B26B23B27A46C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_A16C8ED92C989C9B_OFFSET))(this, B9B26B23B27A46C7);
	}

	::System::Action* B64C132592E30EB2()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_B64C132592E30EB2_OFFSET))(this);
	}

	::System::Void E0B689DD4F24D5E5(::MiHoYo::SDK::AccountModel* E2170609419F59AF)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_E0B689DD4F24D5E5_OFFSET))(this, E2170609419F59AF);
	}

	::System::Action_1<::System::String*>* FCA2862EF88F23E7()
	{
		return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_FCA2862EF88F23E7_OFFSET))(this);
	}

	::System::Void F17208CD71A1BF6B(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_F17208CD71A1BF6B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70__CTOR_OFFSET))(this);
	}

	::System::Void AB2687FA625A24F2(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* B9B26B23B27A46C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_AB2687FA625A24F2_OFFSET))(this, B9B26B23B27A46C7);
	}

	::System::Action_1<::System::String*>* B69127DB0A94CA9F()
	{
		return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_B69127DB0A94CA9F_OFFSET))(this);
	}

	::System::Boolean EACDC883BA7B97F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_EACDC883BA7B97F4_OFFSET))(this);
	}

	::System::Void E8344BB0C3BEAB37(::System::Action_1<::System::String*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_E8344BB0C3BEAB37_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A6E1B4101D24A3EA(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_A6E1B4101D24A3EA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FBC0248000618FDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_FBC0248000618FDD_OFFSET))(this);
	}

	::System::Void B71A087851BCBD0A(::MiHoYo::SDK::AccountModel* E2170609419F59AF)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + B6A9FAA43F3D9E70_B71A087851BCBD0A_OFFSET))(this, E2170609419F59AF);
	}
};

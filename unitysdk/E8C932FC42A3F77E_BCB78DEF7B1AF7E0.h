#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E8C932FC42A3F77E;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x39749E0)
#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x3974AB0)
#define E8C932FC42A3F77E_BCB78DEF7B1AF7E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

inline static constexpr unsigned int E8C932FC42A3F77E_BCB78DEF7B1AF7E0_TypeDefinitionIndex = 12461;

class E8C932FC42A3F77E_BCB78DEF7B1AF7E0 : public ::System::Object
{
public:
	::System::Int32 FEB3551B7D8B59C1; // 0x10
	::System::Byte _padding0[0x4];
	::System::Object* FFDE99DB2A55498E; // 0x18
	::System::String* AF821F194E6AF0BA; // 0x20
	::System::String* E7E685A9390734EE; // 0x28
	::System::Action_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*>* E04D2BE64FCE9814; // 0x30
	::System::Action* E5753F48089F9529; // 0x38
	::System::Single B8CEFF124B3872B8; // 0x40
	::System::Int32 A42E6C8E59968368; // 0x44
	::E8C932FC42A3F77E* A544919C800E2923; // 0x48

	::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
	}

	::System::Void F21DBBC44C999728()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0_F21DBBC44C999728_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0_E6CAD58306FCDCB5_OFFSET))(this);
	}

	::System::Object* BB5F6FA7EB4E8D6F()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0_BB5F6FA7EB4E8D6F_OFFSET))(this);
	}

	::System::Void F38E5001C7AA1BB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0_F38E5001C7AA1BB5_OFFSET))(this);
	}

	::System::Object* E34B6CA02139E820()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_BCB78DEF7B1AF7E0_E34B6CA02139E820_OFFSET))(this);
	}
};

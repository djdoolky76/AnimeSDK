#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A0CC2F7BD6262918;
namespace System::Collections { class F2375D706F5829C9; }
namespace System::Collections { class IEnumerator; }

#define BF48FB8E2BB6779B_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x3ED0B00)
#define BF48FB8E2BB6779B_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3ED0A60)
#define BF48FB8E2BB6779B_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x3ED0BE0)
#define BF48FB8E2BB6779B_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x3ED0AB0)
#define BF48FB8E2BB6779B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ED0BB0)
#define BF48FB8E2BB6779B__CTOR_OFFSET UNITYSDK_OFFSET(0x3ED0B50)

inline static constexpr unsigned int BF48FB8E2BB6779B_TypeDefinitionIndex = 15098;

class BF48FB8E2BB6779B : public ::System::Object
{
public:
	::System::Collections::IEnumerator* AE3F1A16EC225A69; // 0x10

	::System::Object* E34B6CA02139E820()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B_E34B6CA02139E820_OFFSET))(this);
	}

	::A0CC2F7BD6262918* EB0354AC58FB077D()
	{
		return ((::A0CC2F7BD6262918*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B_EB0354AC58FB077D_OFFSET))(this);
	}

	::System::Void _ctor(::System::Collections::F2375D706F5829C9* B9B26B23B27A46C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::F2375D706F5829C9*))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B__CTOR_OFFSET))(this, B9B26B23B27A46C7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B__CTOR_1_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B_E6CAD58306FCDCB5_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF48FB8E2BB6779B_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};

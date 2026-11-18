#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/OMCADMOOABC.h"

class HPOJPBMEICH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOABEFBKHGH_AJOEDLJMILI_OFFSET UNITYSDK_OFFSET(0x16932490)
#define BOABEFBKHGH_GNIBKKMIPFD_OFFSET UNITYSDK_OFFSET(0x16931B40)
#define BOABEFBKHGH_GPLJPIOIDAN_OFFSET UNITYSDK_OFFSET(0x16931EB0)
#define BOABEFBKHGH_LNFHMHJJPCH_OFFSET UNITYSDK_OFFSET(0x16931D40)
#define BOABEFBKHGH_ODLFBBJKDAE_OFFSET UNITYSDK_OFFSET(0x169325A0)
#define BOABEFBKHGH_OKAFCNCAMHE_OFFSET UNITYSDK_OFFSET(0x16932420)
#define BOABEFBKHGH_PCLEEBEAKFK_OFFSET UNITYSDK_OFFSET(0x16932530)
#define BOABEFBKHGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16931B30)
#define BOABEFBKHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16931A60)

inline static constexpr unsigned int BOABEFBKHGH_TypeDefinitionIndex = 52920;

class BOABEFBKHGH : public ::JGELKBLKFHE
{
public:
	static ::HPOJPBMEICH** StaticGet_DOOCNICBKPF()
	{
		return (::HPOJPBMEICH**)Il2CppClass::FromTypeDefinitionIndex(BOABEFBKHGH_TypeDefinitionIndex)->GetStaticField(0x45CC0);
	}
	static ::System::Boolean* StaticGet_LGNEFNFEPGO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BOABEFBKHGH_TypeDefinitionIndex)->GetStaticField(0x10210);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HPOJPBMEICH*>* DONBLIIMPPI; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* ILJDGCPGMPO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOABEFBKHGH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOABEFBKHGH__CCTOR_OFFSET))();
	}

	static ::HPOJPBMEICH* GNIBKKMIPFD()
	{
		return ((::HPOJPBMEICH*(*)())((::PBYTE)hIl2Cpp + BOABEFBKHGH_GNIBKKMIPFD_OFFSET))();
	}

	::HPOJPBMEICH* LNFHMHJJPCH()
	{
		return ((::HPOJPBMEICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOABEFBKHGH_LNFHMHJJPCH_OFFSET))(this);
	}

	::System::Void OKAFCNCAMHE(::OMCADMOOABC MFEGCBLDMPF)
	{
		return ((::System::Void(*)(::PVOID, ::OMCADMOOABC))((::PBYTE)hIl2Cpp + BOABEFBKHGH_OKAFCNCAMHE_OFFSET))(this, MFEGCBLDMPF);
	}

	::System::Void PCLEEBEAKFK(::OMCADMOOABC MFEGCBLDMPF)
	{
		return ((::System::Void(*)(::PVOID, ::OMCADMOOABC))((::PBYTE)hIl2Cpp + BOABEFBKHGH_PCLEEBEAKFK_OFFSET))(this, MFEGCBLDMPF);
	}

	::HPOJPBMEICH* GPLJPIOIDAN(::OMCADMOOABC MFEGCBLDMPF)
	{
		return ((::HPOJPBMEICH*(*)(::PVOID, ::OMCADMOOABC))((::PBYTE)hIl2Cpp + BOABEFBKHGH_GPLJPIOIDAN_OFFSET))(this, MFEGCBLDMPF);
	}

	::System::Void ODLFBBJKDAE(::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOABEFBKHGH_ODLFBBJKDAE_OFFSET))(this, LJMPPBEMEPP);
	}

	::System::Void AJOEDLJMILI(::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOABEFBKHGH_AJOEDLJMILI_OFFSET))(this, LJMPPBEMEPP);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace MoleMole { class SummerPlayerWeaponInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NLPMJOJADCH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xE1A9BF0)
#define NLPMJOJADCH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE1A9660)
#define NLPMJOJADCH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE1A9570)
#define NLPMJOJADCH_GOCCMIOMGLB_OFFSET UNITYSDK_OFFSET(0xE1A9880)
#define NLPMJOJADCH__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1A9560)

inline static constexpr unsigned int NLPMJOJADCH_TypeDefinitionIndex = 78036;

class NLPMJOJADCH : public ::System::Object
{
public:
	static ::MoleMole::SummerEventShootingGamePlayConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::SummerEventShootingGamePlayConfig**)Il2CppClass::FromTypeDefinitionIndex(NLPMJOJADCH_TypeDefinitionIndex)->GetStaticField(0x474B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLPMJOJADCH__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NLPMJOJADCH_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}

	static ::MoleMole::SummerPlayerWeaponInfo* GOCCMIOMGLB(::System::Int32 LJMPPBEMEPP)
	{
		return ((::MoleMole::SummerPlayerWeaponInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NLPMJOJADCH_GOCCMIOMGLB_OFFSET))(LJMPPBEMEPP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NLPMJOJADCH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::SummerEventShootingGamePlayConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::SummerEventShootingGamePlayConfig*(*)())((::PBYTE)hIl2Cpp + NLPMJOJADCH_COPIDBEMEIE_OFFSET))();
	}
};

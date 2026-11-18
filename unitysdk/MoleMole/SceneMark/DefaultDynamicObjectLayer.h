#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class FHNLCIIHLIH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_CPCNKDBIPLL_OFFSET UNITYSDK_OFFSET(0x13A056E0)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_FCDPNCAOPHL_OFFSET UNITYSDK_OFFSET(0x13A05D40)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_GET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x13A05620)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13A05B50)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_OCJNDMLAGKN_OFFSET UNITYSDK_OFFSET(0x13A05B10)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x13A05920)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_ONNDAPEIODK_OFFSET UNITYSDK_OFFSET(0x13A05860)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_SET_LAYERNAME_OFFSET UNITYSDK_OFFSET(0x13A05630)
#define MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A05640)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int DefaultDynamicObjectLayer_TypeDefinitionIndex = 45990;

	class DefaultDynamicObjectLayer : public ::System::Object
	{
	public:
		::System::String* _layerName_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FHNLCIIHLIH*>* ObjectMap; // 0x18

		::System::Void _ctor(::System::String* OKLLBNDINPE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER__CTOR_OFFSET))(this, OKLLBNDINPE);
		}

		::System::String* get_layerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_GET_LAYERNAME_OFFSET))(this);
		}

		::System::Void set_layerName(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_SET_LAYERNAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::FHNLCIIHLIH* CPCNKDBIPLL(::MoleMole::GameplayTag AELLPLBJELA)
		{
			return ((::FHNLCIIHLIH*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_CPCNKDBIPLL_OFFSET))(this, AELLPLBJELA);
		}

		::System::Boolean ONNDAPEIODK(::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>* LHGNGLCFEBF)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::FHNLCIIHLIH*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_ONNDAPEIODK_OFFSET))(this, AELLPLBJELA, LHGNGLCFEBF);
		}

		::System::Void OKMEFGGMPFG(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_OKMEFGGMPFG_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::String* OCJNDMLAGKN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_OCJNDMLAGKN_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_NPOLNFDBOOD_OFFSET))(this);
		}

		::System::Void FCDPNCAOPHL(::FHNLCIIHLIH* GLJLBOKMFOJ)
		{
			return ((::System::Void(*)(::PVOID, ::FHNLCIIHLIH*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_DEFAULTDYNAMICOBJECTLAYER_FCDPNCAOPHL_OFFSET))(this, GLJLBOKMFOJ);
		}
	};
}

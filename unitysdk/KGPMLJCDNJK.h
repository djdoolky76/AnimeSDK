#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DFGLKHAAGJB;
class LGGELBFHJIM;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGPMLJCDNJK_AFGCGEAFJJF_OFFSET UNITYSDK_OFFSET(0xB3FB800)
#define KGPMLJCDNJK_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FB260)
#define KGPMLJCDNJK_DAACGBFHMLH_OFFSET UNITYSDK_OFFSET(0xB3FB960)
#define KGPMLJCDNJK_FEFALJEHHDA_OFFSET UNITYSDK_OFFSET(0xB3FB450)
#define KGPMLJCDNJK_FFLEHDGHCJI_OFFSET UNITYSDK_OFFSET(0xB3FB920)
#define KGPMLJCDNJK_GGBNKCPIFLG_OFFSET UNITYSDK_OFFSET(0xB3FB710)
#define KGPMLJCDNJK_GGCNGNKKJBM_OFFSET UNITYSDK_OFFSET(0xB3FB4C0)
#define KGPMLJCDNJK_GIHCEJAAPGJ_OFFSET UNITYSDK_OFFSET(0xB3FB8C0)
#define KGPMLJCDNJK_KAOIHHCJFDO_OFFSET UNITYSDK_OFFSET(0xB3FB2B0)
#define KGPMLJCDNJK_KODCOBBCHDA_OFFSET UNITYSDK_OFFSET(0xB3FB3A0)
#define KGPMLJCDNJK_LEDCJJIAFLK_OFFSET UNITYSDK_OFFSET(0xB3FB3E0)
#define KGPMLJCDNJK_ODAPBIPLOFA_OFFSET UNITYSDK_OFFSET(0xB3FB6D0)

	class KGPMLJCDNJK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* CKBBGIOPKKL; // 0x10
		::LGGELBFHJIM* LBNAGLIGKIO; // 0x18
		::System::UInt32 MFEPBGGJDIM; // 0x20
		::System::Boolean OEBAHDHIPAI; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID AGFPFCABGKO; // 0x28
		::System::Void _ctor(::LGGELBFHJIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGGELBFHJIM*))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KODCOBBCHDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_KODCOBBCHDA_OFFSET))(this);
		}

		::System::Void LEDCJJIAFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_LEDCJJIAFLK_OFFSET))(this);
		}

		::System::Void FEFALJEHHDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_FEFALJEHHDA_OFFSET))(this, a1);
		}

		::System::Void KAOIHHCJFDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_KAOIHHCJFDO_OFFSET))(this);
		}

		::System::Void GGCNGNKKJBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_GGCNGNKKJBM_OFFSET))(this, a1);
		}

		::System::Boolean GGBNKCPIFLG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_GGBNKCPIFLG_OFFSET))(this, a1, a2);
		}

		::System::Void AFGCGEAFJJF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_AFGCGEAFJJF_OFFSET))(this, a1);
		}

		::System::Boolean GIHCEJAAPGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_GIHCEJAAPGJ_OFFSET))(this);
		}

		::System::Boolean FFLEHDGHCJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_FFLEHDGHCJI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DFGLKHAAGJB*>* ODAPBIPLOFA()
		{
			return ((::System::Collections::Generic::List_1<::DFGLKHAAGJB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_ODAPBIPLOFA_OFFSET))(this);
		}

		::RPG::Client::TextID DAACGBFHMLH()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPMLJCDNJK_DAACGBFHMLH_OFFSET))(this);
		}

	};

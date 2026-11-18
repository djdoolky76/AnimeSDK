#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KAOAMGFKCFO;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BLHGKIBDOGI_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x113EF7E0)
#define BLHGKIBDOGI_HCOBGBGKGNG_OFFSET UNITYSDK_OFFSET(0x113EF8C0)
#define BLHGKIBDOGI_JNICIGNLPGH_OFFSET UNITYSDK_OFFSET(0x113EFFC0)
#define BLHGKIBDOGI_KMIIIONFOGD_OFFSET UNITYSDK_OFFSET(0x113EFF10)
#define BLHGKIBDOGI_KMKGPGKNFHB_OFFSET UNITYSDK_OFFSET(0x113EFAC0)
#define BLHGKIBDOGI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x113EFF80)
#define BLHGKIBDOGI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x113EF920)
#define BLHGKIBDOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x113EF6D0)

inline static constexpr unsigned int BLHGKIBDOGI_TypeDefinitionIndex = 91521;

class BLHGKIBDOGI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EBHDCLBEOND; // 0x10
	::System::Collections::Generic::List_1<::KAOAMGFKCFO*>* NGDLOLKKNBM; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* JBJAFLJLKJK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGKIBDOGI__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_ANPBCLAFCJB_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void HCOBGBGKGNG(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_HCOBGBGKGNG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void KMKGPGKNFHB(::System::Int32 ABHBKFJKINO, ::System::UInt32 FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_KMKGPGKNFHB_OFFSET))(this, ABHBKFJKINO, FNIOPKPHDEH);
	}

	::System::Void KMIIIONFOGD(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_KMIIIONFOGD_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void JNICIGNLPGH(::System::Int32 ABHBKFJKINO, ::System::UInt32 FBBLGDICHOE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLHGKIBDOGI_JNICIGNLPGH_OFFSET))(this, ABHBKFJKINO, FBBLGDICHOE);
	}
};

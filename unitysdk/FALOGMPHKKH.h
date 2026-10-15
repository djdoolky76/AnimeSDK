#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightShopBuyEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FALOGMPHKKH_CTOR_OFFSET UNITYSDK_OFFSET(0x156840E0)
#define FALOGMPHKKH_JMIPJKBDGMJ_OFFSET UNITYSDK_OFFSET(0x15683D10)
#define FALOGMPHKKH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15683320)
#define FALOGMPHKKH_OCHBNMKOEMI_OFFSET UNITYSDK_OFFSET(0x156836A0)
#define FALOGMPHKKH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15683C40)

	class FALOGMPHKKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* PGFDBFCHODC; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* NJDOCHMAFIB; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* GOCMAHJOLLG; // 0x20
		::System::Boolean DGHDBGKGJFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGMPHKKH_CTOR_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGMPHKKH_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>* OCHBNMKOEMI()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightShopBuyEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGMPHKKH_OCHBNMKOEMI_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALOGMPHKKH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 JMIPJKBDGMJ(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FALOGMPHKKH_JMIPJKBDGMJ_OFFSET))(this, a1);
		}

	};

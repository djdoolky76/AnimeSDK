#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMFAGKJIIM;
class EFKCHNCGGIO;
namespace RPG::Client { class GridFightGameSession; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFKCHNCGGIO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A525D0)
#define EFKCHNCGGIO_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x13A52530)
#define EFKCHNCGGIO_IJDBKJANJGD_OFFSET UNITYSDK_OFFSET(0x13A528C0)

inline static constexpr unsigned int EFKCHNCGGIO_TypeDefinitionIndex = 64841;

	class EFKCHNCGGIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EBMFAGKJIIM*>* APPIAANONPF; // 0x10
		static ::EFKCHNCGGIO** StaticGet_FLMODBLFAGD()
		{
			return (::EFKCHNCGGIO**)UnitySDK::FromName("", "EFKCHNCGGIO")->GetStaticField(0x700A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKCHNCGGIO_CTOR_OFFSET))(this);
		}

		static ::EFKCHNCGGIO* GGBLHEHJBDO()
		{
			return ((::EFKCHNCGGIO*(*)())((::PBYTE)hIl2Cpp + EFKCHNCGGIO_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void IJDBKJANJGD(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + EFKCHNCGGIO_IJDBKJANJGD_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetLineup; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OKJEPNABOFA_AGHCACKCDAM_OFFSET UNITYSDK_OFFSET(0xBED4780)
#define OKJEPNABOFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBED4660)
#define OKJEPNABOFA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xBED4730)
#define OKJEPNABOFA_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0xBED47D0)

inline static constexpr unsigned int OKJEPNABOFA_TypeDefinitionIndex = 75711;

	class OKJEPNABOFA : public ::System::Object
	{
	public:
		::System::WeakReference_1<::RPG::Client::Pet::IPetLineup*>* AEGNGAOGDIN; // 0x10
		::System::Void _ctor(::RPG::Client::Pet::IPetLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetLineup*))((::PBYTE)hIl2Cpp + OKJEPNABOFA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::PetSummonStateType JBIOGKPHKKC()
		{
			return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJEPNABOFA_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* AGHCACKCDAM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJEPNABOFA_AGHCACKCDAM_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetLineup* JIFPIGBJFEH()
		{
			return ((::RPG::Client::Pet::IPetLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJEPNABOFA_JIFPIGBJFEH_OFFSET))(this);
		}

	};

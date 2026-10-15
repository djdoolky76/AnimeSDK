#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"
class JGGMLADDHHG;
namespace RPG::Client::Pet { class IPetInstance; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JGGMLADDHHG_AGHCACKCDAM_OFFSET UNITYSDK_OFFSET(0xB193670)
#define JGGMLADDHHG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1936C0)
#define JGGMLADDHHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB193620)
#define JGGMLADDHHG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xB193630)

inline static constexpr unsigned int JGGMLADDHHG_TypeDefinitionIndex = 75709;

	class JGGMLADDHHG : public ::System::Object
	{
	public:
		static ::JGGMLADDHHG** StaticGet_FMJPMFEDIJL()
		{
			return (::JGGMLADDHHG**)UnitySDK::FromName("", "JGGMLADDHHG")->GetStaticField(0x10BD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGMLADDHHG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGGMLADDHHG_CCTOR_OFFSET))();
		}

		::RPG::Client::Pet::PetSummonStateType JBIOGKPHKKC()
		{
			return ((::RPG::Client::Pet::PetSummonStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGMLADDHHG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>* AGHCACKCDAM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Pet::IPetInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGGMLADDHHG_AGHCACKCDAM_OFFSET))(this);
		}

	};

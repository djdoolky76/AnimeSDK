#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNBOEKLHBN_ADCHIINIAHH_OFFSET UNITYSDK_OFFSET(0xB5C2900)
#define KPNBOEKLHBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C2BB0)
#define KPNBOEKLHBN_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0xB5C2470)

inline static constexpr unsigned int KPNBOEKLHBN_TypeDefinitionIndex = 66176;

	class KPNBOEKLHBN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNBOEKLHBN_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN_HDILBJHMBMF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* ADCHIINIAHH(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN_ADCHIINIAHH_OFFSET))(this, a1);
		}

	};

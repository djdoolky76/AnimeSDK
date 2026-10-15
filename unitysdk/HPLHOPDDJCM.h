#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADIJOHAPHK.h"
class HGDELEAHIJO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HPLHOPDDJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC58D0)
#define HPLHOPDDJCM_FLHAEFKDIHO_OFFSET UNITYSDK_OFFSET(0x15DC5810)
#define HPLHOPDDJCM_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15DC55C0)
#define HPLHOPDDJCM_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DC56E0)
#define HPLHOPDDJCM_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x15DC5630)
#define HPLHOPDDJCM___N__0_OFFSET UNITYSDK_OFFSET(0x15DC5900)

inline static constexpr unsigned int HPLHOPDDJCM_TypeDefinitionIndex = 59489;

	class HPLHOPDDJCM : public ::EADIJOHAPHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_GETTYPENAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Void OnAllSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_ONALLSUCCEED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* FLHAEFKDIHO(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_FLHAEFKDIHO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM___N__0_OFFSET))(this);
		}

	};

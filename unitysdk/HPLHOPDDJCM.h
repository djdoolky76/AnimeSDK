#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADIJOHAPHK.h"
class HGDELEAHIJO;
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HPLHOPDDJCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD21D0)
#define HPLHOPDDJCM_FLHAEFKDIHO_OFFSET UNITYSDK_OFFSET(0x15DD2110)
#define HPLHOPDDJCM_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15DD1EC0)
#define HPLHOPDDJCM_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0x15DD1FE0)
#define HPLHOPDDJCM_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x15DD1F30)
#define HPLHOPDDJCM___N__0_OFFSET UNITYSDK_OFFSET(0x15DD2200)

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

		::System::Collections::Generic::IEnumerable_1<::System::Tuple*>* FLHAEFKDIHO(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPLHOPDDJCM_FLHAEFKDIHO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHOPDDJCM___N__0_OFFSET))(this);
		}

	};

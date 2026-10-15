#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMNJKMDDACL.h"
class HGDELEAHIJO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EBGMOALCIEA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CEB160)
#define EBGMOALCIEA_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x12CEB040)
#define EBGMOALCIEA_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x12CEB0B0)
#define EBGMOALCIEA___N__0_OFFSET UNITYSDK_OFFSET(0x12CEB190)

inline static constexpr unsigned int EBGMOALCIEA_TypeDefinitionIndex = 59492;

	class EBGMOALCIEA : public ::BMNJKMDDACL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA_CTOR_OFFSET))(this);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA_GETTYPENAME_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* OnEnumBlockItems()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA_ONENUMBLOCKITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>* __n__0()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGMOALCIEA___N__0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCJHEDMHOK;
class GMDIBFIGIEG;
class KNHCNPDALBB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PHCMIJEDENP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56D6F0)
#define PHCMIJEDENP_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C57DBC0)
#define PHCMIJEDENP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C57DBB0)
#define PHCMIJEDENP_GET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x1C57DBD0)
#define PHCMIJEDENP_KEAENOMHGIA_OFFSET UNITYSDK_OFFSET(0x1C570C40)
#define PHCMIJEDENP_MJDEIPBNMOB_OFFSET UNITYSDK_OFFSET(0x1C572970)

inline static constexpr unsigned int PHCMIJEDENP_TypeDefinitionIndex = 41875;

	class PHCMIJEDENP : public ::System::Object
	{
	public:
		::KNHCNPDALBB* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>* _TalentPoints_k__BackingField; // 0x18
		::CBCJHEDMHOK* KGJMIFOJIAF; // 0x20
		::System::UInt32 _Identifier_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::KNHCNPDALBB* a2, ::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>* a3, ::CBCJHEDMHOK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KNHCNPDALBB*, ::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>*, ::CBCJHEDMHOK*))((::PBYTE)hIl2Cpp + PHCMIJEDENP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCMIJEDENP_GET_IDENTIFIER_OFFSET))(this);
		}

		::KNHCNPDALBB* get_Config()
		{
			return ((::KNHCNPDALBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCMIJEDENP_GET_CONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>* get_TalentPoints()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCMIJEDENP_GET_TALENTPOINTS_OFFSET))(this);
		}

		::System::Boolean MJDEIPBNMOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCMIJEDENP_MJDEIPBNMOB_OFFSET))(this);
		}

		::GMDIBFIGIEG* KEAENOMHGIA(::System::UInt32 a1)
		{
			return ((::GMDIBFIGIEG*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHCMIJEDENP_KEAENOMHGIA_OFFSET))(this, a1);
		}

	};

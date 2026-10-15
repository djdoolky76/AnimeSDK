#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCJHEDMHOK;
class GMDIBFIGIEG;
class KNHCNPDALBB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PHCMIJEDENP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53F230)
#define PHCMIJEDENP_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54F720)
#define PHCMIJEDENP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C54F710)
#define PHCMIJEDENP_GET_TALENTPOINTS_OFFSET UNITYSDK_OFFSET(0x1C54F730)
#define PHCMIJEDENP_KEAENOMHGIA_OFFSET UNITYSDK_OFFSET(0x1C542790)
#define PHCMIJEDENP_MJDEIPBNMOB_OFFSET UNITYSDK_OFFSET(0x1C5444C0)

inline static constexpr unsigned int PHCMIJEDENP_TypeDefinitionIndex = 41875;

	class PHCMIJEDENP : public ::System::Object
	{
	public:
		::CBCJHEDMHOK* KGJMIFOJIAF; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::GMDIBFIGIEG*>* _TalentPoints_k__BackingField; // 0x18
		::KNHCNPDALBB* _Config_k__BackingField; // 0x20
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

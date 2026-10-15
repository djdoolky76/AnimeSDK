#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class HipplenBuilderStatusAsset_StatConfig;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUS_STAT_CONHLPHNAEL_OFFSET UNITYSDK_OFFSET(0x15DF0CF0)
#define HIPPLENBUILDERSTATUS_STAT_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF0C80)
#define HIPPLENBUILDERSTATUS_STAT_DHEMFBMKKAI_OFFSET UNITYSDK_OFFSET(0x15DF1420)
#define HIPPLENBUILDERSTATUS_STAT_GET_GRADECONFIGS_OFFSET UNITYSDK_OFFSET(0x15DF1AB0)
#define HIPPLENBUILDERSTATUS_STAT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x15DF1A60)
#define HIPPLENBUILDERSTATUS_STAT_GET_NAMENEG_OFFSET UNITYSDK_OFFSET(0x15DF17B0)
#define HIPPLENBUILDERSTATUS_STAT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15DF1760)
#define HIPPLENBUILDERSTATUS_STAT_GET_NEXTGRADEMIN_OFFSET UNITYSDK_OFFSET(0x15DF1850)
#define HIPPLENBUILDERSTATUS_STAT_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x15DF1B00)
#define HIPPLENBUILDERSTATUS_STAT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x15DF1800)
#define HIPPLENBUILDERSTATUS_STAT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15DF0CA0)
#define HIPPLENBUILDERSTATUS_STAT_GET_WARNINGVALUE_OFFSET UNITYSDK_OFFSET(0x15DF1A10)
#define HIPPLENBUILDERSTATUS_STAT_PNCEALKCNJK_OFFSET UNITYSDK_OFFSET(0x15DF18A0)

	class HipplenBuilderStatus_Stat : public ::System::Object
	{
	public:
		::HipplenBuilderStatusAsset_StatConfig* _config; // 0x10
		::System::Int32 Value; // 0x18
		::System::Void _ctor(::HipplenBuilderStatusAsset_StatConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatusAsset_StatConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_CTOR_OFFSET))(this, a1);
		}

		::HipplenBuilderStatus_StatType get_Type()
		{
			return ((::HipplenBuilderStatus_StatType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameNeg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NAMENEG_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_Range()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_RANGE_OFFSET))(this);
		}

		::System::Int32 get_NextGradeMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NEXTGRADEMIN_OFFSET))(this);
		}

		::System::Int32 get_WarningValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_WARNINGVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_GradeConfigs()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_GRADECONFIGS_OFFSET))(this);
		}

		::System::Single get_NormalizedValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NORMALIZEDVALUE_OFFSET))(this);
		}

		::System::Void CONHLPHNAEL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_CONHLPHNAEL_OFFSET))(this, a1);
		}

		::System::String* DHEMFBMKKAI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_DHEMFBMKKAI_OFFSET))(this);
		}

		::System::Int32 PNCEALKCNJK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_PNCEALKCNJK_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNKHIPBNELK;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBKAHIEOBEI_CABKEIBGPLJ_OFFSET UNITYSDK_OFFSET(0x12D00480)
#define EBKAHIEOBEI_CCNNGPIPKFF_OFFSET UNITYSDK_OFFSET(0x12D00120)
#define EBKAHIEOBEI_CTOR_OFFSET UNITYSDK_OFFSET(0x12D00560)
#define EBKAHIEOBEI_GET_LATESTVERSION_OFFSET UNITYSDK_OFFSET(0x12D00100)
#define EBKAHIEOBEI_SET_LATESTVERSION_OFFSET UNITYSDK_OFFSET(0x12D00110)

inline static constexpr unsigned int EBKAHIEOBEI_TypeDefinitionIndex = 82245;

	class EBKAHIEOBEI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GNKHIPBNELK*>* BBOFAEJHNAL; // 0x10
		::System::Version* _latestVersion_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAHIEOBEI_CTOR_OFFSET))(this);
		}

		::System::Version* get_latestVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKAHIEOBEI_GET_LATESTVERSION_OFFSET))(this);
		}

		::System::Void set_latestVersion(::System::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + EBKAHIEOBEI_SET_LATESTVERSION_OFFSET))(this, a1);
		}

		::GNKHIPBNELK* CCNNGPIPKFF(::System::Version* a1, ::System::Version* a2)
		{
			return ((::GNKHIPBNELK*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + EBKAHIEOBEI_CCNNGPIPKFF_OFFSET))(this, a1, a2);
		}

		::System::Boolean CABKEIBGPLJ(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + EBKAHIEOBEI_CABKEIBGPLJ_OFFSET))(this, a1, a2);
		}

	};

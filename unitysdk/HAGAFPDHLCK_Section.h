#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
class HAGAFPDHLCK_Section;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAGAFPDHLCK_SECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x15B75F90)
#define HAGAFPDHLCK_SECTION_GET_BOUNDSBOX_OFFSET UNITYSDK_OFFSET(0x15B75460)
#define HAGAFPDHLCK_SECTION_LDJOPFFEMDP_OFFSET UNITYSDK_OFFSET(0x15B75FB0)
#define HAGAFPDHLCK_SECTION_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x15B760B0)

	class HAGAFPDHLCK_Section : public ::System::Object
	{
	public:
		::System::Boolean ifAutoConnectEnd; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* SectionPoints; // 0x18
		::UnityEngine::Rect _BoundsBox; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_SECTION_CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect get_BoundsBox()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_SECTION_GET_BOUNDSBOX_OFFSET))(this);
		}

		::UnityEngine::Rect LDJOPFFEMDP()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_SECTION_LDJOPFFEMDP_OFFSET))(this);
		}

		::HAGAFPDHLCK_Section* NBHCPBBGAKA()
		{
			return ((::HAGAFPDHLCK_Section*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_SECTION_NBHCPBBGAKA_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/RegionType.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/System/Object.h"
class AMBNKDFFEKK;
class CBAJOJJBMMA;
class CCHBEOBCCCP;
class GHMBKJFBPII;
class IJMLKBLCLGH;
class KJLLEKDIBHE;
class MDCLPDPECFC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJLLEKDIBHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB45AAE0)

	class KJLLEKDIBHE : public ::System::Object
	{
	public:
		::AMBNKDFFEKK* Meta; // 0x10
		::System::String* Id; // 0x18
		::System::Collections::Generic::List_1<::CBAJOJJBMMA*>* Connectors; // 0x20
		::Il2CppArray<::Il2CppArray<::System::Single>*>* Polygon; // 0x28
		::MDCLPDPECFC* Polish; // 0x30
		::System::Collections::Generic::List_1<::GHMBKJFBPII*>* RouteNodes; // 0x38
		::System::Collections::Generic::List_1<::IJMLKBLCLGH*>* InternalPaths; // 0x40
		::System::String* Description; // 0x48
		::System::String* Name; // 0x50
		::CCHBEOBCCCP* Transform; // 0x58
		::Il2CppArray<::System::Single>* Size; // 0x60
		::System::Collections::Generic::List_1<::KJLLEKDIBHE*>* ChildrenRegions; // 0x68
		::RPGTools::LDWhiteBox::ShapeType Shape; // 0x70
		::RPGTools::LDWhiteBox::RegionType Type; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLLEKDIBHE_CTOR_OFFSET))(this);
		}

	};

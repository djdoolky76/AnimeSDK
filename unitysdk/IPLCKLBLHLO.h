#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define IPLCKLBLHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x16524E40)
#define IPLCKLBLHLO_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x16524E50)
#define IPLCKLBLHLO_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x16524FD0)

	class IPLCKLBLHLO : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + IPLCKLBLHLO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLCKLBLHLO_HFOKMLIJFDK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IPLCKLBLHLO_MNGGAOFNGIP_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class KAPEMBCNNIG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHNIDOJKJMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A1F7E0)
#define GHNIDOJKJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1F7D0)
#define GHNIDOJKJMP_ECGJFNEJOGM_OFFSET UNITYSDK_OFFSET(0x15A1F770)
#define GHNIDOJKJMP_KPOEEGOOEPO_OFFSET UNITYSDK_OFFSET(0x15A1F340)

inline static constexpr unsigned int GHNIDOJKJMP_TypeDefinitionIndex = 71576;

	class GHNIDOJKJMP : public ::System::Object
	{
	public:
		static ::KAPEMBCNNIG** StaticGet_OHAANDBJIOD()
		{
			return (::KAPEMBCNNIG**)UnitySDK::FromName("", "GHNIDOJKJMP")->GetStaticField(0x64420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNIDOJKJMP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNIDOJKJMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::KAPEMBCNNIG*>* KPOEEGOOEPO()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::KAPEMBCNNIG*>*(*)())((::PBYTE)hIl2Cpp + GHNIDOJKJMP_KPOEEGOOEPO_OFFSET))();
		}

		static ::KAPEMBCNNIG* ECGJFNEJOGM()
		{
			return ((::KAPEMBCNNIG*(*)())((::PBYTE)hIl2Cpp + GHNIDOJKJMP_ECGJFNEJOGM_OFFSET))();
		}

	};

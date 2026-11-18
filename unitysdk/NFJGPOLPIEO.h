#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHJABJELOPE.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIInLevelOnlineRoleTipsWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFJGPOLPIEO_BKNNOEHHBGH_OFFSET UNITYSDK_OFFSET(0xE738620)
#define NFJGPOLPIEO_BNEIJDHADMK_OFFSET UNITYSDK_OFFSET(0xE738820)
#define NFJGPOLPIEO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xE738710)
#define NFJGPOLPIEO_HADEPEEANED_OFFSET UNITYSDK_OFFSET(0xE738910)
#define NFJGPOLPIEO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0xE738660)
#define NFJGPOLPIEO__CCTOR_OFFSET UNITYSDK_OFFSET(0xE738580)
#define NFJGPOLPIEO__CTOR_OFFSET UNITYSDK_OFFSET(0xE738500)

inline static constexpr unsigned int NFJGPOLPIEO_TypeDefinitionIndex = 65101;

class NFJGPOLPIEO : public ::System::Object
{
public:
	static ::Foundation::ObjectPool_1<::NFJGPOLPIEO*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::NFJGPOLPIEO*>**)Il2CppClass::FromTypeDefinitionIndex(NFJGPOLPIEO_TypeDefinitionIndex)->GetStaticField(0x3F5B0);
	}
	::MoleMole::UIInLevelOnlineRoleTipsWidgetController* FPPPIIFJOBO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* EHEMFBGJOJF; // 0x18
	::System::Int32 MNAIIBHLHMA; // 0x20
	::System::Int32 JKNKIBDHPDJ; // 0x24
	::KHJABJELOPE FDGICFLLOHG; // 0x28
	::System::UInt32 MBNGJKPKFIF; // 0x2C
	::System::Single JGNCDFNAIMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGPOLPIEO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFJGPOLPIEO__CCTOR_OFFSET))();
	}

	::System::Void BKNNOEHHBGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGPOLPIEO_BKNNOEHHBGH_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGPOLPIEO_JJEJHGOJOII_OFFSET))(this);
	}

	static ::NFJGPOLPIEO* COKNIICCODC()
	{
		return ((::NFJGPOLPIEO*(*)())((::PBYTE)hIl2Cpp + NFJGPOLPIEO_COKNIICCODC_OFFSET))();
	}

	static ::NFJGPOLPIEO* BNEIJDHADMK()
	{
		return ((::NFJGPOLPIEO*(*)())((::PBYTE)hIl2Cpp + NFJGPOLPIEO_BNEIJDHADMK_OFFSET))();
	}

	static ::System::Void HADEPEEANED(::System::UInt32 IKEMGLJOMAA, ::System::Int32 HEMGNHELNKP, ::Il2CppArray<::System::String*>* EHEMFBGJOJF)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + NFJGPOLPIEO_HADEPEEANED_OFFSET))(IKEMGLJOMAA, HEMGNHELNKP, EHEMFBGJOJF);
	}
};

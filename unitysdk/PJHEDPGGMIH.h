#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJHEDPGGMIH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11983490)
#define PJHEDPGGMIH_IAMEOCGBMLD_OFFSET UNITYSDK_OFFSET(0x119835B0)
#define PJHEDPGGMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11983400)

inline static constexpr unsigned int PJHEDPGGMIH_TypeDefinitionIndex = 86307;

class PJHEDPGGMIH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHEDPGGMIH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHEDPGGMIH_CREATEOP_OFFSET))(this);
	}

	static ::System::Void IAMEOCGBMLD(::System::Collections::Generic::List_1<::System::String*>* MKLEDMIMEEH, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* JPAFJPIHGIE, ::System::String* DMKBGJMJELN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::String*))((::PBYTE)hIl2Cpp + PJHEDPGGMIH_IAMEOCGBMLD_OFFSET))(MKLEDMIMEEH, JPAFJPIHGIE, DMKBGJMJELN);
	}
};

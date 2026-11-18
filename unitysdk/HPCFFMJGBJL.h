#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

class FGNEAMDEOLM;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class String; }

#define HPCFFMJGBJL_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x101287F0)
#define HPCFFMJGBJL_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x10128780)
#define HPCFFMJGBJL__CTOR_OFFSET UNITYSDK_OFFSET(0x10128740)

inline static constexpr unsigned int HPCFFMJGBJL_TypeDefinitionIndex = 43207;

class HPCFFMJGBJL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFFMJGBJL__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::System::String* MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPCFFMJGBJL_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::FGNEAMDEOLM*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::FGNEAMDEOLM*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HPCFFMJGBJL_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

class FGNEAMDEOLM;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class String; }

#define BBFJCECOAGP_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1423C080)
#define BBFJCECOAGP_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x1423C010)
#define BBFJCECOAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1423BFD0)

inline static constexpr unsigned int BBFJCECOAGP_TypeDefinitionIndex = 66799;

class BBFJCECOAGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFJCECOAGP__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::System::String* MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBFJCECOAGP_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::FGNEAMDEOLM*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::FGNEAMDEOLM*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BBFJCECOAGP_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};

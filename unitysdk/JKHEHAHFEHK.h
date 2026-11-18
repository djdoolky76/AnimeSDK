#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define JKHEHAHFEHK_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1308DC40)
#define JKHEHAHFEHK_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1308E090)
#define JKHEHAHFEHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1308DC00)

inline static constexpr unsigned int JKHEHAHFEHK_TypeDefinitionIndex = 78874;

class JKHEHAHFEHK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHEHAHFEHK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};

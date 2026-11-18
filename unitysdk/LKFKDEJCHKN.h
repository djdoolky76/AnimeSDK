#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HBJCODLAHBP;

#define LKFKDEJCHKN_EFLKANNFOGM_OFFSET UNITYSDK_OFFSET(0x16375960)
#define LKFKDEJCHKN__CTOR_OFFSET UNITYSDK_OFFSET(0x16375950)

inline static constexpr unsigned int LKFKDEJCHKN_TypeDefinitionIndex = 57677;

class LKFKDEJCHKN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFKDEJCHKN__CTOR_OFFSET))(this);
	}

	static ::System::Void EFLKANNFOGM(::HBJCODLAHBP* AEJAMJDBHAM, ::System::Int32 MJODFDBNJIP, ::System::Int32 DNFNKBNBJHM, ::Foundation::AssetPath FNJPKKAHJAJ, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::HBJCODLAHBP*, ::System::Int32, ::System::Int32, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + LKFKDEJCHKN_EFLKANNFOGM_OFFSET))(AEJAMJDBHAM, MJODFDBNJIP, DNFNKBNBJHM, FNJPKKAHJAJ, FBILHHBPEHD);
	}
};

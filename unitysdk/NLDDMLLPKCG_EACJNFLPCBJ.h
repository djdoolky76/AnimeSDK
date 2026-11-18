#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NapRenderer;
namespace NPCCrowd::Avatar { class PartRendererOverrideInfo; }

#define NLDDMLLPKCG_EACJNFLPCBJ_NJMGAPFILLD_OFFSET UNITYSDK_OFFSET(0x10D82B10)
#define NLDDMLLPKCG_EACJNFLPCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10D82B00)

inline static constexpr unsigned int NLDDMLLPKCG_EACJNFLPCBJ_TypeDefinitionIndex = 81381;

class NLDDMLLPKCG_EACJNFLPCBJ : public ::System::Object
{
public:
	::NPCCrowd::Avatar::PartRendererOverrideInfo* BCBIGCNJNMA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EACJNFLPCBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean NJMGAPFILLD(::NapRenderer* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRenderer*))((::PBYTE)hIl2Cpp + NLDDMLLPKCG_EACJNFLPCBJ_NJMGAPFILLD_OFFSET))(this, HAAEBCOBKFF);
	}
};

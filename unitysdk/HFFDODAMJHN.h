#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemMeta.h"

#define HFFDODAMJHN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A44610)

inline static constexpr unsigned int HFFDODAMJHN_TypeDefinitionIndex = 84286;

class HFFDODAMJHN : public ::Nap::NapECS::EcsSystemMeta
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFDODAMJHN__CTOR_OFFSET))(this);
	}
};

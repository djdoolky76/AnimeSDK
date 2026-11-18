#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA;
class KBDDJLBBJGN;

#define DMHOLJNNCJA_JMFHBKLEMHD_KDDEJLAKOGM_OFFSET UNITYSDK_OFFSET(0x1A1F8ED0)
#define DMHOLJNNCJA_JMFHBKLEMHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F8EC0)

inline static constexpr unsigned int DMHOLJNNCJA_JMFHBKLEMHD_TypeDefinitionIndex = 46951;

class DMHOLJNNCJA_JMFHBKLEMHD : public ::System::Object
{
public:
	::DMHOLJNNCJA* KLHPEBKNIFB; // 0x10
	::KBDDJLBBJGN* GLHOHNAFMIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_JMFHBKLEMHD__CTOR_OFFSET))(this);
	}

	::System::Void KDDEJLAKOGM(::System::Int32 KCNOHOOPNAH, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_JMFHBKLEMHD_KDDEJLAKOGM_OFFSET))(this, KCNOHOOPNAH, BIOGEIHKABE);
	}
};

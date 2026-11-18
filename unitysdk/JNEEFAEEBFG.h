#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBCOCIIGAOF.h"
#include "unitysdk/System/Object.h"

class PGANGLOKKOC;
namespace System { class Action; }

#define JNEEFAEEBFG_IJIBCMMNKKH_OFFSET UNITYSDK_OFFSET(0x14FC4120)
#define JNEEFAEEBFG_IPEPFHNDCDG_OFFSET UNITYSDK_OFFSET(0x14FC4140)
#define JNEEFAEEBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC4110)

inline static constexpr unsigned int JNEEFAEEBFG_TypeDefinitionIndex = 73908;

class JNEEFAEEBFG : public ::System::Object
{
public:
	::System::Action* ILAALNIEPKK; // 0x10
	::PGANGLOKKOC* DEKJDEPKKLH; // 0x18
	::System::UInt32 NJBALIKDOCA; // 0x20
	::System::Boolean DBBIDCBDBDB; // 0x24
	::System::Boolean GFNLLIJJCBA; // 0x25
	::System::Boolean IFGKLOCMDEL; // 0x26
	::System::Boolean LIEJIGMGGOL; // 0x27

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEFAEEBFG__CTOR_OFFSET))(this);
	}

	::LBCOCIIGAOF IJIBCMMNKKH()
	{
		return ((::LBCOCIIGAOF(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEFAEEBFG_IJIBCMMNKKH_OFFSET))(this);
	}

	::System::Int32 IPEPFHNDCDG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEEFAEEBFG_IPEPFHNDCDG_OFFSET))(this);
	}
};

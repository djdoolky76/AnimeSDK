#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGHNKKOFJBA.h"
#include "unitysdk/System/Object.h"

class NKEGAKMNAGM;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define NKEGAKMNAGM_EJJKLEFGNIJ_OHGENOLKCCF_OFFSET UNITYSDK_OFFSET(0xFD06E60)
#define NKEGAKMNAGM_EJJKLEFGNIJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFD06E50)

inline static constexpr unsigned int NKEGAKMNAGM_EJJKLEFGNIJ_TypeDefinitionIndex = 82158;

class NKEGAKMNAGM_EJJKLEFGNIJ : public ::System::Object
{
public:
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* PLCBINNKMAM; // 0x18
	::CGHNKKOFJBA HICJKOGKLOK; // 0x20
	::System::String* OIAAGKHNNEP; // 0x40
	::System::Int32 MJGHICEDDMB; // 0x48
	::System::Int32 LLDGAJNCFLH; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_EJJKLEFGNIJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OHGENOLKCCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_EJJKLEFGNIJ_OHGENOLKCCF_OFFSET))(this);
	}
};

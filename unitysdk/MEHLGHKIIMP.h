#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class ENGKPGFGGLM;
class IFLPGOKHDJI;

#define MEHLGHKIIMP_AKBGPMFIDPG_OFFSET UNITYSDK_OFFSET(0x12D57900)
#define MEHLGHKIIMP_CENFPCGAPKE_OFFSET UNITYSDK_OFFSET(0x12D57A90)

inline static constexpr unsigned int MEHLGHKIIMP_TypeDefinitionIndex = 74597;

class MEHLGHKIIMP : public ::System::Object
{
public:
	static ::System::Void AKBGPMFIDPG(::IFLPGOKHDJI* MHPNGBGGMMN, ::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::IFLPGOKHDJI*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MEHLGHKIIMP_AKBGPMFIDPG_OFFSET))(MHPNGBGGMMN, FFNKDGGHBPP);
	}

	static ::System::Void CENFPCGAPKE(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MEHLGHKIIMP_CENFPCGAPKE_OFFSET))(BKBGPKNGNMF);
	}
};

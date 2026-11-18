#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class EIFBDMCNKAF;
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define EIFBDMCNKAF_OBCJOLHCGLE_EPEDOBOELAN_OFFSET UNITYSDK_OFFSET(0x1063E440)
#define EIFBDMCNKAF_OBCJOLHCGLE_NPJMFJFEDGK_OFFSET UNITYSDK_OFFSET(0x1063E230)
#define EIFBDMCNKAF_OBCJOLHCGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1063E220)

inline static constexpr unsigned int EIFBDMCNKAF_OBCJOLHCGLE_TypeDefinitionIndex = 45413;

class EIFBDMCNKAF_OBCJOLHCGLE : public ::System::Object
{
public:
	::EIFBDMCNKAF* KLHPEBKNIFB; // 0x10
	::System::String* BCPPCELDALM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_OBCJOLHCGLE__CTOR_OFFSET))(this);
	}

	::System::Void NPJMFJFEDGK(::System::String* MCOHLHMKLIP, ::miHoYoEmotion::SequenceBakeData* KMCDAJEPMDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::miHoYoEmotion::SequenceBakeData*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_OBCJOLHCGLE_NPJMFJFEDGK_OFFSET))(this, MCOHLHMKLIP, KMCDAJEPMDE);
	}

	::System::Void EPEDOBOELAN(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_OBCJOLHCGLE_EPEDOBOELAN_OFFSET))(this, NGLKIKLLLFL, PIIPCLCCOIG);
	}
};

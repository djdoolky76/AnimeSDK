#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MACLIDNIBBE;
namespace System { class String; }

#define FBKBCBHKNPD_ECODAPAFGDA_OFFSET UNITYSDK_OFFSET(0x18A67F20)
#define FBKBCBHKNPD_KMNBFGBNCFF_OFFSET UNITYSDK_OFFSET(0x18A68250)

inline static constexpr unsigned int FBKBCBHKNPD_TypeDefinitionIndex = 8195;

class FBKBCBHKNPD : public ::System::Object
{
public:
	static ::MACLIDNIBBE* ECODAPAFGDA(::System::String* PPKJBDEOJGB, ::Il2CppArray<::MACLIDNIBBE*>* HBEPDMIABKM)
	{
		return ((::MACLIDNIBBE*(*)(::System::String*, ::Il2CppArray<::MACLIDNIBBE*>*))((::PBYTE)hIl2Cpp + FBKBCBHKNPD_ECODAPAFGDA_OFFSET))(PPKJBDEOJGB, HBEPDMIABKM);
	}

	static ::MACLIDNIBBE* KMNBFGBNCFF(::System::String* PPKJBDEOJGB, ::Il2CppArray<::MACLIDNIBBE*>* HBEPDMIABKM)
	{
		return ((::MACLIDNIBBE*(*)(::System::String*, ::Il2CppArray<::MACLIDNIBBE*>*))((::PBYTE)hIl2Cpp + FBKBCBHKNPD_KMNBFGBNCFF_OFFSET))(PPKJBDEOJGB, HBEPDMIABKM);
	}
};

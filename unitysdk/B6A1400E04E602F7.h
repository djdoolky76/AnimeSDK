#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B6A1400E04E602F7_B9FF4ED02C37D745_1_OFFSET UNITYSDK_OFFSET(0x2A410B0)
#define B6A1400E04E602F7_B9FF4ED02C37D745_2_OFFSET UNITYSDK_OFFSET(0x2A412B0)
#define B6A1400E04E602F7_B9FF4ED02C37D745_OFFSET UNITYSDK_OFFSET(0x2A41030)

inline static constexpr unsigned int B6A1400E04E602F7_TypeDefinitionIndex = 18309;

class B6A1400E04E602F7 : public ::System::Object
{
public:
	static ::System::Single B9FF4ED02C37D745(::System::Single AE65E9016B15A38A, ::System::Single ED880DAD2127962C, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B6A1400E04E602F7_B9FF4ED02C37D745_OFFSET))(AE65E9016B15A38A, ED880DAD2127962C, EB5670302F34D4B7);
	}

	static ::UnityEngine::Vector3 B9FF4ED02C37D745_1(::UnityEngine::Vector3 AE65E9016B15A38A, ::UnityEngine::Vector3 ED880DAD2127962C, ::System::Single EB5670302F34D4B7)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + B6A1400E04E602F7_B9FF4ED02C37D745_1_OFFSET))(AE65E9016B15A38A, ED880DAD2127962C, EB5670302F34D4B7);
	}

	static ::UnityEngine::Vector3 B9FF4ED02C37D745_2(::UnityEngine::Vector3 AE65E9016B15A38A, ::System::Single ED880DAD2127962C, ::System::Single EB5670302F34D4B7)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B6A1400E04E602F7_B9FF4ED02C37D745_2_OFFSET))(AE65E9016B15A38A, ED880DAD2127962C, EB5670302F34D4B7);
	}
};

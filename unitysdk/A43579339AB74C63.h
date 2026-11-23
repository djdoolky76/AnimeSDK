#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define A43579339AB74C63_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28C0500)
#define A43579339AB74C63__CTOR_OFFSET UNITYSDK_OFFSET(0x28C0640)

inline static constexpr unsigned int A43579339AB74C63_TypeDefinitionIndex = 16262;

class A43579339AB74C63 : public ::ABEBA93AD61764EF
{
public:
	::System::Single A33BC03BBA4AA66A; // 0x18
	::System::Single ED48B47361BFA461; // 0x1C
	::System::Single B267CD05A2A8C576; // 0x20
	::UnityEngine::Vector2 B4A8E6686414B98E; // 0x24
	::UnityEngine::Vector2 E82DAC67EBCD57D4; // 0x2C
	::System::Single FC5A49EB86E199CD; // 0x34
	::System::Single A431A978843D4BEE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A43579339AB74C63__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::A43579339AB74C63* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A43579339AB74C63*))((::PBYTE)hIl2Cpp + A43579339AB74C63_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};

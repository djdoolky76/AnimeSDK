#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AD7D660EB6AE8BB3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B59361A6B64718F5_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3806280)
#define B59361A6B64718F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B59361A6B64718F5_TypeDefinitionIndex = 17830;

class B59361A6B64718F5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AD7D660EB6AE8BB3*>* B734528AD9ED0988; // 0x10
	::Il2CppArray<::UnityEngine::A32676FCB736C8E8>* F6EE842DCB176422; // 0x18
	::Il2CppArray<::System::Single>* FB16544F544A55AA; // 0x20
	::Il2CppArray<::UnityEngine::A32676FCB736C8E8>* F8DA5C462DCF7221; // 0x28
	::Il2CppArray<::UnityEngine::Vector3>* F00496C0AE8C5E1F; // 0x30
	::Il2CppArray<::System::Int32>* EC99FE8B0E661F05; // 0x38
	::Il2CppArray<::System::Single>* A8E913901EA9F614; // 0x40
	::Il2CppArray<::System::Single>* E45D970B5A499803; // 0x48
	::Il2CppArray<::System::Int32>* B410B0D9260A189A; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B59361A6B64718F5__CTOR_OFFSET))(this);
	}

	::System::Boolean E83F6F358E73B362(::B59361A6B64718F5* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::B59361A6B64718F5*))((::PBYTE)hIl2Cpp + B59361A6B64718F5_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}
};

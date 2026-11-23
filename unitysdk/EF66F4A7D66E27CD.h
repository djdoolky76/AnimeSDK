#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC5272709773EA72.h"
#include "unitysdk/E2734428F0D1EA67.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Terrain; }

#define EF66F4A7D66E27CD_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x27FB820)
#define EF66F4A7D66E27CD_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x27FB820)
#define EF66F4A7D66E27CD__CTOR_OFFSET UNITYSDK_OFFSET(0x27FB8B0)

inline static constexpr unsigned int EF66F4A7D66E27CD_TypeDefinitionIndex = 16761;

class EF66F4A7D66E27CD : public ::System::Object
{
public:
	::ABC::Collections::Generic::SortedList_2<::AC5272709773EA72, ::System::Int32>* B3B3C2D6475D1218; // 0x10
	::ABC::Collections::Generic::SortedList_2<::AC5272709773EA72, ::System::Int32>* A692CC91D8CA6F8C; // 0x18
	::ABC::Collections::Generic::SortedList_2<::AC5272709773EA72, ::System::Int32>* AB5BCF204A2DA80A; // 0x20
	::ABC::Collections::Generic::SortedList_2<::AC5272709773EA72, ::System::Int32>* BA55DA57ABE356B8; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* BAE6CFC37DE62F09; // 0x30
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Terrain*, ::E2734428F0D1EA67>* FDCD4164ABD002FD; // 0x38
	::System::Boolean B2A55912ED18A610; // 0x40
	::System::Boolean AED1A3DEA15FF172; // 0x41
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 BE439D1AD6E190D3; // 0x44

	::System::Void FF0997C535275E60()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF66F4A7D66E27CD_FF0997C535275E60_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF66F4A7D66E27CD__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF66F4A7D66E27CD_A765A1D14770A303_OFFSET))(this);
	}
};

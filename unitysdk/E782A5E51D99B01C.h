#pragma once
#include "unitysdk/unitysdk.h"

class FA39E56BF7F72C6A;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class RectTransform; }

#define E782A5E51D99B01C_A2DD6D74CF9E01AE_OFFSET UNITYSDK_OFFSET(0x20294B0)
#define E782A5E51D99B01C_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x2029300)
#define E782A5E51D99B01C_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x2029530)
#define E782A5E51D99B01C__CTOR_OFFSET UNITYSDK_OFFSET(0x2029610)

inline static constexpr unsigned int E782A5E51D99B01C_TypeDefinitionIndex = 8277;

class E782A5E51D99B01C
{
public:
	::ABC::UI::MonoButton* F23FB88F2499C93B; // 0x90
	::System::Int32 E34F9A34ECE7C571; // 0x98
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A4177C401C9536A0; // 0xA8
	::UnityEngine::RectTransform* B7B4E9314E1DD999; // 0xB0

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E782A5E51D99B01C_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E782A5E51D99B01C__CTOR_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::FA39E56BF7F72C6A* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::PVOID, ::FA39E56BF7F72C6A*))((::PBYTE)hIl2Cpp + E782A5E51D99B01C_BFCEE111278C4278_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Void A2DD6D74CF9E01AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E782A5E51D99B01C_A2DD6D74CF9E01AE_OFFSET))(this);
	}
};

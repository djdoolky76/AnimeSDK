#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A916C3A9658A83A2.h"

class A2F46DB802C34BC7;
namespace ABC::Common { class MonoChsPieceStatisticItem; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B010FAAB50DB5B98_BFA52DABEDC6252C_OFFSET UNITYSDK_OFFSET(0x1F97630)

inline static constexpr unsigned int B010FAAB50DB5B98_TypeDefinitionIndex = 7961;

class B010FAAB50DB5B98 : public ::A916C3A9658A83A2
{
public:
	::ABC::UI::MonoLocalizedTmp* A41E314CFC942D1C; // 0x48
	::ABC::UI::MonoPrefabLoader* FA5B45289A1F6A36; // 0x50
	::ABC::Common::MonoChsPieceStatisticItem* E8B5B110234859BB; // 0x58
	::System::Collections::Generic::List_1<::A2F46DB802C34BC7*>* FD6D28B9205B220E; // 0x60

	::System::Void BFA52DABEDC6252C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B010FAAB50DB5B98_BFA52DABEDC6252C_OFFSET))(this);
	}
};

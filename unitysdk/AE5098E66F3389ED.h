#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B4DCD2F676F6053E.h"
#include "unitysdk/F47E488364890276/A73ADBA744982670.h"

class A04FB906869DCF3A;

#define AE5098E66F3389ED__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AE5098E66F3389ED_TypeDefinitionIndex = 7495;

class AE5098E66F3389ED : public ::E379DE61A548837D
{
public:
	::F47E488364890276::A73ADBA744982670 A2545CC3DC532C0C; // 0x38
	::System::Byte _padding0[0x4];
	::A04FB906869DCF3A* A95E58D0124DD380; // 0x40
	::E68AA4EB51923C98::B4DCD2F676F6053E BE29D1782D040DD3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE5098E66F3389ED__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/FB15B066A5E7656D.h"

class A35924EFAAABD206;

#define FB09BE9FFAB046ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE44E0)

inline static constexpr unsigned int FB09BE9FFAB046ED_TypeDefinitionIndex = 257;

class FB09BE9FFAB046ED : public ::E379DE61A548837D
{
public:
	::FB15B066A5E7656D BC5AE20BE2654AAC; // 0x38
	::A35924EFAAABD206* E55F35A687A78C7A; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB09BE9FFAB046ED__CTOR_OFFSET))(this);
	}
};

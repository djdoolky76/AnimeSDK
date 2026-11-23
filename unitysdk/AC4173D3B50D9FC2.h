#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class F9818E6D8693D479;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AC4173D3B50D9FC2__CTOR_OFFSET UNITYSDK_OFFSET(0x17896A0)

inline static constexpr unsigned int AC4173D3B50D9FC2_TypeDefinitionIndex = 109;

class AC4173D3B50D9FC2 : public ::E379DE61A548837D
{
public:
	::System::UInt32 E08C8950EE4A2B6F; // 0x38
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::F9818E6D8693D479*>* F21FB9E3F2F4FFFD; // 0x40
	::System::Int32 FB6ED45A7F3281B9; // 0x48
	::System::Single BACA0AAAF10A3EF8; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC4173D3B50D9FC2__CTOR_OFFSET))(this);
	}
};

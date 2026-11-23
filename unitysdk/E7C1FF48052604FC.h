#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class FB0D64B103BB2404;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E7C1FF48052604FC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E7C1FF48052604FC_TypeDefinitionIndex = 3133;

class E7C1FF48052604FC : public ::E379DE61A548837D
{
public:
	::System::Int32 BB574549244B9909; // 0x38
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::FB0D64B103BB2404*>* B9110F9E987A07A5; // 0x40
	::FB0D64B103BB2404* B7A035FB5F190237; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7C1FF48052604FC__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define JKFDKOLCCBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7D2710)

inline static constexpr unsigned int JKFDKOLCCBE_TypeDefinitionIndex = 69282;

struct alignas(8) JKFDKOLCCBE
{
	::Unity::Collections::NativeArray_1<::System::Single> KNJKBAKMCEP; // 0x10
	::System::Byte _padding0[0x8];
	::System::Int32 MKECDCJJFLN; // 0x20
	::System::Byte _padding1[0x4];
	::Unity::Collections::NativeArray_1<::System::Single> PANDKDPDAHF; // 0x28
	::System::Byte _padding2[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> OOHAMCOPFGA; // 0x38
	::System::Byte _padding3[0x8];
	::System::Int32 PGNMFCOGJNP; // 0x48
	::System::Int32 OBNNNGAPCDM; // 0x4C
	::Unity::Collections::NativeArray_1<::System::Single> PGAIKPAAHOM; // 0x50
	::System::Byte _padding4[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> IFKGLHKGMPE; // 0x60
	::System::Byte _padding5[0x8];
	::System::Int32 AOPEAJHGKBJ; // 0x70
	::System::Int32 DLAHJLEMLOH; // 0x74
	::System::Single PGGHGJFPIJO; // 0x78
	::System::Single GOFLAPODIIK; // 0x7C
	::System::Single MHNHPHHBMIF; // 0x80
	::System::Single EIGMLBGLCAM; // 0x84
	::System::Single BBMCBHPLGFG; // 0x88
	::System::Single MPJNNFOFPNG; // 0x8C
	::System::Single JAKMFOMLDHA; // 0x90

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFDKOLCCBE_DISPOSE_OFFSET))(this);
	}
};

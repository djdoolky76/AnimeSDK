#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace System { class Object; }

#define CLFPDHFOBAH_GBIMGAMHAIC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEBC50)

inline static constexpr unsigned int CLFPDHFOBAH_GBIMGAMHAIC_TypeDefinitionIndex = 47130;

	struct alignas(8) CLFPDHFOBAH_GBIMGAMHAIC
	{
		::Unity::Collections::NativeArray_1<::System::Object*> JOMPKBLKKKH; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> LFJIKJGMAAK; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> FKAFLBNBCBG; // 0x30
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLFPDHFOBAH_GBIMGAMHAIC_EXECUTE_OFFSET))(this, a1);
		}

	};

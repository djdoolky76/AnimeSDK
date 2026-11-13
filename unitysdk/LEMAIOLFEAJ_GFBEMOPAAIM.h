#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEMAIOLFEAJ_GFBEMOPAAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x18C39E40)

inline static constexpr unsigned int LEMAIOLFEAJ_GFBEMOPAAIM_TypeDefinitionIndex = 79915;

	class LEMAIOLFEAJ_GFBEMOPAAIM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DDHBFINONBA; // 0x10
		::System::UInt32 KINCCGNDOJN; // 0x18
		::System::UInt32 IMHNADLKBHH; // 0x1C
		::System::UInt32 OGBEHKGJFAF; // 0x20
		::System::UInt32 EBEFHAFLFFA; // 0x24
		::System::UInt32 HFIBLHAFONM; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 OJLBIJAJMMJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMAIOLFEAJ_GFBEMOPAAIM_CTOR_OFFSET))(this);
		}

	};

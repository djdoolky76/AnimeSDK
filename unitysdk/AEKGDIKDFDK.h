#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJKLCFNAHBH;
namespace System { class String; }

#define AEKGDIKDFDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEBD20)
#define AEKGDIKDFDK_EIJBJAOAJHG_OFFSET UNITYSDK_OFFSET(0x1EBEBCA0)
#define AEKGDIKDFDK_HJNHPDOLMJA_OFFSET UNITYSDK_OFFSET(0x1EBEBAE0)
#define AEKGDIKDFDK_SET_OFFSET UNITYSDK_OFFSET(0x1EBEB950)

inline static constexpr unsigned int AEKGDIKDFDK_TypeDefinitionIndex = 35214;

	class AEKGDIKDFDK : public ::System::Object
	{
	public:
		::System::UInt32 NCKKCDFPCMF; // 0x10
		::System::UInt32 GILCAMPLLLN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKGDIKDFDK_CTOR_OFFSET))(this);
		}

		::System::Void Set(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEKGDIKDFDK_SET_OFFSET))(this, a1);
		}

		static ::System::UInt32 HJNHPDOLMJA(::AJKLCFNAHBH* a1)
		{
			return ((::System::UInt32(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + AEKGDIKDFDK_HJNHPDOLMJA_OFFSET))(a1);
		}

		static ::System::UInt32 EIJBJAOAJHG(::AJKLCFNAHBH* a1)
		{
			return ((::System::UInt32(*)(::AJKLCFNAHBH*))((::PBYTE)hIl2Cpp + AEKGDIKDFDK_EIJBJAOAJHG_OFFSET))(a1);
		}

	};

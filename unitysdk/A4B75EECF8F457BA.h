#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F27576358092BC4C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A4B75EECF8F457BA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24560D0)
#define A4B75EECF8F457BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4B75EECF8F457BA_TypeDefinitionIndex = 2482;

class A4B75EECF8F457BA : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::F27576358092BC4C*>* E143D0D5D56BE383; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B75EECF8F457BA__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A4B75EECF8F457BA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A4B75EECF8F457BA*&))((::PBYTE)hIl2Cpp + A4B75EECF8F457BA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_COMMON_BITARRAY_APPENDBITARRAY_OFFSET UNITYSDK_OFFSET(0x17A704D0)
#define ZXING_COMMON_BITARRAY_APPENDBITS_OFFSET UNITYSDK_OFFSET(0x17A695F0)
#define ZXING_COMMON_BITARRAY_APPENDBIT_OFFSET UNITYSDK_OFFSET(0x17A70460)
#define ZXING_COMMON_BITARRAY_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A70EC0)
#define ZXING_COMMON_BITARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A70420)
#define ZXING_COMMON_BITARRAY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A70280)
#define ZXING_COMMON_BITARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0x17A6AD30)
#define ZXING_COMMON_BITARRAY_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x17A70340)
#define ZXING_COMMON_BITARRAY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A70970)
#define ZXING_COMMON_BITARRAY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A70A30)
#define ZXING_COMMON_BITARRAY_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x17A704C0)
#define ZXING_COMMON_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17A6A5D0)
#define ZXING_COMMON_BITARRAY_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x17A70270)
#define ZXING_COMMON_BITARRAY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x17A70260)
#define ZXING_COMMON_BITARRAY_MAKEARRAY_OFFSET UNITYSDK_OFFSET(0x17A70320)
#define ZXING_COMMON_BITARRAY_SETBULK_OFFSET UNITYSDK_OFFSET(0x17A703F0)
#define ZXING_COMMON_BITARRAY_TOBYTES_OFFSET UNITYSDK_OFFSET(0x17A706F0)
#define ZXING_COMMON_BITARRAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A70AE0)
#define ZXING_COMMON_BITARRAY_XOR_OFFSET UNITYSDK_OFFSET(0x17A70580)

namespace ZXing::Common
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 6991;

	class BitArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* bits; // 0x10
		::System::Int32 size; // 0x18
		static ::Il2CppArray<::System::Int32>** StaticGet__lookup()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("ZXing.Common", "BitArray")->GetStaticField(0x29AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_CCTOR_OFFSET))();
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 get_SizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void ensureCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::Void setBulk(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_SETBULK_OFFSET))(this, a1, a2);
		}

		::System::Void clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_CLEAR_OFFSET))(this);
		}

		::System::Void appendBit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBIT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Array()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_ARRAY_OFFSET))(this);
		}

		::System::Void appendBits(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBITS_OFFSET))(this, a1, a2);
		}

		::System::Void appendBitArray(::ZXing::Common::BitArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBITARRAY_OFFSET))(this, a1);
		}

		::System::Void xor(::ZXing::Common::BitArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_XOR_OFFSET))(this, a1);
		}

		::System::Void toBytes(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_TOBYTES_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Int32>* makeArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_MAKEARRAY_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_TOSTRING_OFFSET))(this);
		}

	};
}

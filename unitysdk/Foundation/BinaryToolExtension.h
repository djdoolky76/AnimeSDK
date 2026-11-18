#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace System { class String; }

#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_1_OFFSET UNITYSDK_OFFSET(0x1EE92260)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_2_OFFSET UNITYSDK_OFFSET(0x1EE92420)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_3_OFFSET UNITYSDK_OFFSET(0x1EE925D0)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_4_OFFSET UNITYSDK_OFFSET(0x1EE92790)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_5_OFFSET UNITYSDK_OFFSET(0x1EE920C0)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_6_OFFSET UNITYSDK_OFFSET(0x1EE92940)
#define FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE91DF0)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_1_OFFSET UNITYSDK_OFFSET(0x1EE92190)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_2_OFFSET UNITYSDK_OFFSET(0x1EE92340)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_3_OFFSET UNITYSDK_OFFSET(0x1EE924F0)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_4_OFFSET UNITYSDK_OFFSET(0x1EE926B0)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_5_OFFSET UNITYSDK_OFFSET(0x1EE91D20)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_6_OFFSET UNITYSDK_OFFSET(0x1EE92870)
#define FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1EE91A30)

namespace Foundation
{
	inline static constexpr unsigned int BinaryToolExtension_TypeDefinitionIndex = 8077;

	class BinaryToolExtension : public ::System::Object
	{
	public:
		static ::System::Boolean ToBinary(::Foundation::ByteArray* byteArray, ::System::String* val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary(::Foundation::ByteArray* byteArray, ::System::String*& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_1(::Foundation::ByteArray* byteArray, ::System::Byte val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_1_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_1(::Foundation::ByteArray* byteArray, ::System::Byte& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Byte&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_1_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_2(::Foundation::ByteArray* byteArray, ::System::Boolean val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_2_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_2(::Foundation::ByteArray* byteArray, ::System::Boolean& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_2_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_3(::Foundation::ByteArray* byteArray, ::System::Double val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_3_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_3(::Foundation::ByteArray* byteArray, ::System::Double& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Double&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_3_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_4(::Foundation::ByteArray* byteArray, ::System::Single val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_4_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_4(::Foundation::ByteArray* byteArray, ::System::Single& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Single&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_4_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32 val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_5_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_5_OFFSET))(byteArray, val);
		}

		static ::System::Void ToBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32 val)
		{
			return ((::System::Void(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_TOBINARY_6_OFFSET))(byteArray, val);
		}

		static ::System::Boolean FromBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32& val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOLEXTENSION_FROMBINARY_6_OFFSET))(byteArray, val);
		}
	};
}

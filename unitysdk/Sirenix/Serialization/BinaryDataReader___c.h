#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F38C0C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F38C100)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_0_OFFSET UNITYSDK_OFFSET(0x1F38C110)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_1_OFFSET UNITYSDK_OFFSET(0x1F38C1C0)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_2_OFFSET UNITYSDK_OFFSET(0x1F38C200)
#define SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_3_OFFSET UNITYSDK_OFFSET(0x1F38C240)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BinaryDataReader___c_TypeDefinitionIndex = 7429;

	class BinaryDataReader___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BinaryDataReader___c_TypeDefinitionIndex)->GetStaticField(0x6240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C__CTOR_OFFSET))(this);
		}

		::System::Char __cctor_b__71_0(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Char(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_0_OFFSET))(this, b, i);
		}

		::System::Byte __cctor_b__71_1(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Byte(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_1_OFFSET))(this, b, i);
		}

		::System::SByte __cctor_b__71_2(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::SByte(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_2_OFFSET))(this, b, i);
		}

		::System::Boolean __cctor_b__71_3(::Il2CppArray<::System::Byte>* b, ::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_BINARYDATAREADER___C___CCTOR_B__71_3_OFFSET))(this, b, i);
		}
	};
}

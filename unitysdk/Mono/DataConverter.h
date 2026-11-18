#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono { class DataConverter_PackContext; }
namespace System { class String; }
namespace System::Collections { class IList; }

#define MONO_DATACONVERTER_ALIGN_OFFSET UNITYSDK_OFFSET(0x1E24F5A0)
#define MONO_DATACONVERTER_CHECK_OFFSET UNITYSDK_OFFSET(0x1E252970)
#define MONO_DATACONVERTER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1E24F1B0)
#define MONO_DATACONVERTER_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1E24F220)
#define MONO_DATACONVERTER_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1E24F290)
#define MONO_DATACONVERTER_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1E24F300)
#define MONO_DATACONVERTER_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1E24F370)
#define MONO_DATACONVERTER_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1E24F3E0)
#define MONO_DATACONVERTER_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x1E24F450)
#define MONO_DATACONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E24F140)
#define MONO_DATACONVERTER_GET_BIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1E24F530)
#define MONO_DATACONVERTER_GET_LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1E24F4C0)
#define MONO_DATACONVERTER_PACKONE_OFFSET UNITYSDK_OFFSET(0x1E24F7C0)
#define MONO_DATACONVERTER_PACK_OFFSET UNITYSDK_OFFSET(0x1E24F5C0)
#define MONO_DATACONVERTER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1E251270)
#define MONO_DATACONVERTER_UNPACK_OFFSET UNITYSDK_OFFSET(0x1E251310)
#define MONO_DATACONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E252A30)
#define MONO_DATACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E252A20)

namespace Mono
{
	inline static constexpr unsigned int DataConverter_TypeDefinitionIndex = 3;

	class DataConverter : public ::System::Object
	{
	public:
		static ::Mono::DataConverter** StaticGet_CopyConv()
		{
			return (::Mono::DataConverter**)Il2CppClass::FromTypeDefinitionIndex(DataConverter_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::Mono::DataConverter** StaticGet_SwapConv()
		{
			return (::Mono::DataConverter**)Il2CppClass::FromTypeDefinitionIndex(DataConverter_TypeDefinitionIndex)->GetStaticField(0x998);
		}
		static ::System::Boolean* StaticGet_IsLittleEndian()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DataConverter_TypeDefinitionIndex)->GetStaticField(0x210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_DATACONVERTER__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::Double value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_1(::System::Single value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_1_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_2(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_2_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_3(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_3_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_4(::System::Int16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_4_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_5(::System::UInt16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_5_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_6(::System::UInt32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_6_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetBytes_7(::System::UInt64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GETBYTES_7_OFFSET))(this, value);
		}

		static ::Mono::DataConverter* get_LittleEndian()
		{
			return ((::Mono::DataConverter*(*)())((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GET_LITTLEENDIAN_OFFSET))();
		}

		static ::Mono::DataConverter* get_BigEndian()
		{
			return ((::Mono::DataConverter*(*)())((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_GET_BIGENDIAN_OFFSET))();
		}

		static ::System::Int32 Align(::System::Int32 current, ::System::Int32 align)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_ALIGN_OFFSET))(current, align);
		}

		static ::Il2CppArray<::System::Byte>* Pack(::System::String* description, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PACK_OFFSET))(description, args);
		}

		static ::System::Boolean PackOne(::Mono::DataConverter_PackContext* b, ::System::Object* oarg)
		{
			return ((::System::Boolean(*)(::Mono::DataConverter_PackContext*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PACKONE_OFFSET))(b, oarg);
		}

		static ::System::Boolean Prepare(::Il2CppArray<::System::Byte>* buffer, ::System::Int32& idx, ::System::Int32 size, ::System::Boolean& align)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32&, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PREPARE_OFFSET))(buffer, idx, size, align);
		}

		static ::System::Collections::IList* Unpack(::System::String* description, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 startIndex)
		{
			return ((::System::Collections::IList*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_UNPACK_OFFSET))(description, buffer, startIndex);
		}

		::System::Void Check(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_CHECK_OFFSET))(this, dest, destIdx, size);
		}
	};
}

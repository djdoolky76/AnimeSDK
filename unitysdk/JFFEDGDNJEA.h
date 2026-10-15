#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFFEDGDNJEA;
class MNCBEDBDDHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFFEDGDNJEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72A060)
#define JFFEDGDNJEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72A300)
#define JFFEDGDNJEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E729A40)
#define JFFEDGDNJEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7299D0)
#define JFFEDGDNJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7299C0)
#define JFFEDGDNJEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E729C50)
#define JFFEDGDNJEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E729AE0)
#define JFFEDGDNJEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E729F20)
#define JFFEDGDNJEA_GMJEGCOINPI_OFFSET UNITYSDK_OFFSET(0x1E729AD0)
#define JFFEDGDNJEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E729980)
#define JFFEDGDNJEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72A150)
#define JFFEDGDNJEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72A0C0)
#define JFFEDGDNJEA_OOGPNDJGDKK_OFFSET UNITYSDK_OFFSET(0x1E729AC0)
#define JFFEDGDNJEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7299B0)
#define JFFEDGDNJEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E729F70)
#define JFFEDGDNJEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E729FD0)

inline static constexpr unsigned int JFFEDGDNJEA_TypeDefinitionIndex = 30247;

	class JFFEDGDNJEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MNCBEDBDDHL* IBBKFMPDFJN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFFEDGDNJEA")->GetStaticField(0x5F9A0);
		}

		// static const ::System::Object IHKJJNEIEGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFFEDGDNJEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFFEDGDNJEA*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFFEDGDNJEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFFEDGDNJEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFFEDGDNJEA* Clone()
		{
			return ((::JFFEDGDNJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_CLONE_OFFSET))(this);
		}

		::MNCBEDBDDHL* OOGPNDJGDKK()
		{
			return ((::MNCBEDBDDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_OOGPNDJGDKK_OFFSET))(this);
		}

		::System::Void GMJEGCOINPI(::MNCBEDBDDHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCBEDBDDHL*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_GMJEGCOINPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFFEDGDNJEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFFEDGDNJEA*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFFEDGDNJEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFFEDGDNJEA*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFFEDGDNJEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

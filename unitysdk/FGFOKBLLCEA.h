#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFOKBLLCEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGFOKBLLCEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E34F810)
#define FGFOKBLLCEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34FA70)
#define FGFOKBLLCEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E34F3D0)
#define FGFOKBLLCEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E34F340)
#define FGFOKBLLCEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34F2F0)
#define FGFOKBLLCEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E34F500)
#define FGFOKBLLCEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E34F410)
#define FGFOKBLLCEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E34F5F0)
#define FGFOKBLLCEA_HODNIKDDDNH_OFFSET UNITYSDK_OFFSET(0x1E34F400)
#define FGFOKBLLCEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E34F2B0)
#define FGFOKBLLCEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E34F8D0)
#define FGFOKBLLCEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E34F880)
#define FGFOKBLLCEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E34F2E0)
#define FGFOKBLLCEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E34F730)
#define FGFOKBLLCEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E34F790)

inline static constexpr unsigned int FGFOKBLLCEA_TypeDefinitionIndex = 31535;

	class FGFOKBLLCEA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* PPCENIMDIMG; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_FONDDDOIJHI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)UnitySDK::FromName("", "FGFOKBLLCEA")->GetStaticField(0x55410);
		}

		static ::Google::Protobuf::MessageParser_1<::FGFOKBLLCEA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGFOKBLLCEA*>**)UnitySDK::FromName("", "FGFOKBLLCEA")->GetStaticField(0x55418);
		}

		// static const ::System::Object BBFNEKKAAKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGFOKBLLCEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFOKBLLCEA*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFOKBLLCEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGFOKBLLCEA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGFOKBLLCEA*>*(*)())((::PBYTE)hIl2Cpp + FGFOKBLLCEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGFOKBLLCEA* Clone()
		{
			return ((::FGFOKBLLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* HODNIKDDDNH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_HODNIKDDDNH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGFOKBLLCEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGFOKBLLCEA*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGFOKBLLCEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGFOKBLLCEA*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGFOKBLLCEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

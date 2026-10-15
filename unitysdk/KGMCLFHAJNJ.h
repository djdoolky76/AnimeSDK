#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
class KGMCLFHAJNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGMCLFHAJNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83A560)
#define KGMCLFHAJNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83A860)
#define KGMCLFHAJNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83A0E0)
#define KGMCLFHAJNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83A030)
#define KGMCLFHAJNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E839FE0)
#define KGMCLFHAJNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83A2C0)
#define KGMCLFHAJNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83A140)
#define KGMCLFHAJNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83A3E0)
#define KGMCLFHAJNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E839F70)
#define KGMCLFHAJNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83A6A0)
#define KGMCLFHAJNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83A600)
#define KGMCLFHAJNJ_MKPKJGLDGMD_OFFSET UNITYSDK_OFFSET(0x1E83A130)
#define KGMCLFHAJNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E839FD0)
#define KGMCLFHAJNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83A450)
#define KGMCLFHAJNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83A4B0)

inline static constexpr unsigned int KGMCLFHAJNJ_TypeDefinitionIndex = 29220;

	class KGMCLFHAJNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>* GEKJALPHKDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_BIHJFMIEKBP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KGMCLFHAJNJ")->GetStaticField(0x161E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KGMCLFHAJNJ")->GetStaticField(0x161E8);
		}

		// static const ::System::Object CAODBGEEGDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGMCLFHAJNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMCLFHAJNJ*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGMCLFHAJNJ* Clone()
		{
			return ((::KGMCLFHAJNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>* MKPKJGLDGMD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AHKDPCIIELA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_MKPKJGLDGMD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGMCLFHAJNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGMCLFHAJNJ*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGMCLFHAJNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGMCLFHAJNJ*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGMCLFHAJNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

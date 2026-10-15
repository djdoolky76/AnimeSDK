#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
class ONFLANPGHHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CABBOOKAODO_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E052C40)
#define CABBOOKAODO_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E052C50)
#define CABBOOKAODO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E053270)
#define CABBOOKAODO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0536F0)
#define CABBOOKAODO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E052BF0)
#define CABBOOKAODO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E052B00)
#define CABBOOKAODO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E052AB0)
#define CABBOOKAODO_DIPKDPAHLKP_OFFSET UNITYSDK_OFFSET(0x1E052C70)
#define CABBOOKAODO_EPFDENEPLOL_OFFSET UNITYSDK_OFFSET(0x1E052C80)
#define CABBOOKAODO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E052DE0)
#define CABBOOKAODO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E052C90)
#define CABBOOKAODO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E052F90)
#define CABBOOKAODO_ICIPGIECHCC_OFFSET UNITYSDK_OFFSET(0x1E052C60)
#define CABBOOKAODO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E052A40)
#define CABBOOKAODO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E053550)
#define CABBOOKAODO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0533B0)
#define CABBOOKAODO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E052AA0)
#define CABBOOKAODO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0530A0)
#define CABBOOKAODO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E053100)

inline static constexpr unsigned int CABBOOKAODO_TypeDefinitionIndex = 32599;

	class CABBOOKAODO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ONFLANPGHHL* CILOCAKKIGN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJGFMICPCLP; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CABBOOKAODO")->GetStaticField(0x54C80);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IBOBFDAMEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CABBOOKAODO")->GetStaticField(0x54C88);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object MIOPFDLMJOH; // 0x0
		// static const ::System::Object AJPEEDNHODK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CABBOOKAODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABBOOKAODO*))((::PBYTE)hIl2Cpp + CABBOOKAODO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABBOOKAODO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CABBOOKAODO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CABBOOKAODO* Clone()
		{
			return ((::CABBOOKAODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABBOOKAODO_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::ONFLANPGHHL* ICIPGIECHCC()
		{
			return ((::ONFLANPGHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_ICIPGIECHCC_OFFSET))(this);
		}

		::System::Void DIPKDPAHLKP(::ONFLANPGHHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONFLANPGHHL*))((::PBYTE)hIl2Cpp + CABBOOKAODO_DIPKDPAHLKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPFDENEPLOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_EPFDENEPLOL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CABBOOKAODO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CABBOOKAODO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CABBOOKAODO*))((::PBYTE)hIl2Cpp + CABBOOKAODO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CABBOOKAODO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABBOOKAODO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CABBOOKAODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABBOOKAODO*))((::PBYTE)hIl2Cpp + CABBOOKAODO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CABBOOKAODO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

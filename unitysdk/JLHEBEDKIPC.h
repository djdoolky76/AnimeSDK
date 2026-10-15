#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHEBEDKIPC;
class PFCKBFLDHNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLHEBEDKIPC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E7786F0)
#define JLHEBEDKIPC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E778700)
#define JLHEBEDKIPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E778BE0)
#define JLHEBEDKIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E779010)
#define JLHEBEDKIPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E778690)
#define JLHEBEDKIPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7785D0)
#define JLHEBEDKIPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E778580)
#define JLHEBEDKIPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E778870)
#define JLHEBEDKIPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E778710)
#define JLHEBEDKIPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7786D0)
#define JLHEBEDKIPC_FECFONPAFOG_OFFSET UNITYSDK_OFFSET(0x1E7786E0)
#define JLHEBEDKIPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7789A0)
#define JLHEBEDKIPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E778540)
#define JLHEBEDKIPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E778E20)
#define JLHEBEDKIPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E778D70)
#define JLHEBEDKIPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7786C0)
#define JLHEBEDKIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E778570)
#define JLHEBEDKIPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E778A10)
#define JLHEBEDKIPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E778A70)

inline static constexpr unsigned int JLHEBEDKIPC_TypeDefinitionIndex = 32555;

	class JLHEBEDKIPC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PFCKBFLDHNI*>* CKBMLCDDIKG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_KANNMHILFGC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JLHEBEDKIPC")->GetStaticField(0x66820);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JLHEBEDKIPC")->GetStaticField(0x66828);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JFKFHHCPDGD; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLHEBEDKIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHEBEDKIPC*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHEBEDKIPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JLHEBEDKIPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLHEBEDKIPC* Clone()
		{
			return ((::JLHEBEDKIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PFCKBFLDHNI*>* FECFONPAFOG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PFCKBFLDHNI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_FECFONPAFOG_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLHEBEDKIPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLHEBEDKIPC*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLHEBEDKIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHEBEDKIPC*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLHEBEDKIPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

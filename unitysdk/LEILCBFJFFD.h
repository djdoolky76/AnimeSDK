#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
class LEILCBFJFFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEILCBFJFFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC51A10)
#define LEILCBFJFFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC51DB0)
#define LEILCBFJFFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC51570)
#define LEILCBFJFFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC514B0)
#define LEILCBFJFFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC51460)
#define LEILCBFJFFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC51720)
#define LEILCBFJFFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC515D0)
#define LEILCBFJFFD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC515C0)
#define LEILCBFJFFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC51840)
#define LEILCBFJFFD_HLJPGIAMGBD_OFFSET UNITYSDK_OFFSET(0x1FC515A0)
#define LEILCBFJFFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC51420)
#define LEILCBFJFFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC51BE0)
#define LEILCBFJFFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC51B40)
#define LEILCBFJFFD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC515B0)
#define LEILCBFJFFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC51450)
#define LEILCBFJFFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC518B0)
#define LEILCBFJFFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC51910)

inline static constexpr unsigned int LEILCBFJFFD_TypeDefinitionIndex = 30753;

	class LEILCBFJFFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>* GKEOPFNABME; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::AFEDHCKDDFA*>** StaticGet_FNHJCKOIEON()
		{
			return (::Google::Protobuf::FieldCodec_1<::AFEDHCKDDFA*>**)UnitySDK::FromName("", "LEILCBFJFFD")->GetStaticField(0x2E6B0);
		}

		static ::Google::Protobuf::MessageParser_1<::LEILCBFJFFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEILCBFJFFD*>**)UnitySDK::FromName("", "LEILCBFJFFD")->GetStaticField(0x2E6B8);
		}

		// static const ::System::Object NIEBGNHGDIH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEILCBFJFFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEILCBFJFFD*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEILCBFJFFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEILCBFJFFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEILCBFJFFD*>*(*)())((::PBYTE)hIl2Cpp + LEILCBFJFFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEILCBFJFFD* Clone()
		{
			return ((::LEILCBFJFFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>* HLJPGIAMGBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_HLJPGIAMGBD_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEILCBFJFFD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEILCBFJFFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEILCBFJFFD*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCBFJFFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEILCBFJFFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEILCBFJFFD*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEILCBFJFFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

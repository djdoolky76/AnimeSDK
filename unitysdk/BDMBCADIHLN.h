#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDMBCADIHLN;
class KEBEGGLAPLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDMBCADIHLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EE120)
#define BDMBCADIHLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EE4B0)
#define BDMBCADIHLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EDC80)
#define BDMBCADIHLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EDBF0)
#define BDMBCADIHLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDBB0)
#define BDMBCADIHLN_DGNDGNIHODA_OFFSET UNITYSDK_OFFSET(0x1E8EDCB0)
#define BDMBCADIHLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EDE30)
#define BDMBCADIHLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EDCE0)
#define BDMBCADIHLN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8EDCD0)
#define BDMBCADIHLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EDF50)
#define BDMBCADIHLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EDB70)
#define BDMBCADIHLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EE2F0)
#define BDMBCADIHLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EE250)
#define BDMBCADIHLN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8EDCC0)
#define BDMBCADIHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EDBA0)
#define BDMBCADIHLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EDFC0)
#define BDMBCADIHLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EE020)

inline static constexpr unsigned int BDMBCADIHLN_TypeDefinitionIndex = 34539;

	class BDMBCADIHLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KEBEGGLAPLF*>* KFIFCCIFGDP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BDMBCADIHLN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDMBCADIHLN*>**)UnitySDK::FromName("", "BDMBCADIHLN")->GetStaticField(0x525D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KEBEGGLAPLF*>** StaticGet_DLCDOBJKEDC()
		{
			return (::Google::Protobuf::FieldCodec_1<::KEBEGGLAPLF*>**)UnitySDK::FromName("", "BDMBCADIHLN")->GetStaticField(0x525D8);
		}

		// static const ::System::Object ICHKMKKLPEG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDMBCADIHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDMBCADIHLN*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDMBCADIHLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDMBCADIHLN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDMBCADIHLN*>*(*)())((::PBYTE)hIl2Cpp + BDMBCADIHLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDMBCADIHLN* Clone()
		{
			return ((::BDMBCADIHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KEBEGGLAPLF*>* DGNDGNIHODA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KEBEGGLAPLF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_DGNDGNIHODA_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDMBCADIHLN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDMBCADIHLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDMBCADIHLN*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMBCADIHLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDMBCADIHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDMBCADIHLN*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDMBCADIHLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

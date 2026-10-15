#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBONCGFHHDN;
class IBPDPCOGDEP;
class PFBCBNMKFAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBONCGFHHDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E136680)
#define DBONCGFHHDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E136A80)
#define DBONCGFHHDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E136280)
#define DBONCGFHHDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E136180)
#define DBONCGFHHDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E136110)
#define DBONCGFHHDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E136350)
#define DBONCGFHHDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1362F0)
#define DBONCGFHHDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1364A0)
#define DBONCGFHHDN_HFNLJMAMCEA_OFFSET UNITYSDK_OFFSET(0x1E1362D0)
#define DBONCGFHHDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1360A0)
#define DBONCGFHHDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E136850)
#define DBONCGFHHDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E136760)
#define DBONCGFHHDN_OHLDPOKBGJE_OFFSET UNITYSDK_OFFSET(0x1E1362E0)
#define DBONCGFHHDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E136100)
#define DBONCGFHHDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E136530)
#define DBONCGFHHDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E136590)

inline static constexpr unsigned int DBONCGFHHDN_TypeDefinitionIndex = 29243;

	class DBONCGFHHDN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IBPDPCOGDEP*>* LCFDEDPBLOJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PFBCBNMKFAK*>* LCPEPLMLELO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DBONCGFHHDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBONCGFHHDN*>**)UnitySDK::FromName("", "DBONCGFHHDN")->GetStaticField(0x23450);
		}

		static ::Google::Protobuf::FieldCodec_1<::IBPDPCOGDEP*>** StaticGet_IBNBHCPFHAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::IBPDPCOGDEP*>**)UnitySDK::FromName("", "DBONCGFHHDN")->GetStaticField(0x23458);
		}

		static ::Google::Protobuf::FieldCodec_1<::PFBCBNMKFAK*>** StaticGet_DCGPDCJFMJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::PFBCBNMKFAK*>**)UnitySDK::FromName("", "DBONCGFHHDN")->GetStaticField(0x23460);
		}

		// static const ::System::Object AJHCNAKFNCA; // 0x0
		// static const ::System::Object MAKILLGFFJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBONCGFHHDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBONCGFHHDN*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBONCGFHHDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBONCGFHHDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBONCGFHHDN*>*(*)())((::PBYTE)hIl2Cpp + DBONCGFHHDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBONCGFHHDN* Clone()
		{
			return ((::DBONCGFHHDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IBPDPCOGDEP*>* HFNLJMAMCEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IBPDPCOGDEP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_HFNLJMAMCEA_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PFBCBNMKFAK*>* OHLDPOKBGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PFBCBNMKFAK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_OHLDPOKBGJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBONCGFHHDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBONCGFHHDN*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBONCGFHHDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBONCGFHHDN*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBONCGFHHDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

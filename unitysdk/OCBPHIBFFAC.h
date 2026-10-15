#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class OCBPHIBFFAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCBPHIBFFAC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1EBB5A60)
#define OCBPHIBFFAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB5F00)
#define OCBPHIBFFAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB62D0)
#define OCBPHIBFFAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB5A00)
#define OCBPHIBFFAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB5960)
#define OCBPHIBFFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB5920)
#define OCBPHIBFFAC_EDBDPMCMJBO_OFFSET UNITYSDK_OFFSET(0x1EBB5A70)
#define OCBPHIBFFAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB5B20)
#define OCBPHIBFFAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB5AC0)
#define OCBPHIBFFAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB5C60)
#define OCBPHIBFFAC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1EBB5A50)
#define OCBPHIBFFAC_HJJJCDCMPMA_OFFSET UNITYSDK_OFFSET(0x1EBB5A90)
#define OCBPHIBFFAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBB58B0)
#define OCBPHIBFFAC_LFCONKMAEKP_OFFSET UNITYSDK_OFFSET(0x1EBB5AA0)
#define OCBPHIBFFAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB61D0)
#define OCBPHIBFFAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB6110)
#define OCBPHIBFFAC_OPHGGPLDCDL_OFFSET UNITYSDK_OFFSET(0x1EBB5A80)
#define OCBPHIBFFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB5910)
#define OCBPHIBFFAC_PJEMNILJFEM_OFFSET UNITYSDK_OFFSET(0x1EBB5AB0)
#define OCBPHIBFFAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB5CE0)
#define OCBPHIBFFAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB5D40)

inline static constexpr unsigned int OCBPHIBFFAC_TypeDefinitionIndex = 30053;

	class OCBPHIBFFAC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* LFDFKIHMDNF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IPHMBMOJMPH; // 0x20
		::System::UInt32 CFHMPBFIKHM; // 0x24
		::System::UInt32 IBEBBFIHLLP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_HIAJCOIGMAF()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "OCBPHIBFFAC")->GetStaticField(0x11160);
		}

		static ::Google::Protobuf::MessageParser_1<::OCBPHIBFFAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCBPHIBFFAC*>**)UnitySDK::FromName("", "OCBPHIBFFAC")->GetStaticField(0x11168);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object EDHHNNOKBFH; // 0x0
		// static const ::System::Object DIMODKBCMEG; // 0x0
		// static const ::System::Object OBJFLAFCKGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCBPHIBFFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPHIBFFAC*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCBPHIBFFAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCBPHIBFFAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCBPHIBFFAC*>*(*)())((::PBYTE)hIl2Cpp + OCBPHIBFFAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCBPHIBFFAC* Clone()
		{
			return ((::OCBPHIBFFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* EDBDPMCMJBO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_EDBDPMCMJBO_OFFSET))(this);
		}

		::System::UInt32 OPHGGPLDCDL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_OPHGGPLDCDL_OFFSET))(this);
		}

		::System::Void HJJJCDCMPMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_HJJJCDCMPMA_OFFSET))(this, a1);
		}

		::System::UInt32 LFCONKMAEKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_LFCONKMAEKP_OFFSET))(this);
		}

		::System::Void PJEMNILJFEM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_PJEMNILJFEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCBPHIBFFAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCBPHIBFFAC*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCBPHIBFFAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBPHIBFFAC*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCBPHIBFFAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

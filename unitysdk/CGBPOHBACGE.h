#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class CGBPOHBACGE;
class CGGPJFLLGID;
class PEPEHIDAKKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGBPOHBACGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07F140)
#define CGBPOHBACGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07F620)
#define CGBPOHBACGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07EC10)
#define CGBPOHBACGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07EB40)
#define CGBPOHBACGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07EAA0)
#define CGBPOHBACGE_DGAMFKFDNPC_OFFSET UNITYSDK_OFFSET(0x1E07ECA0)
#define CGBPOHBACGE_DIBCDPMFOMA_OFFSET UNITYSDK_OFFSET(0x1E07EC80)
#define CGBPOHBACGE_DKLJPEMBAEN_OFFSET UNITYSDK_OFFSET(0x1E07EC90)
#define CGBPOHBACGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07ED10)
#define CGBPOHBACGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07ECB0)
#define CGBPOHBACGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07EE90)
#define CGBPOHBACGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07EA30)
#define CGBPOHBACGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07F4A0)
#define CGBPOHBACGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07F340)
#define CGBPOHBACGE_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E07EC60)
#define CGBPOHBACGE_OEPJOHKKMIG_OFFSET UNITYSDK_OFFSET(0x1E07EC70)
#define CGBPOHBACGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07EA90)
#define CGBPOHBACGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07EF60)
#define CGBPOHBACGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07EFC0)

inline static constexpr unsigned int CGBPOHBACGE_TypeDefinitionIndex = 29920;

	class CGBPOHBACGE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PEPEHIDAKKK*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HLPKKJEOFCM; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::CGGPJFLLGID*>* BPNMECCBLAP; // 0x28
		::System::UInt64 GKPFEOAKHHG; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_MBBOHIBCMDK()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "CGBPOHBACGE")->GetStaticField(0x12D40);
		}

		static ::Google::Protobuf::FieldCodec_1<::CGGPJFLLGID*>** StaticGet_PCAPKGEJBII()
		{
			return (::Google::Protobuf::FieldCodec_1<::CGGPJFLLGID*>**)UnitySDK::FromName("", "CGBPOHBACGE")->GetStaticField(0x12D48);
		}

		static ::Google::Protobuf::MessageParser_1<::CGBPOHBACGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGBPOHBACGE*>**)UnitySDK::FromName("", "CGBPOHBACGE")->GetStaticField(0x12D50);
		}

		static ::Google::Protobuf::FieldCodec_1<::PEPEHIDAKKK*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::PEPEHIDAKKK*>**)UnitySDK::FromName("", "CGBPOHBACGE")->GetStaticField(0x12D58);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object IEGAEFAJDCG; // 0x0
		// static const ::System::Object ELKIOPABEIE; // 0x0
		// static const ::System::Object BGIBMELCOPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGBPOHBACGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBPOHBACGE*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBPOHBACGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGBPOHBACGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGBPOHBACGE*>*(*)())((::PBYTE)hIl2Cpp + CGBPOHBACGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGBPOHBACGE* Clone()
		{
			return ((::CGBPOHBACGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PEPEHIDAKKK*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PEPEHIDAKKK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_MJOEMBBMBON_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CGGPJFLLGID*>* OEPJOHKKMIG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CGGPJFLLGID*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_OEPJOHKKMIG_OFFSET))(this);
		}

		::System::UInt64 DIBCDPMFOMA()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_DIBCDPMFOMA_OFFSET))(this);
		}

		::System::Void DKLJPEMBAEN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CGBPOHBACGE_DKLJPEMBAEN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* DGAMFKFDNPC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_DGAMFKFDNPC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGBPOHBACGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGBPOHBACGE*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBPOHBACGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGBPOHBACGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBPOHBACGE*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGBPOHBACGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

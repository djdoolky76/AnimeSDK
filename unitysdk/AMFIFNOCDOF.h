#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFIFNOCDOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMFIFNOCDOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E521050)
#define AMFIFNOCDOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E521270)
#define AMFIFNOCDOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E520C40)
#define AMFIFNOCDOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E520C10)
#define AMFIFNOCDOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E520C00)
#define AMFIFNOCDOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E520DD0)
#define AMFIFNOCDOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E520CD0)
#define AMFIFNOCDOF_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E520CB0)
#define AMFIFNOCDOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E520F40)
#define AMFIFNOCDOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E520B90)
#define AMFIFNOCDOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E521110)
#define AMFIFNOCDOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5210E0)
#define AMFIFNOCDOF_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E520CC0)
#define AMFIFNOCDOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E520BF0)
#define AMFIFNOCDOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E520F70)
#define AMFIFNOCDOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E520FD0)

inline static constexpr unsigned int AMFIFNOCDOF_TypeDefinitionIndex = 29423;

	class AMFIFNOCDOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AMFIFNOCDOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMFIFNOCDOF*>**)UnitySDK::FromName("", "AMFIFNOCDOF")->GetStaticField(0x3C540);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMFIFNOCDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFIFNOCDOF*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFIFNOCDOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMFIFNOCDOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMFIFNOCDOF*>*(*)())((::PBYTE)hIl2Cpp + AMFIFNOCDOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMFIFNOCDOF* Clone()
		{
			return ((::AMFIFNOCDOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMFIFNOCDOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMFIFNOCDOF*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMFIFNOCDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFIFNOCDOF*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMFIFNOCDOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

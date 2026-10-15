#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJGHPCECLIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJGHPCECLIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E693550)
#define IJGHPCECLIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E693880)
#define IJGHPCECLIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E693190)
#define IJGHPCECLIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E693150)
#define IJGHPCECLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E693140)
#define IJGHPCECLIF_DFIJENKEJNE_OFFSET UNITYSDK_OFFSET(0x1E6931E0)
#define IJGHPCECLIF_EEEJBCFIKCH_OFFSET UNITYSDK_OFFSET(0x1E6931F0)
#define IJGHPCECLIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E693300)
#define IJGHPCECLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E693220)
#define IJGHPCECLIF_FPLANAICABF_OFFSET UNITYSDK_OFFSET(0x1E693210)
#define IJGHPCECLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6933D0)
#define IJGHPCECLIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E693100)
#define IJGHPCECLIF_MCHAPCFBHLC_OFFSET UNITYSDK_OFFSET(0x1E693200)
#define IJGHPCECLIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E693700)
#define IJGHPCECLIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6936C0)
#define IJGHPCECLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E693130)
#define IJGHPCECLIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E693410)
#define IJGHPCECLIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E693470)

inline static constexpr unsigned int IJGHPCECLIF_TypeDefinitionIndex = 27005;

	class IJGHPCECLIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GIBEGMIBKIM; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 IDODKKGNCHM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IJGHPCECLIF")->GetStaticField(0x521D0);
		}

		// static const ::System::Object BBPEIEAMMLA; // 0x0
		// static const ::System::Object FFLAONFANIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJGHPCECLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJGHPCECLIF*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGHPCECLIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IJGHPCECLIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJGHPCECLIF* Clone()
		{
			return ((::IJGHPCECLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 DFIJENKEJNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_DFIJENKEJNE_OFFSET))(this);
		}

		::System::Void EEEJBCFIKCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJGHPCECLIF_EEEJBCFIKCH_OFFSET))(this, a1);
		}

		::System::Int64 MCHAPCFBHLC()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_MCHAPCFBHLC_OFFSET))(this);
		}

		::System::Void FPLANAICABF(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IJGHPCECLIF_FPLANAICABF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJGHPCECLIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJGHPCECLIF*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGHPCECLIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJGHPCECLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJGHPCECLIF*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJGHPCECLIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

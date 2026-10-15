#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMMJIBBCCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOMMJIBBCCI_BJMCFNDFAKH_OFFSET UNITYSDK_OFFSET(0x1E7AC160)
#define JOMMJIBBCCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7AC4C0)
#define JOMMJIBBCCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AC790)
#define JOMMJIBBCCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AC110)
#define JOMMJIBBCCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AC0E0)
#define JOMMJIBBCCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AC0D0)
#define JOMMJIBBCCI_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E7AC190)
#define JOMMJIBBCCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AC280)
#define JOMMJIBBCCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AC1A0)
#define JOMMJIBBCCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7AC350)
#define JOMMJIBBCCI_JFIECDHGGEJ_OFFSET UNITYSDK_OFFSET(0x1E7AC170)
#define JOMMJIBBCCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AC090)
#define JOMMJIBBCCI_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E7AC180)
#define JOMMJIBBCCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7AC610)
#define JOMMJIBBCCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7AC5D0)
#define JOMMJIBBCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AC0C0)
#define JOMMJIBBCCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7AC380)
#define JOMMJIBBCCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7AC3E0)

inline static constexpr unsigned int JOMMJIBBCCI_TypeDefinitionIndex = 32346;

	class JOMMJIBBCCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJIJMBMGAPB; // 0x18
		::System::UInt32 HBFDGCIFEEI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JOMMJIBBCCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOMMJIBBCCI*>**)UnitySDK::FromName("", "JOMMJIBBCCI")->GetStaticField(0x6D480);
		}

		// static const ::System::Object NLKOAHHMFLM; // 0x0
		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOMMJIBBCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMMJIBBCCI*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMMJIBBCCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOMMJIBBCCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOMMJIBBCCI*>*(*)())((::PBYTE)hIl2Cpp + JOMMJIBBCCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOMMJIBBCCI* Clone()
		{
			return ((::JOMMJIBBCCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 BJMCFNDFAKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_BJMCFNDFAKH_OFFSET))(this);
		}

		::System::Void JFIECDHGGEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_JFIECDHGGEJ_OFFSET))(this, a1);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOMMJIBBCCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOMMJIBBCCI*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOMMJIBBCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOMMJIBBCCI*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOMMJIBBCCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

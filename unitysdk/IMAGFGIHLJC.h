#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMAGFGIHLJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMAGFGIHLJC_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E6B3820)
#define IMAGFGIHLJC_BAEJMGLGMOK_OFFSET UNITYSDK_OFFSET(0x1E6B3850)
#define IMAGFGIHLJC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B3B80)
#define IMAGFGIHLJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3F00)
#define IMAGFGIHLJC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B3790)
#define IMAGFGIHLJC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B3750)
#define IMAGFGIHLJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3740)
#define IMAGFGIHLJC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B38F0)
#define IMAGFGIHLJC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B3870)
#define IMAGFGIHLJC_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E6B3810)
#define IMAGFGIHLJC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B39C0)
#define IMAGFGIHLJC_GFFDLABMLHN_OFFSET UNITYSDK_OFFSET(0x1E6B3830)
#define IMAGFGIHLJC_GFFECPKLADN_OFFSET UNITYSDK_OFFSET(0x1E6B3840)
#define IMAGFGIHLJC_ILKBGMAONIA_OFFSET UNITYSDK_OFFSET(0x1E6B3860)
#define IMAGFGIHLJC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B36D0)
#define IMAGFGIHLJC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B3D60)
#define IMAGFGIHLJC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B3D10)
#define IMAGFGIHLJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B3730)
#define IMAGFGIHLJC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B39F0)
#define IMAGFGIHLJC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B3A50)

	class IMAGFGIHLJC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DCJCOPFDHIN; // 0x18
		::System::UInt32 HPKEGFAPDKJ; // 0x1C
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMAGFGIHLJC")->GetStaticField(0x56B50);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object KLNJAHNNBGK; // 0x0
		// static const ::System::Object IIKMIENPEAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMAGFGIHLJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMAGFGIHLJC*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMAGFGIHLJC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMAGFGIHLJC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMAGFGIHLJC* Clone()
		{
			return ((::IMAGFGIHLJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::UInt32 GFFDLABMLHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_GFFDLABMLHN_OFFSET))(this);
		}

		::System::Void GFFECPKLADN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_GFFECPKLADN_OFFSET))(this, a1);
		}

		::System::UInt32 BAEJMGLGMOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_BAEJMGLGMOK_OFFSET))(this);
		}

		::System::Void ILKBGMAONIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_ILKBGMAONIA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMAGFGIHLJC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMAGFGIHLJC*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMAGFGIHLJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMAGFGIHLJC*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMAGFGIHLJC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

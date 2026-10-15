#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOBIMJMLIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCOBIMJMLIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E34F280)
#define FCOBIMJMLIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34F550)
#define FCOBIMJMLIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E34EE80)
#define FCOBIMJMLIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E34EE50)
#define FCOBIMJMLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34EE40)
#define FCOBIMJMLIF_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E34EF00)
#define FCOBIMJMLIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E34F040)
#define FCOBIMJMLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E34EF30)
#define FCOBIMJMLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E34F110)
#define FCOBIMJMLIF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E34EF20)
#define FCOBIMJMLIF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E34EF10)
#define FCOBIMJMLIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E34EDD0)
#define FCOBIMJMLIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E34F3D0)
#define FCOBIMJMLIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E34F390)
#define FCOBIMJMLIF_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E34EEF0)
#define FCOBIMJMLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E34EE30)
#define FCOBIMJMLIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E34F140)
#define FCOBIMJMLIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E34F1A0)

	class FCOBIMJMLIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFKHBNCHKBI; // 0x18
		::System::UInt32 GMPNCOBOFDM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FCOBIMJMLIF")->GetStaticField(0x14DA0);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCOBIMJMLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOBIMJMLIF*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOBIMJMLIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FCOBIMJMLIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCOBIMJMLIF* Clone()
		{
			return ((::FCOBIMJMLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNLDMBGAJIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCOBIMJMLIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCOBIMJMLIF*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCOBIMJMLIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOBIMJMLIF*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCOBIMJMLIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

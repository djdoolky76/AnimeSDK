#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class PNPLNLCKAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNPLNLCKAMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC18D0)
#define PNPLNLCKAMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1BA0)
#define PNPLNLCKAMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC12B0)
#define PNPLNLCKAMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC1240)
#define PNPLNLCKAMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1230)
#define PNPLNLCKAMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC14C0)
#define PNPLNLCKAMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC1350)
#define PNPLNLCKAMJ_FBGAOIDONGG_OFFSET UNITYSDK_OFFSET(0x1DFC1330)
#define PNPLNLCKAMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC1790)
#define PNPLNLCKAMJ_ICFBNCCFNFO_OFFSET UNITYSDK_OFFSET(0x1DFC1340)
#define PNPLNLCKAMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC11F0)
#define PNPLNLCKAMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFC19D0)
#define PNPLNLCKAMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFC1930)
#define PNPLNLCKAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC1220)
#define PNPLNLCKAMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC17E0)
#define PNPLNLCKAMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC1840)

	class PNPLNLCKAMJ : public ::System::Object
	{
	public:
		::ENHOPAHGCMA* GPOAHFBCOGG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNPLNLCKAMJ")->GetStaticField(0x524D0);
		}

		// static const ::System::Object HMBKIIOJPDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNPLNLCKAMJ* Clone()
		{
			return ((::PNPLNLCKAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* FBGAOIDONGG()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_FBGAOIDONGG_OFFSET))(this);
		}

		::System::Void ICFBNCCFNFO(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_ICFBNCCFNFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

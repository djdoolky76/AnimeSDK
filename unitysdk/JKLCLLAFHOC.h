#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKMNLIJMFB;
class JECIOGKPHFN;
class JKLCLLAFHOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKLCLLAFHOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF3FE70)
#define JKLCLLAFHOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE68900)
#define JKLCLLAFHOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF3F5B0)
#define JKLCLLAFHOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF3F4D0)
#define JKLCLLAFHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF3F4C0)
#define JKLCLLAFHOC_DACDCGABAPB_OFFSET UNITYSDK_OFFSET(0x1FF3F700)
#define JKLCLLAFHOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF3F960)
#define JKLCLLAFHOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF3F710)
#define JKLCLLAFHOC_FEKACOEMKBI_OFFSET UNITYSDK_OFFSET(0x1FF3F6F0)
#define JKLCLLAFHOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF3FB90)
#define JKLCLLAFHOC_JCLIFDLJEDK_OFFSET UNITYSDK_OFFSET(0x1FF3F6E0)
#define JKLCLLAFHOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF3F450)
#define JKLCLLAFHOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE686C0)
#define JKLCLLAFHOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF3FF00)
#define JKLCLLAFHOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF3F4B0)
#define JKLCLLAFHOC_PNIHAGPNNFP_OFFSET UNITYSDK_OFFSET(0x1FF3F6D0)
#define JKLCLLAFHOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF3FD30)
#define JKLCLLAFHOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF3FD90)

inline static constexpr unsigned int JKLCLLAFHOC_TypeDefinitionIndex = 27819;

	class JKLCLLAFHOC : public ::System::Object
	{
	public:
		::JECIOGKPHFN* DAGJLJBHOKF; // 0x10
		::DFKMNLIJMFB* KOLKMOKAGEB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JKLCLLAFHOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKLCLLAFHOC*>**)UnitySDK::FromName("", "JKLCLLAFHOC")->GetStaticField(0x620F0);
		}

		// static const ::System::Object LINOLBLFDPD; // 0x0
		// static const ::System::Object HKEOPIMEFPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKLCLLAFHOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLCLLAFHOC*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLCLLAFHOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKLCLLAFHOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKLCLLAFHOC*>*(*)())((::PBYTE)hIl2Cpp + JKLCLLAFHOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKLCLLAFHOC* Clone()
		{
			return ((::JKLCLLAFHOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_CLONE_OFFSET))(this);
		}

		::JECIOGKPHFN* PNIHAGPNNFP()
		{
			return ((::JECIOGKPHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_PNIHAGPNNFP_OFFSET))(this);
		}

		::System::Void JCLIFDLJEDK(::JECIOGKPHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECIOGKPHFN*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_JCLIFDLJEDK_OFFSET))(this, a1);
		}

		::DFKMNLIJMFB* FEKACOEMKBI()
		{
			return ((::DFKMNLIJMFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_FEKACOEMKBI_OFFSET))(this);
		}

		::System::Void DACDCGABAPB(::DFKMNLIJMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_DACDCGABAPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKLCLLAFHOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKLCLLAFHOC*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKLCLLAFHOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKLCLLAFHOC*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKLCLLAFHOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

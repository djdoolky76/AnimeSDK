#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAPCHBBOFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEAPCHBBOFN_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E08E6E0)
#define CEAPCHBBOFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08EA80)
#define CEAPCHBBOFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08ECE0)
#define CEAPCHBBOFN_CGOOBGHOHPG_OFFSET UNITYSDK_OFFSET(0x1E08E6B0)
#define CEAPCHBBOFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E08E630)
#define CEAPCHBBOFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E08E5F0)
#define CEAPCHBBOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08E5E0)
#define CEAPCHBBOFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E08E800)
#define CEAPCHBBOFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E08E6F0)
#define CEAPCHBBOFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08E8E0)
#define CEAPCHBBOFN_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E08E6D0)
#define CEAPCHBBOFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E08E570)
#define CEAPCHBBOFN_LAFKMAIBJNE_OFFSET UNITYSDK_OFFSET(0x1E08E6C0)
#define CEAPCHBBOFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08EB60)
#define CEAPCHBBOFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08EB20)
#define CEAPCHBBOFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E08E5D0)
#define CEAPCHBBOFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08E910)
#define CEAPCHBBOFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08E970)

inline static constexpr unsigned int CEAPCHBBOFN_TypeDefinitionIndex = 26684;

	class CEAPCHBBOFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::Boolean GDAEKJGKMMP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CEAPCHBBOFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEAPCHBBOFN*>**)UnitySDK::FromName("", "CEAPCHBBOFN")->GetStaticField(0x102A0);
		}

		// static const ::System::Object PKAOOKDPBPF; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEAPCHBBOFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAPCHBBOFN*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEAPCHBBOFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEAPCHBBOFN*>*(*)())((::PBYTE)hIl2Cpp + CEAPCHBBOFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEAPCHBBOFN* Clone()
		{
			return ((::CEAPCHBBOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CLONE_OFFSET))(this);
		}

		::System::Boolean CGOOBGHOHPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CGOOBGHOHPG_OFFSET))(this);
		}

		::System::Void LAFKMAIBJNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_LAFKMAIBJNE_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEAPCHBBOFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEAPCHBBOFN*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEAPCHBBOFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAPCHBBOFN*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEAPCHBBOFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

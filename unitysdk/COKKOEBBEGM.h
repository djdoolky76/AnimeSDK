#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COKKOEBBEGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define COKKOEBBEGM_AGJOILBFHIC_OFFSET UNITYSDK_OFFSET(0x1E1356B0)
#define COKKOEBBEGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E135A50)
#define COKKOEBBEGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E135C70)
#define COKKOEBBEGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E135640)
#define COKKOEBBEGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E135610)
#define COKKOEBBEGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E135600)
#define COKKOEBBEGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1357D0)
#define COKKOEBBEGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1356D0)
#define COKKOEBBEGM_FMOCPIHENPD_OFFSET UNITYSDK_OFFSET(0x1E1356C0)
#define COKKOEBBEGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E135940)
#define COKKOEBBEGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E135590)
#define COKKOEBBEGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E135B10)
#define COKKOEBBEGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E135AE0)
#define COKKOEBBEGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1355F0)
#define COKKOEBBEGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E135970)
#define COKKOEBBEGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1359D0)

inline static constexpr unsigned int COKKOEBBEGM_TypeDefinitionIndex = 33344;

	class COKKOEBBEGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GILJOKJPMIN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::COKKOEBBEGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::COKKOEBBEGM*>**)UnitySDK::FromName("", "COKKOEBBEGM")->GetStaticField(0x217F0);
		}

		// static const ::System::Object AIDMLMJLJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::COKKOEBBEGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COKKOEBBEGM*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COKKOEBBEGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::COKKOEBBEGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::COKKOEBBEGM*>*(*)())((::PBYTE)hIl2Cpp + COKKOEBBEGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::COKKOEBBEGM* Clone()
		{
			return ((::COKKOEBBEGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AGJOILBFHIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_AGJOILBFHIC_OFFSET))(this);
		}

		::System::Void FMOCPIHENPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + COKKOEBBEGM_FMOCPIHENPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::COKKOEBBEGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::COKKOEBBEGM*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::COKKOEBBEGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COKKOEBBEGM*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + COKKOEBBEGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

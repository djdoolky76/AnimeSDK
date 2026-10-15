#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEACFOEMCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEACFOEMCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E563AF0)
#define HIEACFOEMCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E563D10)
#define HIEACFOEMCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5636E0)
#define HIEACFOEMCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5636B0)
#define HIEACFOEMCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5636A0)
#define HIEACFOEMCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E563870)
#define HIEACFOEMCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E563770)
#define HIEACFOEMCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5639E0)
#define HIEACFOEMCE_GFMIFIOCJPA_OFFSET UNITYSDK_OFFSET(0x1E563760)
#define HIEACFOEMCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E563630)
#define HIEACFOEMCE_JNIBGDKFBPA_OFFSET UNITYSDK_OFFSET(0x1E563750)
#define HIEACFOEMCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E563BB0)
#define HIEACFOEMCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E563B80)
#define HIEACFOEMCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E563690)
#define HIEACFOEMCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E563A10)
#define HIEACFOEMCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E563A70)

inline static constexpr unsigned int HIEACFOEMCE_TypeDefinitionIndex = 31708;

	class HIEACFOEMCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DGMMJHNEMKG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HIEACFOEMCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIEACFOEMCE*>**)UnitySDK::FromName("", "HIEACFOEMCE")->GetStaticField(0x336E0);
		}

		// static const ::System::Object GAFLLLGKKLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEACFOEMCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEACFOEMCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIEACFOEMCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIEACFOEMCE*>*(*)())((::PBYTE)hIl2Cpp + HIEACFOEMCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEACFOEMCE* Clone()
		{
			return ((::HIEACFOEMCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JNIBGDKFBPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_JNIBGDKFBPA_OFFSET))(this);
		}

		::System::Void GFMIFIOCJPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEACFOEMCE_GFMIFIOCJPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEACFOEMCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEACFOEMCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEACFOEMCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEACFOEMCE*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEACFOEMCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

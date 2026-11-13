#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJFEHJMAIAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJFEHJMAIAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FFDC000)
#define KJFEHJMAIAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFDC2D0)
#define KJFEHJMAIAA_CINGIFKOGDM_OFFSET UNITYSDK_OFFSET(0x1FFDBCA0)
#define KJFEHJMAIAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFDBC00)
#define KJFEHJMAIAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFDBBD0)
#define KJFEHJMAIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFDBBC0)
#define KJFEHJMAIAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFDBDC0)
#define KJFEHJMAIAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFDBCB0)
#define KJFEHJMAIAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFDBE90)
#define KJFEHJMAIAA_HKAAKCJHAFI_OFFSET UNITYSDK_OFFSET(0x1FFDBC90)
#define KJFEHJMAIAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FFDBB50)
#define KJFEHJMAIAA_LOFPHMJLFJD_OFFSET UNITYSDK_OFFSET(0x1FFDBC70)
#define KJFEHJMAIAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FFDC150)
#define KJFEHJMAIAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FFDC110)
#define KJFEHJMAIAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FFDBBB0)
#define KJFEHJMAIAA_PGAEKMPHIOK_OFFSET UNITYSDK_OFFSET(0x1FFDBC80)
#define KJFEHJMAIAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFDBEC0)
#define KJFEHJMAIAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FFDBF20)

inline static constexpr unsigned int KJFEHJMAIAA_TypeDefinitionIndex = 26036;

	class KJFEHJMAIAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MHMDNAJBBIK; // 0x18
		::System::UInt32 NKIHHGHGHHN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KJFEHJMAIAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJFEHJMAIAA*>**)UnitySDK::FromName("", "KJFEHJMAIAA")->GetStaticField(0x15E10);
		}

		// static const ::System::Object HKCOCPCBMEA; // 0x0
		// static const ::System::Object GPNLHLGEIKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJFEHJMAIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFEHJMAIAA*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJFEHJMAIAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJFEHJMAIAA*>*(*)())((::PBYTE)hIl2Cpp + KJFEHJMAIAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJFEHJMAIAA* Clone()
		{
			return ((::KJFEHJMAIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 LOFPHMJLFJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_LOFPHMJLFJD_OFFSET))(this);
		}

		::System::Void PGAEKMPHIOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_PGAEKMPHIOK_OFFSET))(this, a1);
		}

		::System::UInt32 HKAAKCJHAFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_HKAAKCJHAFI_OFFSET))(this);
		}

		::System::Void CINGIFKOGDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CINGIFKOGDM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJFEHJMAIAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJFEHJMAIAA*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJFEHJMAIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFEHJMAIAA*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJFEHJMAIAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANJBFCEBNGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANJBFCEBNGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E661270)
#define ANJBFCEBNGF_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E660EE0)
#define ANJBFCEBNGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6615F0)
#define ANJBFCEBNGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E660E50)
#define ANJBFCEBNGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E660E10)
#define ANJBFCEBNGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E660E00)
#define ANJBFCEBNGF_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E660EF0)
#define ANJBFCEBNGF_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E660EA0)
#define ANJBFCEBNGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E660FE0)
#define ANJBFCEBNGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E660F00)
#define ANJBFCEBNGF_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E660EB0)
#define ANJBFCEBNGF_GABKJDIDMGE_OFFSET UNITYSDK_OFFSET(0x1E660ED0)
#define ANJBFCEBNGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6610B0)
#define ANJBFCEBNGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E660DC0)
#define ANJBFCEBNGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E661450)
#define ANJBFCEBNGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E661400)
#define ANJBFCEBNGF_MKNNPOPJMAA_OFFSET UNITYSDK_OFFSET(0x1E660EC0)
#define ANJBFCEBNGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E660DF0)
#define ANJBFCEBNGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6610E0)
#define ANJBFCEBNGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E661140)

	class ANJBFCEBNGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JBDDOPMDGEL; // 0x18
		::System::UInt32 NBFPOGFBMFE; // 0x1C
		::System::UInt32 NOMDEJJPCMH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANJBFCEBNGF")->GetStaticField(0x3F350);
		}

		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object HDOMNANNJEE; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANJBFCEBNGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJBFCEBNGF*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANJBFCEBNGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANJBFCEBNGF* Clone()
		{
			return ((::ANJBFCEBNGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::UInt32 MKNNPOPJMAA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_MKNNPOPJMAA_OFFSET))(this);
		}

		::System::Void GABKJDIDMGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_GABKJDIDMGE_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANJBFCEBNGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANJBFCEBNGF*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANJBFCEBNGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANJBFCEBNGF*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANJBFCEBNGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

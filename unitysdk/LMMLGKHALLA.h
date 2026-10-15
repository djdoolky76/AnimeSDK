#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDJKFOBBDJF.h"
#include "unitysdk/System/Object.h"
class GOMKGHJBNFM;
class LMMLGKHALLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMMLGKHALLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E97E3F0)
#define LMMLGKHALLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97E840)
#define LMMLGKHALLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E97DE80)
#define LMMLGKHALLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E97DDE0)
#define LMMLGKHALLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97DDA0)
#define LMMLGKHALLA_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1E97DEE0)
#define LMMLGKHALLA_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E97DEB0)
#define LMMLGKHALLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E97E060)
#define LMMLGKHALLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E97DF00)
#define LMMLGKHALLA_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E97DEC0)
#define LMMLGKHALLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E97E190)
#define LMMLGKHALLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E97DD60)
#define LMMLGKHALLA_KPOONJCFKHL_OFFSET UNITYSDK_OFFSET(0x1E97DED0)
#define LMMLGKHALLA_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1E97DEF0)
#define LMMLGKHALLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E97E670)
#define LMMLGKHALLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E97E5C0)
#define LMMLGKHALLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E97DD90)
#define LMMLGKHALLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E97E200)
#define LMMLGKHALLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E97E260)

inline static constexpr unsigned int LMMLGKHALLA_TypeDefinitionIndex = 28141;

	class LMMLGKHALLA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::GOMKGHJBNFM*>* DLKHKJAIMCC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NOMDEJJPCMH; // 0x20
		::EDJKFOBBDJF EINIOEIIGOJ; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::GOMKGHJBNFM*>** StaticGet_NHGIBFGKICA()
		{
			return (::Google::Protobuf::FieldCodec_1<::GOMKGHJBNFM*>**)UnitySDK::FromName("", "LMMLGKHALLA")->GetStaticField(0x19DD0);
		}

		static ::Google::Protobuf::MessageParser_1<::LMMLGKHALLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMMLGKHALLA*>**)UnitySDK::FromName("", "LMMLGKHALLA")->GetStaticField(0x19DD8);
		}

		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object FDDCPGFAEMH; // 0x0
		// static const ::System::Object KCFACCMFHNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMMLGKHALLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMMLGKHALLA*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMLGKHALLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMMLGKHALLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMMLGKHALLA*>*(*)())((::PBYTE)hIl2Cpp + LMMLGKHALLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMMLGKHALLA* Clone()
		{
			return ((::LMMLGKHALLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMMLGKHALLA_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GOMKGHJBNFM*>* KPOONJCFKHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GOMKGHJBNFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_KPOONJCFKHL_OFFSET))(this);
		}

		::EDJKFOBBDJF EDGAHDFBGJH()
		{
			return ((::EDJKFOBBDJF(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_EDGAHDFBGJH_OFFSET))(this);
		}

		::System::Void LEADMLKFHDE(::EDJKFOBBDJF a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJKFOBBDJF))((::PBYTE)hIl2Cpp + LMMLGKHALLA_LEADMLKFHDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMMLGKHALLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMMLGKHALLA*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMLGKHALLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMMLGKHALLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMMLGKHALLA*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMMLGKHALLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

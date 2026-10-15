#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBAILHMCOI;
class GANGPHPGFCL;
class LHLMPOHKPKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GANGPHPGFCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F6F40)
#define GANGPHPGFCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7310)
#define GANGPHPGFCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F68C0)
#define GANGPHPGFCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F67A0)
#define GANGPHPGFCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6750)
#define GANGPHPGFCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F6B70)
#define GANGPHPGFCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F6940)
#define GANGPHPGFCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F6D40)
#define GANGPHPGFCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F66E0)
#define GANGPHPGFCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F7120)
#define GANGPHPGFCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F7030)
#define GANGPHPGFCL_NEDFMLJGKPL_OFFSET UNITYSDK_OFFSET(0x1E3F6930)
#define GANGPHPGFCL_NHENPMFKDOD_OFFSET UNITYSDK_OFFSET(0x1E3F6910)
#define GANGPHPGFCL_NJFBPGINJGM_OFFSET UNITYSDK_OFFSET(0x1E3F6920)
#define GANGPHPGFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6740)
#define GANGPHPGFCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F6DD0)
#define GANGPHPGFCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F6E30)

inline static constexpr unsigned int GANGPHPGFCL_TypeDefinitionIndex = 29229;

	class GANGPHPGFCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BHBAILHMCOI* JAKEAPOAJPI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>* DLMPOFHPNKH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GANGPHPGFCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GANGPHPGFCL*>**)UnitySDK::FromName("", "GANGPHPGFCL")->GetStaticField(0xB4E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LHLMPOHKPKG*>** StaticGet_MNOFLMANHGE()
		{
			return (::Google::Protobuf::FieldCodec_1<::LHLMPOHKPKG*>**)UnitySDK::FromName("", "GANGPHPGFCL")->GetStaticField(0xB4E8);
		}

		// static const ::System::Object GOGDMMLLHHB; // 0x0
		// static const ::System::Object PLPFFMKHFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GANGPHPGFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GANGPHPGFCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GANGPHPGFCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GANGPHPGFCL*>*(*)())((::PBYTE)hIl2Cpp + GANGPHPGFCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GANGPHPGFCL* Clone()
		{
			return ((::GANGPHPGFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CLONE_OFFSET))(this);
		}

		::BHBAILHMCOI* NHENPMFKDOD()
		{
			return ((::BHBAILHMCOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NHENPMFKDOD_OFFSET))(this);
		}

		::System::Void NJFBPGINJGM(::BHBAILHMCOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBAILHMCOI*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NJFBPGINJGM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>* NEDFMLJGKPL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LHLMPOHKPKG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_NEDFMLJGKPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GANGPHPGFCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GANGPHPGFCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GANGPHPGFCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GANGPHPGFCL*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GANGPHPGFCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

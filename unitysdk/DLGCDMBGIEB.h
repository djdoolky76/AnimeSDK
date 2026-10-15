#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLGCDMBGIEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLGCDMBGIEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E6F80)
#define DLGCDMBGIEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E71A0)
#define DLGCDMBGIEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E6BD0)
#define DLGCDMBGIEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E6BA0)
#define DLGCDMBGIEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6B90)
#define DLGCDMBGIEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E6D00)
#define DLGCDMBGIEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E6C30)
#define DLGCDMBGIEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1E6C20)
#define DLGCDMBGIEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E6E70)
#define DLGCDMBGIEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E6B50)
#define DLGCDMBGIEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E7040)
#define DLGCDMBGIEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E7010)
#define DLGCDMBGIEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1E6C10)
#define DLGCDMBGIEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E6B80)
#define DLGCDMBGIEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E6EA0)
#define DLGCDMBGIEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E6F00)

inline static constexpr unsigned int DLGCDMBGIEB_TypeDefinitionIndex = 27104;

	class DLGCDMBGIEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DLGCDMBGIEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLGCDMBGIEB*>**)UnitySDK::FromName("", "DLGCDMBGIEB")->GetStaticField(0x3D910);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLGCDMBGIEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLGCDMBGIEB*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLGCDMBGIEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLGCDMBGIEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLGCDMBGIEB*>*(*)())((::PBYTE)hIl2Cpp + DLGCDMBGIEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLGCDMBGIEB* Clone()
		{
			return ((::DLGCDMBGIEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLGCDMBGIEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLGCDMBGIEB*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLGCDMBGIEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLGCDMBGIEB*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLGCDMBGIEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

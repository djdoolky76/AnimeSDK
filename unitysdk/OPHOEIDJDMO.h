#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPHOEIDJDMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPHOEIDJDMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEB4F30)
#define OPHOEIDJDMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB50F0)
#define OPHOEIDJDMO_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1DEB4B60)
#define OPHOEIDJDMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEB4B10)
#define OPHOEIDJDMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEB4AE0)
#define OPHOEIDJDMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4AD0)
#define OPHOEIDJDMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEB4C60)
#define OPHOEIDJDMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEB4B80)
#define OPHOEIDJDMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEB4DE0)
#define OPHOEIDJDMO_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1DEB4B70)
#define OPHOEIDJDMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEB4A90)
#define OPHOEIDJDMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEB4F90)
#define OPHOEIDJDMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEB4F60)
#define OPHOEIDJDMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4AC0)
#define OPHOEIDJDMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEB4E10)
#define OPHOEIDJDMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEB4E70)

inline static constexpr unsigned int OPHOEIDJDMO_TypeDefinitionIndex = 28404;

	class OPHOEIDJDMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean AIGHAPALCNE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OPHOEIDJDMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPHOEIDJDMO*>**)UnitySDK::FromName("", "OPHOEIDJDMO")->GetStaticField(0x2B0B0);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPHOEIDJDMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPHOEIDJDMO*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPHOEIDJDMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPHOEIDJDMO*>*(*)())((::PBYTE)hIl2Cpp + OPHOEIDJDMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPHOEIDJDMO* Clone()
		{
			return ((::OPHOEIDJDMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPHOEIDJDMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPHOEIDJDMO*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPHOEIDJDMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPHOEIDJDMO*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPHOEIDJDMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

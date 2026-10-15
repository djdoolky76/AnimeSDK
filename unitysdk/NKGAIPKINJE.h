#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAKKNFLEPN;
class NKGAIPKINJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKGAIPKINJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB58FF0)
#define NKGAIPKINJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB59340)
#define NKGAIPKINJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB589F0)
#define NKGAIPKINJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB58950)
#define NKGAIPKINJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB58940)
#define NKGAIPKINJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB58CD0)
#define NKGAIPKINJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB58B20)
#define NKGAIPKINJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB58E50)
#define NKGAIPKINJE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1EB58B10)
#define NKGAIPKINJE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EB58B00)
#define NKGAIPKINJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB588D0)
#define NKGAIPKINJE_KNPCDHFHHJC_OFFSET UNITYSDK_OFFSET(0x1EB58AE0)
#define NKGAIPKINJE_KOLIPMHGHEI_OFFSET UNITYSDK_OFFSET(0x1EB58AF0)
#define NKGAIPKINJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB59190)
#define NKGAIPKINJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB590C0)
#define NKGAIPKINJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB58930)
#define NKGAIPKINJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB58EB0)
#define NKGAIPKINJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB58F10)

inline static constexpr unsigned int NKGAIPKINJE_TypeDefinitionIndex = 28584;

	class NKGAIPKINJE : public ::System::Object
	{
	public:
		::KIAKKNFLEPN* MEIDKGEOJGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GMPNCOBOFDM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKGAIPKINJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKGAIPKINJE*>**)UnitySDK::FromName("", "NKGAIPKINJE")->GetStaticField(0x37250);
		}

		// static const ::System::Object KNIAEDLHGLM; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKGAIPKINJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKGAIPKINJE*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKGAIPKINJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKGAIPKINJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKGAIPKINJE*>*(*)())((::PBYTE)hIl2Cpp + NKGAIPKINJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKGAIPKINJE* Clone()
		{
			return ((::NKGAIPKINJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_CLONE_OFFSET))(this);
		}

		::KIAKKNFLEPN* KNPCDHFHHJC()
		{
			return ((::KIAKKNFLEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_KNPCDHFHHJC_OFFSET))(this);
		}

		::System::Void KOLIPMHGHEI(::KIAKKNFLEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIAKKNFLEPN*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_KOLIPMHGHEI_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKGAIPKINJE_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKGAIPKINJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKGAIPKINJE*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKGAIPKINJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKGAIPKINJE*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKGAIPKINJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

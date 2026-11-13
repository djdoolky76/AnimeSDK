#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIICGMJNBO;
class KDODFHMDAJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDIICGMJNBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F875E20)
#define HDIICGMJNBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F876200)
#define HDIICGMJNBO_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1F8758E0)
#define HDIICGMJNBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F875820)
#define HDIICGMJNBO_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1F875900)
#define HDIICGMJNBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8757A0)
#define HDIICGMJNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F875790)
#define HDIICGMJNBO_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1F8758F0)
#define HDIICGMJNBO_EAFAJAKPMEK_OFFSET UNITYSDK_OFFSET(0x1F8758C0)
#define HDIICGMJNBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F875AA0)
#define HDIICGMJNBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F875910)
#define HDIICGMJNBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F875C30)
#define HDIICGMJNBO_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1F8758D0)
#define HDIICGMJNBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F875750)
#define HDIICGMJNBO_MBOBIDKDBDD_OFFSET UNITYSDK_OFFSET(0x1F8758B0)
#define HDIICGMJNBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F876020)
#define HDIICGMJNBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F875F80)
#define HDIICGMJNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F875780)
#define HDIICGMJNBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F875C80)
#define HDIICGMJNBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F875CE0)

inline static constexpr unsigned int HDIICGMJNBO_TypeDefinitionIndex = 34209;

	class HDIICGMJNBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KDODFHMDAJI* HDECDKLFCMN; // 0x18
		::System::UInt32 OGCMNCBOEJG; // 0x20
		::System::UInt32 GLFLHLCNOOH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HDIICGMJNBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HDIICGMJNBO*>**)UnitySDK::FromName("", "HDIICGMJNBO")->GetStaticField(0x27EE0);
		}

		// static const ::System::Object ODHLBGPOBBE; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object OPJGBPJDMKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDIICGMJNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDIICGMJNBO*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDIICGMJNBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HDIICGMJNBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HDIICGMJNBO*>*(*)())((::PBYTE)hIl2Cpp + HDIICGMJNBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDIICGMJNBO* Clone()
		{
			return ((::HDIICGMJNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CLONE_OFFSET))(this);
		}

		::KDODFHMDAJI* MBOBIDKDBDD()
		{
			return ((::KDODFHMDAJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_MBOBIDKDBDD_OFFSET))(this);
		}

		::System::Void EAFAJAKPMEK(::KDODFHMDAJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDODFHMDAJI*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_EAFAJAKPMEK_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDIICGMJNBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDIICGMJNBO*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIICGMJNBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDIICGMJNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDIICGMJNBO*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDIICGMJNBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

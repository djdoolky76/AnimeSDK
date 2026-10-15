#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDPPONBABG;
class KDMEFGANLKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJDPPONBABG_ANPHJAOBOFG_OFFSET UNITYSDK_OFFSET(0x1E3926A0)
#define AJDPPONBABG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E392C40)
#define AJDPPONBABG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392EC0)
#define AJDPPONBABG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E392600)
#define AJDPPONBABG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E392580)
#define AJDPPONBABG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E392570)
#define AJDPPONBABG_EPKDGJOMEFL_OFFSET UNITYSDK_OFFSET(0x1E392690)
#define AJDPPONBABG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E392820)
#define AJDPPONBABG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3926B0)
#define AJDPPONBABG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E392AF0)
#define AJDPPONBABG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E392530)
#define AJDPPONBABG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E392D40)
#define AJDPPONBABG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E392CA0)
#define AJDPPONBABG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E392560)
#define AJDPPONBABG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E392B50)
#define AJDPPONBABG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E392BB0)

inline static constexpr unsigned int AJDPPONBABG_TypeDefinitionIndex = 35125;

	class AJDPPONBABG : public ::System::Object
	{
	public:
		::KDMEFGANLKI* GEHFEKFEIGM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AJDPPONBABG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJDPPONBABG*>**)UnitySDK::FromName("", "AJDPPONBABG")->GetStaticField(0x3D6F0);
		}

		// static const ::System::Object IFLCPHEJEFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJDPPONBABG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDPPONBABG*))((::PBYTE)hIl2Cpp + AJDPPONBABG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDPPONBABG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJDPPONBABG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJDPPONBABG*>*(*)())((::PBYTE)hIl2Cpp + AJDPPONBABG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJDPPONBABG* Clone()
		{
			return ((::AJDPPONBABG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_CLONE_OFFSET))(this);
		}

		::KDMEFGANLKI* EPKDGJOMEFL()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_EPKDGJOMEFL_OFFSET))(this);
		}

		::System::Void ANPHJAOBOFG(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + AJDPPONBABG_ANPHJAOBOFG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDPPONBABG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJDPPONBABG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJDPPONBABG*))((::PBYTE)hIl2Cpp + AJDPPONBABG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJDPPONBABG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDPPONBABG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJDPPONBABG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDPPONBABG*))((::PBYTE)hIl2Cpp + AJDPPONBABG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJDPPONBABG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

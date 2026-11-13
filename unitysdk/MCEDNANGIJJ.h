#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCEDNANGIJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCEDNANGIJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD3DCA0)
#define MCEDNANGIJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD3DF00)
#define MCEDNANGIJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD3D850)
#define MCEDNANGIJJ_CPJAJENHBDD_OFFSET UNITYSDK_OFFSET(0x1FD3D900)
#define MCEDNANGIJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD3D810)
#define MCEDNANGIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3D800)
#define MCEDNANGIJJ_EAGPHBJKHKD_OFFSET UNITYSDK_OFFSET(0x1FD3D8F0)
#define MCEDNANGIJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD3DA20)
#define MCEDNANGIJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD3D910)
#define MCEDNANGIJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD3DB00)
#define MCEDNANGIJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD3D790)
#define MCEDNANGIJJ_JOCIHNEEPDI_OFFSET UNITYSDK_OFFSET(0x1FD3D8D0)
#define MCEDNANGIJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD3DD80)
#define MCEDNANGIJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD3DD40)
#define MCEDNANGIJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD3D7F0)
#define MCEDNANGIJJ_PJKNFLFMFFG_OFFSET UNITYSDK_OFFSET(0x1FD3D8E0)
#define MCEDNANGIJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD3DB30)
#define MCEDNANGIJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD3DB90)

inline static constexpr unsigned int MCEDNANGIJJ_TypeDefinitionIndex = 29756;

	class MCEDNANGIJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMCIFNLPPHN; // 0x18
		::System::Boolean MEPMIAKHPGJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MCEDNANGIJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCEDNANGIJJ*>**)UnitySDK::FromName("", "MCEDNANGIJJ")->GetStaticField(0x487C0);
		}

		// static const ::System::Object CNIDDEBHKEK; // 0x0
		// static const ::System::Object KNNAGOLDLDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCEDNANGIJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCEDNANGIJJ*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCEDNANGIJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCEDNANGIJJ*>*(*)())((::PBYTE)hIl2Cpp + MCEDNANGIJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCEDNANGIJJ* Clone()
		{
			return ((::MCEDNANGIJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CLONE_OFFSET))(this);
		}

		::System::Boolean JOCIHNEEPDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_JOCIHNEEPDI_OFFSET))(this);
		}

		::System::Void PJKNFLFMFFG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_PJKNFLFMFFG_OFFSET))(this, a1);
		}

		::System::UInt32 EAGPHBJKHKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_EAGPHBJKHKD_OFFSET))(this);
		}

		::System::Void CPJAJENHBDD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CPJAJENHBDD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCEDNANGIJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCEDNANGIJJ*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCEDNANGIJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCEDNANGIJJ*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCEDNANGIJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

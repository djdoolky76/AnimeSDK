#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAALDKHKOLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAALDKHKOLE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DEBC220)
#define PAALDKHKOLE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DEBC230)
#define PAALDKHKOLE_BJPIMFNJHAG_OFFSET UNITYSDK_OFFSET(0x1DEBC240)
#define PAALDKHKOLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEBC580)
#define PAALDKHKOLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC850)
#define PAALDKHKOLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBC1D0)
#define PAALDKHKOLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBC1A0)
#define PAALDKHKOLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC190)
#define PAALDKHKOLE_DNNKNKPGCPB_OFFSET UNITYSDK_OFFSET(0x1DEBC250)
#define PAALDKHKOLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBC340)
#define PAALDKHKOLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBC260)
#define PAALDKHKOLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBC410)
#define PAALDKHKOLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBC150)
#define PAALDKHKOLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEBC6D0)
#define PAALDKHKOLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBC690)
#define PAALDKHKOLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC180)
#define PAALDKHKOLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBC440)
#define PAALDKHKOLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEBC4A0)

inline static constexpr unsigned int PAALDKHKOLE_TypeDefinitionIndex = 25962;

	class PAALDKHKOLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGPNLMIIJCO; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PAALDKHKOLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PAALDKHKOLE*>**)UnitySDK::FromName("", "PAALDKHKOLE")->GetStaticField(0xD3D0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object HCCMOEAHHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAALDKHKOLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAALDKHKOLE*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAALDKHKOLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PAALDKHKOLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PAALDKHKOLE*>*(*)())((::PBYTE)hIl2Cpp + PAALDKHKOLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAALDKHKOLE* Clone()
		{
			return ((::PAALDKHKOLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAALDKHKOLE_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 BJPIMFNJHAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_BJPIMFNJHAG_OFFSET))(this);
		}

		::System::Void DNNKNKPGCPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAALDKHKOLE_DNNKNKPGCPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAALDKHKOLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAALDKHKOLE*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAALDKHKOLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAALDKHKOLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAALDKHKOLE*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAALDKHKOLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

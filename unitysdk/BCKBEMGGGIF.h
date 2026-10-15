#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCKBEMGGGIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCKBEMGGGIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E909B40)
#define BCKBEMGGGIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E909D60)
#define BCKBEMGGGIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E909730)
#define BCKBEMGGGIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E909700)
#define BCKBEMGGGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9096F0)
#define BCKBEMGGGIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9098C0)
#define BCKBEMGGGIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9097C0)
#define BCKBEMGGGIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E909A30)
#define BCKBEMGGGIF_GJAHHJPLKII_OFFSET UNITYSDK_OFFSET(0x1E9097B0)
#define BCKBEMGGGIF_GLFKMHKKEHM_OFFSET UNITYSDK_OFFSET(0x1E9097A0)
#define BCKBEMGGGIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E909680)
#define BCKBEMGGGIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E909C00)
#define BCKBEMGGGIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E909BD0)
#define BCKBEMGGGIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9096E0)
#define BCKBEMGGGIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E909A60)
#define BCKBEMGGGIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E909AC0)

inline static constexpr unsigned int BCKBEMGGGIF_TypeDefinitionIndex = 31282;

	class BCKBEMGGGIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GDPGCPKEFKH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BCKBEMGGGIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCKBEMGGGIF*>**)UnitySDK::FromName("", "BCKBEMGGGIF")->GetStaticField(0x3BB60);
		}

		// static const ::System::Object JIPLGBKNGHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCKBEMGGGIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCKBEMGGGIF*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCKBEMGGGIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCKBEMGGGIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCKBEMGGGIF*>*(*)())((::PBYTE)hIl2Cpp + BCKBEMGGGIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCKBEMGGGIF* Clone()
		{
			return ((::BCKBEMGGGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLFKMHKKEHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_GLFKMHKKEHM_OFFSET))(this);
		}

		::System::Void GJAHHJPLKII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_GJAHHJPLKII_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCKBEMGGGIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCKBEMGGGIF*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCKBEMGGGIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCKBEMGGGIF*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCKBEMGGGIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

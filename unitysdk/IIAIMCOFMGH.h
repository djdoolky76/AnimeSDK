#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIAIMCOFMGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIAIMCOFMGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7FE7D0)
#define IIAIMCOFMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FEAA0)
#define IIAIMCOFMGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7FE420)
#define IIAIMCOFMGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FE3F0)
#define IIAIMCOFMGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FE3E0)
#define IIAIMCOFMGH_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1F7FE490)
#define IIAIMCOFMGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7FE590)
#define IIAIMCOFMGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FE4B0)
#define IIAIMCOFMGH_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1F7FE4A0)
#define IIAIMCOFMGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7FE660)
#define IIAIMCOFMGH_GOBCHHEIPJM_OFFSET UNITYSDK_OFFSET(0x1F7FE480)
#define IIAIMCOFMGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7FE3A0)
#define IIAIMCOFMGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7FE920)
#define IIAIMCOFMGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7FE8E0)
#define IIAIMCOFMGH_MFNCCAHGMBB_OFFSET UNITYSDK_OFFSET(0x1F7FE470)
#define IIAIMCOFMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7FE3D0)
#define IIAIMCOFMGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7FE690)
#define IIAIMCOFMGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7FE6F0)

inline static constexpr unsigned int IIAIMCOFMGH_TypeDefinitionIndex = 26445;

	class IIAIMCOFMGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OBCOKODJPLI; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IIAIMCOFMGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIAIMCOFMGH*>**)UnitySDK::FromName("", "IIAIMCOFMGH")->GetStaticField(0x46750);
		}

		// static const ::System::Object CCBADEFMFHL; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIAIMCOFMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAIMCOFMGH*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIAIMCOFMGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIAIMCOFMGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIAIMCOFMGH*>*(*)())((::PBYTE)hIl2Cpp + IIAIMCOFMGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIAIMCOFMGH* Clone()
		{
			return ((::IIAIMCOFMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MFNCCAHGMBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_MFNCCAHGMBB_OFFSET))(this);
		}

		::System::Void GOBCHHEIPJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_GOBCHHEIPJM_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIAIMCOFMGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIAIMCOFMGH*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIAIMCOFMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIAIMCOFMGH*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIAIMCOFMGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMJLEMCEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEMJLEMCEFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E368C60)
#define FEMJLEMCEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E368E80)
#define FEMJLEMCEFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3688B0)
#define FEMJLEMCEFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E368880)
#define FEMJLEMCEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E368870)
#define FEMJLEMCEFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3689E0)
#define FEMJLEMCEFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E368910)
#define FEMJLEMCEFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E368B50)
#define FEMJLEMCEFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E368830)
#define FEMJLEMCEFD_KCNAEFEFIHI_OFFSET UNITYSDK_OFFSET(0x1E368900)
#define FEMJLEMCEFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E368D20)
#define FEMJLEMCEFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E368CF0)
#define FEMJLEMCEFD_OGDHDPKJNMN_OFFSET UNITYSDK_OFFSET(0x1E3688F0)
#define FEMJLEMCEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E368860)
#define FEMJLEMCEFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E368B80)
#define FEMJLEMCEFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E368BE0)

	class FEMJLEMCEFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFMBIHHFDBG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FEMJLEMCEFD")->GetStaticField(0x5D7B0);
		}

		// static const ::System::Object GMJGEDAPGLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEMJLEMCEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEMJLEMCEFD*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMJLEMCEFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FEMJLEMCEFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEMJLEMCEFD* Clone()
		{
			return ((::FEMJLEMCEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGDHDPKJNMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_OGDHDPKJNMN_OFFSET))(this);
		}

		::System::Void KCNAEFEFIHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_KCNAEFEFIHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEMJLEMCEFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEMJLEMCEFD*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEMJLEMCEFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEMJLEMCEFD*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEMJLEMCEFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

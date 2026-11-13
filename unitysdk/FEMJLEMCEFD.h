#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMJLEMCEFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEMJLEMCEFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20545BF0)
#define FEMJLEMCEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20545E10)
#define FEMJLEMCEFD_CLONE_OFFSET UNITYSDK_OFFSET(0x20545840)
#define FEMJLEMCEFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20545810)
#define FEMJLEMCEFD_CTOR_OFFSET UNITYSDK_OFFSET(0x20545800)
#define FEMJLEMCEFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20545970)
#define FEMJLEMCEFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x205458A0)
#define FEMJLEMCEFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20545AE0)
#define FEMJLEMCEFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205457C0)
#define FEMJLEMCEFD_KCNAEFEFIHI_OFFSET UNITYSDK_OFFSET(0x20545890)
#define FEMJLEMCEFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20545CB0)
#define FEMJLEMCEFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20545C80)
#define FEMJLEMCEFD_OGDHDPKJNMN_OFFSET UNITYSDK_OFFSET(0x20545880)
#define FEMJLEMCEFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205457F0)
#define FEMJLEMCEFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20545B10)
#define FEMJLEMCEFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20545B70)

inline static constexpr unsigned int FEMJLEMCEFD_TypeDefinitionIndex = 29084;

	class FEMJLEMCEFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFMBIHHFDBG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FEMJLEMCEFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEMJLEMCEFD*>**)UnitySDK::FromName("", "FEMJLEMCEFD")->GetStaticField(0x4B590);
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

		static ::Google::Protobuf::MessageParser_1<::FEMJLEMCEFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEMJLEMCEFD*>*(*)())((::PBYTE)hIl2Cpp + FEMJLEMCEFD_JJGHOBBFNJD_OFFSET))();
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

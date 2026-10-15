#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHMJNONHPE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCHMJNONHPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E31AB20)
#define FCHMJNONHPE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31AD80)
#define FCHMJNONHPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E31A730)
#define FCHMJNONHPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E31A6F0)
#define FCHMJNONHPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31A6E0)
#define FCHMJNONHPE_EFNDGKJCBAI_OFFSET UNITYSDK_OFFSET(0x1E31A790)
#define FCHMJNONHPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E31A8A0)
#define FCHMJNONHPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E31A7C0)
#define FCHMJNONHPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E31A980)
#define FCHMJNONHPE_GKOGKCHCCCF_OFFSET UNITYSDK_OFFSET(0x1E31A7B0)
#define FCHMJNONHPE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E31A6A0)
#define FCHMJNONHPE_LHLBIEMKJGL_OFFSET UNITYSDK_OFFSET(0x1E31A780)
#define FCHMJNONHPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E31AC00)
#define FCHMJNONHPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E31ABC0)
#define FCHMJNONHPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E31A6D0)
#define FCHMJNONHPE_PHIBHHKLHJG_OFFSET UNITYSDK_OFFSET(0x1E31A7A0)
#define FCHMJNONHPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E31A9B0)
#define FCHMJNONHPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E31AA10)

inline static constexpr unsigned int FCHMJNONHPE_TypeDefinitionIndex = 29736;

	class FCHMJNONHPE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean PLEKPCGFLOA; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PHDGEOFBHGM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FCHMJNONHPE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCHMJNONHPE*>**)UnitySDK::FromName("", "FCHMJNONHPE")->GetStaticField(0x17C10);
		}

		// static const ::System::Object EGEDNCDAKPM; // 0x0
		// static const ::System::Object HMJEIODCANG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCHMJNONHPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHMJNONHPE*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHMJNONHPE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCHMJNONHPE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCHMJNONHPE*>*(*)())((::PBYTE)hIl2Cpp + FCHMJNONHPE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCHMJNONHPE* Clone()
		{
			return ((::FCHMJNONHPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHLBIEMKJGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_LHLBIEMKJGL_OFFSET))(this);
		}

		::System::Void EFNDGKJCBAI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHMJNONHPE_EFNDGKJCBAI_OFFSET))(this, a1);
		}

		::System::Boolean PHIBHHKLHJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_PHIBHHKLHJG_OFFSET))(this);
		}

		::System::Void GKOGKCHCCCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCHMJNONHPE_GKOGKCHCCCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCHMJNONHPE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCHMJNONHPE*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHMJNONHPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCHMJNONHPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHMJNONHPE*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCHMJNONHPE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

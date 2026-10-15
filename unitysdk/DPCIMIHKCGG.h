#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPCIMIHKCGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPCIMIHKCGG_AGFLGDOCMCB_OFFSET UNITYSDK_OFFSET(0x1E1DD0F0)
#define DPCIMIHKCGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1DD460)
#define DPCIMIHKCGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DD730)
#define DPCIMIHKCGG_CKBDGCNDCJJ_OFFSET UNITYSDK_OFFSET(0x1E1DD100)
#define DPCIMIHKCGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1DD060)
#define DPCIMIHKCGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1DD030)
#define DPCIMIHKCGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DD020)
#define DPCIMIHKCGG_EHMCHEJIDFA_OFFSET UNITYSDK_OFFSET(0x1E1DD0D0)
#define DPCIMIHKCGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1DD220)
#define DPCIMIHKCGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1DD110)
#define DPCIMIHKCGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1DD2F0)
#define DPCIMIHKCGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1DCFB0)
#define DPCIMIHKCGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1DD5B0)
#define DPCIMIHKCGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1DD570)
#define DPCIMIHKCGG_MKOKIOMDKOH_OFFSET UNITYSDK_OFFSET(0x1E1DD0E0)
#define DPCIMIHKCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1DD010)
#define DPCIMIHKCGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1DD320)
#define DPCIMIHKCGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1DD380)

inline static constexpr unsigned int DPCIMIHKCGG_TypeDefinitionIndex = 28621;

	class DPCIMIHKCGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DDJCFFNPCNO; // 0x18
		::System::UInt32 DIODHMIDKPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DPCIMIHKCGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPCIMIHKCGG*>**)UnitySDK::FromName("", "DPCIMIHKCGG")->GetStaticField(0x39720);
		}

		// static const ::System::Object OPBKFKAEABK; // 0x0
		// static const ::System::Object BHBEDNPIMEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPCIMIHKCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPCIMIHKCGG*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPCIMIHKCGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPCIMIHKCGG*>*(*)())((::PBYTE)hIl2Cpp + DPCIMIHKCGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPCIMIHKCGG* Clone()
		{
			return ((::DPCIMIHKCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHMCHEJIDFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_EHMCHEJIDFA_OFFSET))(this);
		}

		::System::Void MKOKIOMDKOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_MKOKIOMDKOH_OFFSET))(this, a1);
		}

		::System::UInt32 AGFLGDOCMCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_AGFLGDOCMCB_OFFSET))(this);
		}

		::System::Void CKBDGCNDCJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CKBDGCNDCJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPCIMIHKCGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPCIMIHKCGG*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPCIMIHKCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPCIMIHKCGG*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPCIMIHKCGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

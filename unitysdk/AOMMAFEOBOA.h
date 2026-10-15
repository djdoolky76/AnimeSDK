#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOMMAFEOBOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AOMMAFEOBOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E66F9D0)
#define AOMMAFEOBOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66FC30)
#define AOMMAFEOBOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E66F5E0)
#define AOMMAFEOBOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E66F5A0)
#define AOMMAFEOBOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66F590)
#define AOMMAFEOBOA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E66F630)
#define AOMMAFEOBOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E66F750)
#define AOMMAFEOBOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E66F670)
#define AOMMAFEOBOA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E66F640)
#define AOMMAFEOBOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E66F830)
#define AOMMAFEOBOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E66F550)
#define AOMMAFEOBOA_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x1E66F650)
#define AOMMAFEOBOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E66FAB0)
#define AOMMAFEOBOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E66FA70)
#define AOMMAFEOBOA_MKBLEILBPHI_OFFSET UNITYSDK_OFFSET(0x1E66F660)
#define AOMMAFEOBOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E66F580)
#define AOMMAFEOBOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E66F860)
#define AOMMAFEOBOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E66F8C0)

inline static constexpr unsigned int AOMMAFEOBOA_TypeDefinitionIndex = 34548;

	class AOMMAFEOBOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean CDFDONPAJCP; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AOMMAFEOBOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AOMMAFEOBOA*>**)UnitySDK::FromName("", "AOMMAFEOBOA")->GetStaticField(0x1C830);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object HBGMNBBBJDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AOMMAFEOBOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOMMAFEOBOA*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOMMAFEOBOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AOMMAFEOBOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AOMMAFEOBOA*>*(*)())((::PBYTE)hIl2Cpp + AOMMAFEOBOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AOMMAFEOBOA* Clone()
		{
			return ((::AOMMAFEOBOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Void MKBLEILBPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_MKBLEILBPHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AOMMAFEOBOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOMMAFEOBOA*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AOMMAFEOBOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOMMAFEOBOA*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AOMMAFEOBOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

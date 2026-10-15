#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKGMGBHLEN_MOGLLCOGPGD.h"
#include "unitysdk/System/Object.h"
class MIKGMGBHLEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIKGMGBHLEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA100E0)
#define MIKGMGBHLEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA10570)
#define MIKGMGBHLEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0FA50)
#define MIKGMGBHLEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0F7E0)
#define MIKGMGBHLEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F7D0)
#define MIKGMGBHLEN_EBJHNOFJBCH_OFFSET UNITYSDK_OFFSET(0x1EA0F9A0)
#define MIKGMGBHLEN_ECBDGIIIGFH_OFFSET UNITYSDK_OFFSET(0x1EA0FAA0)
#define MIKGMGBHLEN_EMJBNDKOKIJ_OFFSET UNITYSDK_OFFSET(0x1EA0F950)
#define MIKGMGBHLEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0FB20)
#define MIKGMGBHLEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0FAC0)
#define MIKGMGBHLEN_FJGNAMBFDOB_OFFSET UNITYSDK_OFFSET(0x1EA0FAB0)
#define MIKGMGBHLEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0FDB0)
#define MIKGMGBHLEN_IPONDLGEAMG_OFFSET UNITYSDK_OFFSET(0x1EA0FA20)
#define MIKGMGBHLEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0F760)
#define MIKGMGBHLEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA10390)
#define MIKGMGBHLEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA10260)
#define MIKGMGBHLEN_MIHPCDGMCID_OFFSET UNITYSDK_OFFSET(0x1EA0F910)
#define MIKGMGBHLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F7C0)
#define MIKGMGBHLEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0FEF0)
#define MIKGMGBHLEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA0FF50)

inline static constexpr unsigned int MIKGMGBHLEN_TypeDefinitionIndex = 25896;

	class MIKGMGBHLEN : public ::System::Object
	{
	public:
		::System::Object* FPEKDDOODLK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MIKGMGBHLEN_MOGLLCOGPGD OOLADNHNOBH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MIKGMGBHLEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MIKGMGBHLEN*>**)UnitySDK::FromName("", "MIKGMGBHLEN")->GetStaticField(0x52CB0);
		}

		// static const ::System::Object FDCEGBHGKHN; // 0x0
		// static const ::System::Object JKJHNGACNOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MIKGMGBHLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIKGMGBHLEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MIKGMGBHLEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MIKGMGBHLEN*>*(*)())((::PBYTE)hIl2Cpp + MIKGMGBHLEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MIKGMGBHLEN* Clone()
		{
			return ((::MIKGMGBHLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_CLONE_OFFSET))(this);
		}

		::System::String* MIHPCDGMCID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_MIHPCDGMCID_OFFSET))(this);
		}

		::System::Void EMJBNDKOKIJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_EMJBNDKOKIJ_OFFSET))(this, a1);
		}

		::System::UInt32 EBJHNOFJBCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_EBJHNOFJBCH_OFFSET))(this);
		}

		::System::Void IPONDLGEAMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_IPONDLGEAMG_OFFSET))(this, a1);
		}

		::MIKGMGBHLEN_MOGLLCOGPGD ECBDGIIIGFH()
		{
			return ((::MIKGMGBHLEN_MOGLLCOGPGD(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_ECBDGIIIGFH_OFFSET))(this);
		}

		::System::Void FJGNAMBFDOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_FJGNAMBFDOB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MIKGMGBHLEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MIKGMGBHLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIKGMGBHLEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

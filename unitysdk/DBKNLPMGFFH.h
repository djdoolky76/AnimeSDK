#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBKNLPMGFFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBKNLPMGFFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E132130)
#define DBKNLPMGFFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E132350)
#define DBKNLPMGFFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E131D20)
#define DBKNLPMGFFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E131CF0)
#define DBKNLPMGFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E131CE0)
#define DBKNLPMGFFH_DCBGNJCLMPF_OFFSET UNITYSDK_OFFSET(0x1E131DA0)
#define DBKNLPMGFFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E131EB0)
#define DBKNLPMGFFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E131DB0)
#define DBKNLPMGFFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E132020)
#define DBKNLPMGFFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E131C70)
#define DBKNLPMGFFH_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1E131D90)
#define DBKNLPMGFFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1321F0)
#define DBKNLPMGFFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1321C0)
#define DBKNLPMGFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E131CD0)
#define DBKNLPMGFFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E132050)
#define DBKNLPMGFFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1320B0)

inline static constexpr unsigned int DBKNLPMGFFH_TypeDefinitionIndex = 28345;

	class DBKNLPMGFFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LHJILAOOJMF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DBKNLPMGFFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBKNLPMGFFH*>**)UnitySDK::FromName("", "DBKNLPMGFFH")->GetStaticField(0x22F40);
		}

		// static const ::System::Object EPPBJAMAMGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBKNLPMGFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBKNLPMGFFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBKNLPMGFFH*>*(*)())((::PBYTE)hIl2Cpp + DBKNLPMGFFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBKNLPMGFFH* Clone()
		{
			return ((::DBKNLPMGFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 LMMJLJJDMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::Void DCBGNJCLMPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_DCBGNJCLMPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBKNLPMGFFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBKNLPMGFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBKNLPMGFFH*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBKNLPMGFFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

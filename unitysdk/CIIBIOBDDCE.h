#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIBIOBDDCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIIBIOBDDCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A68A0)
#define CIIBIOBDDCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6B00)
#define CIIBIOBDDCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A64B0)
#define CIIBIOBDDCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A6470)
#define CIIBIOBDDCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6460)
#define CIIBIOBDDCE_ECPPACKHEMO_OFFSET UNITYSDK_OFFSET(0x1E0A6510)
#define CIIBIOBDDCE_EJFJKEEKDJJ_OFFSET UNITYSDK_OFFSET(0x1E0A6500)
#define CIIBIOBDDCE_EJNOADIMPCN_OFFSET UNITYSDK_OFFSET(0x1E0A6520)
#define CIIBIOBDDCE_EOLHOJALBHG_OFFSET UNITYSDK_OFFSET(0x1E0A6530)
#define CIIBIOBDDCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A6620)
#define CIIBIOBDDCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A6540)
#define CIIBIOBDDCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A6700)
#define CIIBIOBDDCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A6420)
#define CIIBIOBDDCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A6980)
#define CIIBIOBDDCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A6940)
#define CIIBIOBDDCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6450)
#define CIIBIOBDDCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A6730)
#define CIIBIOBDDCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A6790)

inline static constexpr unsigned int CIIBIOBDDCE_TypeDefinitionIndex = 29696;

	class CIIBIOBDDCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LONCJONKFBI; // 0x18
		::System::Boolean CEFANFEAKOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CIIBIOBDDCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIIBIOBDDCE*>**)UnitySDK::FromName("", "CIIBIOBDDCE")->GetStaticField(0x16AD0);
		}

		// static const ::System::Object NAGEGHAOEII; // 0x0
		// static const ::System::Object JPIOIAGIJCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIIBIOBDDCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIIBIOBDDCE*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIIBIOBDDCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIIBIOBDDCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIIBIOBDDCE*>*(*)())((::PBYTE)hIl2Cpp + CIIBIOBDDCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIIBIOBDDCE* Clone()
		{
			return ((::CIIBIOBDDCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_CLONE_OFFSET))(this);
		}

		::System::Boolean EJFJKEEKDJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_EJFJKEEKDJJ_OFFSET))(this);
		}

		::System::Void ECPPACKHEMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_ECPPACKHEMO_OFFSET))(this, a1);
		}

		::System::UInt32 EJNOADIMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_EJNOADIMPCN_OFFSET))(this);
		}

		::System::Void EOLHOJALBHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_EOLHOJALBHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIIBIOBDDCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIIBIOBDDCE*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIIBIOBDDCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIIBIOBDDCE*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIIBIOBDDCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

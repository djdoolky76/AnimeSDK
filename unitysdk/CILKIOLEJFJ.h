#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILKIOLEJFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CILKIOLEJFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A8840)
#define CILKIOLEJFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8A60)
#define CILKIOLEJFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A8490)
#define CILKIOLEJFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A8460)
#define CILKIOLEJFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8450)
#define CILKIOLEJFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A85C0)
#define CILKIOLEJFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A84F0)
#define CILKIOLEJFJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0A84E0)
#define CILKIOLEJFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A8730)
#define CILKIOLEJFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A8410)
#define CILKIOLEJFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A8900)
#define CILKIOLEJFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A88D0)
#define CILKIOLEJFJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0A84D0)
#define CILKIOLEJFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8440)
#define CILKIOLEJFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A8760)
#define CILKIOLEJFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A87C0)

inline static constexpr unsigned int CILKIOLEJFJ_TypeDefinitionIndex = 31091;

	class CILKIOLEJFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CILKIOLEJFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CILKIOLEJFJ*>**)UnitySDK::FromName("", "CILKIOLEJFJ")->GetStaticField(0x174D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CILKIOLEJFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CILKIOLEJFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CILKIOLEJFJ*>*(*)())((::PBYTE)hIl2Cpp + CILKIOLEJFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CILKIOLEJFJ* Clone()
		{
			return ((::CILKIOLEJFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CILKIOLEJFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CILKIOLEJFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CILKIOLEJFJ*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CILKIOLEJFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

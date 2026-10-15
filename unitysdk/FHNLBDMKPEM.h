#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNLBDMKPEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHNLBDMKPEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3652E0)
#define FHNLBDMKPEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E365500)
#define FHNLBDMKPEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E364F30)
#define FHNLBDMKPEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E364F00)
#define FHNLBDMKPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E364EF0)
#define FHNLBDMKPEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E365060)
#define FHNLBDMKPEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E364F90)
#define FHNLBDMKPEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E364F80)
#define FHNLBDMKPEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3651D0)
#define FHNLBDMKPEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E364EB0)
#define FHNLBDMKPEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3653A0)
#define FHNLBDMKPEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E365370)
#define FHNLBDMKPEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E364F70)
#define FHNLBDMKPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E364EE0)
#define FHNLBDMKPEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E365200)
#define FHNLBDMKPEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E365260)

inline static constexpr unsigned int FHNLBDMKPEM_TypeDefinitionIndex = 29434;

	class FHNLBDMKPEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FHNLBDMKPEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHNLBDMKPEM*>**)UnitySDK::FromName("", "FHNLBDMKPEM")->GetStaticField(0x57320);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHNLBDMKPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNLBDMKPEM*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNLBDMKPEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHNLBDMKPEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHNLBDMKPEM*>*(*)())((::PBYTE)hIl2Cpp + FHNLBDMKPEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHNLBDMKPEM* Clone()
		{
			return ((::FHNLBDMKPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHNLBDMKPEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHNLBDMKPEM*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHNLBDMKPEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNLBDMKPEM*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHNLBDMKPEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

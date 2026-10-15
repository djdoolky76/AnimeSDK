#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGAACLIDCBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGAACLIDCBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07C050)
#define CGAACLIDCBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07C270)
#define CGAACLIDCBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07BCA0)
#define CGAACLIDCBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07BC70)
#define CGAACLIDCBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E07BC60)
#define CGAACLIDCBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07BDD0)
#define CGAACLIDCBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07BD00)
#define CGAACLIDCBP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E07BCF0)
#define CGAACLIDCBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07BF40)
#define CGAACLIDCBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E07BC20)
#define CGAACLIDCBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07C110)
#define CGAACLIDCBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07C0E0)
#define CGAACLIDCBP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E07BCE0)
#define CGAACLIDCBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07BC50)
#define CGAACLIDCBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07BF70)
#define CGAACLIDCBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07BFD0)

inline static constexpr unsigned int CGAACLIDCBP_TypeDefinitionIndex = 34467;

	class CGAACLIDCBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CGAACLIDCBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGAACLIDCBP*>**)UnitySDK::FromName("", "CGAACLIDCBP")->GetStaticField(0x12980);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGAACLIDCBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGAACLIDCBP*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGAACLIDCBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGAACLIDCBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGAACLIDCBP*>*(*)())((::PBYTE)hIl2Cpp + CGAACLIDCBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGAACLIDCBP* Clone()
		{
			return ((::CGAACLIDCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGAACLIDCBP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGAACLIDCBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGAACLIDCBP*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAACLIDCBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGAACLIDCBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGAACLIDCBP*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGAACLIDCBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

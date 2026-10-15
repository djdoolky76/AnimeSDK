#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLKMHLAPHC;
class LBBCNOOOCNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBBCNOOOCNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D6700)
#define LBBCNOOOCNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6A20)
#define LBBCNOOOCNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D60E0)
#define LBBCNOOOCNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D6070)
#define LBBCNOOOCNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6060)
#define LBBCNOOOCNE_DGKGBNOFBKP_OFFSET UNITYSDK_OFFSET(0x1E8D6160)
#define LBBCNOOOCNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D62F0)
#define LBBCNOOOCNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D6180)
#define LBBCNOOOCNE_FBLCOCCHDCN_OFFSET UNITYSDK_OFFSET(0x1E8D6170)
#define LBBCNOOOCNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D65C0)
#define LBBCNOOOCNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D6020)
#define LBBCNOOOCNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D6830)
#define LBBCNOOOCNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D6760)
#define LBBCNOOOCNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6050)
#define LBBCNOOOCNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D6610)
#define LBBCNOOOCNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D6670)

inline static constexpr unsigned int LBBCNOOOCNE_TypeDefinitionIndex = 33081;

	class LBBCNOOOCNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DNLKMHLAPHC* IMIONEEHMPB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LBBCNOOOCNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBBCNOOOCNE*>**)UnitySDK::FromName("", "LBBCNOOOCNE")->GetStaticField(0x2FD30);
		}

		// static const ::System::Object PFDFBOCEDGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBBCNOOOCNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBCNOOOCNE*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBCNOOOCNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBBCNOOOCNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBBCNOOOCNE*>*(*)())((::PBYTE)hIl2Cpp + LBBCNOOOCNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBBCNOOOCNE* Clone()
		{
			return ((::LBBCNOOOCNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_CLONE_OFFSET))(this);
		}

		::DNLKMHLAPHC* DGKGBNOFBKP()
		{
			return ((::DNLKMHLAPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_DGKGBNOFBKP_OFFSET))(this);
		}

		::System::Void FBLCOCCHDCN(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_FBLCOCCHDCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBBCNOOOCNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBBCNOOOCNE*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBBCNOOOCNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBCNOOOCNE*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBBCNOOOCNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

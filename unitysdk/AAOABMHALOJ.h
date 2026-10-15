#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOABMHALOJ;
class OCCAABPFBLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAOABMHALOJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD95130)
#define AAOABMHALOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD954D0)
#define AAOABMHALOJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD94B00)
#define AAOABMHALOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD94A90)
#define AAOABMHALOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD94A80)
#define AAOABMHALOJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD94D40)
#define AAOABMHALOJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD94BC0)
#define AAOABMHALOJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DD94BB0)
#define AAOABMHALOJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD94EC0)
#define AAOABMHALOJ_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1DD94B80)
#define AAOABMHALOJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DD94A40)
#define AAOABMHALOJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD952F0)
#define AAOABMHALOJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD95200)
#define AAOABMHALOJ_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1DD94B90)
#define AAOABMHALOJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DD94BA0)
#define AAOABMHALOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD94A70)
#define AAOABMHALOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD94FF0)
#define AAOABMHALOJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD95050)

inline static constexpr unsigned int AAOABMHALOJ_TypeDefinitionIndex = 26105;

	class AAOABMHALOJ : public ::System::Object
	{
	public:
		::OCCAABPFBLF* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AAOABMHALOJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAOABMHALOJ*>**)UnitySDK::FromName("", "AAOABMHALOJ")->GetStaticField(0x2F500);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAOABMHALOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOABMHALOJ*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOABMHALOJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAOABMHALOJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAOABMHALOJ*>*(*)())((::PBYTE)hIl2Cpp + AAOABMHALOJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAOABMHALOJ* Clone()
		{
			return ((::AAOABMHALOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_CLONE_OFFSET))(this);
		}

		::OCCAABPFBLF* JIFPIGBJFEH()
		{
			return ((::OCCAABPFBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::OCCAABPFBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAOABMHALOJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAOABMHALOJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAOABMHALOJ*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOABMHALOJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAOABMHALOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOABMHALOJ*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAOABMHALOJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

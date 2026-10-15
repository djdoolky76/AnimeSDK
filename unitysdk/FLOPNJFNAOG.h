#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOPNJFNAOG;
class POACIACEJJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLOPNJFNAOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3DD120)
#define FLOPNJFNAOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD460)
#define FLOPNJFNAOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DCB50)
#define FLOPNJFNAOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3DCAE0)
#define FLOPNJFNAOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCAD0)
#define FLOPNJFNAOG_DENONFMPGCP_OFFSET UNITYSDK_OFFSET(0x1E3DCC10)
#define FLOPNJFNAOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3DCDF0)
#define FLOPNJFNAOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3DCC30)
#define FLOPNJFNAOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3DCF70)
#define FLOPNJFNAOG_JEEADKJKEFI_OFFSET UNITYSDK_OFFSET(0x1E3DCC20)
#define FLOPNJFNAOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3DCA60)
#define FLOPNJFNAOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3DD260)
#define FLOPNJFNAOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3DD180)
#define FLOPNJFNAOG_NKMCAGDHPDF_OFFSET UNITYSDK_OFFSET(0x1E3DCC00)
#define FLOPNJFNAOG_OOCMOJDIONB_OFFSET UNITYSDK_OFFSET(0x1E3DCBF0)
#define FLOPNJFNAOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3DCAC0)
#define FLOPNJFNAOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3DCFB0)
#define FLOPNJFNAOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3DD010)

inline static constexpr unsigned int FLOPNJFNAOG_TypeDefinitionIndex = 27632;

	class FLOPNJFNAOG : public ::System::Object
	{
	public:
		::POACIACEJJN* DENODEMLGKN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OONKIPFBOIF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FLOPNJFNAOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLOPNJFNAOG*>**)UnitySDK::FromName("", "FLOPNJFNAOG")->GetStaticField(0x64870);
		}

		// static const ::System::Object EEPHPPKIDEN; // 0x0
		// static const ::System::Object HEGJOINAIFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLOPNJFNAOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLOPNJFNAOG*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOPNJFNAOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLOPNJFNAOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLOPNJFNAOG*>*(*)())((::PBYTE)hIl2Cpp + FLOPNJFNAOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLOPNJFNAOG* Clone()
		{
			return ((::FLOPNJFNAOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_CLONE_OFFSET))(this);
		}

		::System::Boolean OOCMOJDIONB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_OOCMOJDIONB_OFFSET))(this);
		}

		::System::Void NKMCAGDHPDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_NKMCAGDHPDF_OFFSET))(this, a1);
		}

		::POACIACEJJN* DENONFMPGCP()
		{
			return ((::POACIACEJJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_DENONFMPGCP_OFFSET))(this);
		}

		::System::Void JEEADKJKEFI(::POACIACEJJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POACIACEJJN*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_JEEADKJKEFI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLOPNJFNAOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLOPNJFNAOG*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLOPNJFNAOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLOPNJFNAOG*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLOPNJFNAOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNPGLCGNICI;
class PBFEGMDAIDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBFEGMDAIDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC7720)
#define PBFEGMDAIDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC7A10)
#define PBFEGMDAIDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC71D0)
#define PBFEGMDAIDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC7160)
#define PBFEGMDAIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC7150)
#define PBFEGMDAIDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC7410)
#define PBFEGMDAIDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC7290)
#define PBFEGMDAIDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEC7280)
#define PBFEGMDAIDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC7590)
#define PBFEGMDAIDN_HAJMFMBBHPO_OFFSET UNITYSDK_OFFSET(0x1DEC7250)
#define PBFEGMDAIDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC7110)
#define PBFEGMDAIDN_KAGANILCAKB_OFFSET UNITYSDK_OFFSET(0x1DEC7260)
#define PBFEGMDAIDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC7870)
#define PBFEGMDAIDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC77F0)
#define PBFEGMDAIDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEC7270)
#define PBFEGMDAIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC7140)
#define PBFEGMDAIDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC75E0)
#define PBFEGMDAIDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC7640)

inline static constexpr unsigned int PBFEGMDAIDN_TypeDefinitionIndex = 33002;

	class PBFEGMDAIDN : public ::System::Object
	{
	public:
		::NNPGLCGNICI* MICKHJJBFIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PBFEGMDAIDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBFEGMDAIDN*>**)UnitySDK::FromName("", "PBFEGMDAIDN")->GetStaticField(0x2C580);
		}

		// static const ::System::Object PODCILAGFIH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBFEGMDAIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBFEGMDAIDN*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBFEGMDAIDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBFEGMDAIDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBFEGMDAIDN*>*(*)())((::PBYTE)hIl2Cpp + PBFEGMDAIDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBFEGMDAIDN* Clone()
		{
			return ((::PBFEGMDAIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* HAJMFMBBHPO()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_HAJMFMBBHPO_OFFSET))(this);
		}

		::System::Void KAGANILCAKB(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_KAGANILCAKB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBFEGMDAIDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBFEGMDAIDN*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBFEGMDAIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBFEGMDAIDN*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBFEGMDAIDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

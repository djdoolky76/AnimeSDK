#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BALPIPIDLDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BALPIPIDLDM_BANCLADFGNI_OFFSET UNITYSDK_OFFSET(0x1E78DEF0)
#define BALPIPIDLDM_BMEDBCFMGAB_OFFSET UNITYSDK_OFFSET(0x1E78DF00)
#define BALPIPIDLDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E78E260)
#define BALPIPIDLDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78E480)
#define BALPIPIDLDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E78DEB0)
#define BALPIPIDLDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78DE80)
#define BALPIPIDLDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78DE70)
#define BALPIPIDLDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E78DFE0)
#define BALPIPIDLDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E78DF10)
#define BALPIPIDLDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E78E150)
#define BALPIPIDLDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E78DE30)
#define BALPIPIDLDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E78E320)
#define BALPIPIDLDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E78E2F0)
#define BALPIPIDLDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E78DE60)
#define BALPIPIDLDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E78E180)
#define BALPIPIDLDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E78E1E0)

inline static constexpr unsigned int BALPIPIDLDM_TypeDefinitionIndex = 27669;

	class BALPIPIDLDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MOKJAJGEAHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BALPIPIDLDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BALPIPIDLDM*>**)UnitySDK::FromName("", "BALPIPIDLDM")->GetStaticField(0x4CD00);
		}

		// static const ::System::Object ICBBGLFEJEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BALPIPIDLDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALPIPIDLDM*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BALPIPIDLDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BALPIPIDLDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BALPIPIDLDM*>*(*)())((::PBYTE)hIl2Cpp + BALPIPIDLDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BALPIPIDLDM* Clone()
		{
			return ((::BALPIPIDLDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 BANCLADFGNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_BANCLADFGNI_OFFSET))(this);
		}

		::System::Void BMEDBCFMGAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALPIPIDLDM_BMEDBCFMGAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BALPIPIDLDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BALPIPIDLDM*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BALPIPIDLDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALPIPIDLDM*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BALPIPIDLDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

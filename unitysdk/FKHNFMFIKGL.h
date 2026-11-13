#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKHNFMFIKGL;
class LFIKNHJBDBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FKHNFMFIKGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE332F0)
#define FKHNFMFIKGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE33690)
#define FKHNFMFIKGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE32DA0)
#define FKHNFMFIKGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE32D20)
#define FKHNFMFIKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE32D10)
#define FKHNFMFIKGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE32FF0)
#define FKHNFMFIKGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE32E70)
#define FKHNFMFIKGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FE32E40)
#define FKHNFMFIKGL_FHEBONKJALP_OFFSET UNITYSDK_OFFSET(0x1FE32E60)
#define FKHNFMFIKGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE33170)
#define FKHNFMFIKGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE32CD0)
#define FKHNFMFIKGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE334A0)
#define FKHNFMFIKGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE333C0)
#define FKHNFMFIKGL_MGDACGAHKDE_OFFSET UNITYSDK_OFFSET(0x1FE32E50)
#define FKHNFMFIKGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FE32E30)
#define FKHNFMFIKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE32D00)
#define FKHNFMFIKGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE331B0)
#define FKHNFMFIKGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE33210)

inline static constexpr unsigned int FKHNFMFIKGL_TypeDefinitionIndex = 26524;

	class FKHNFMFIKGL : public ::System::Object
	{
	public:
		::LFIKNHJBDBJ* ICDCMLCALLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FKHNFMFIKGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FKHNFMFIKGL*>**)UnitySDK::FromName("", "FKHNFMFIKGL")->GetStaticField(0x48340);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFCAOBLJBOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FKHNFMFIKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKHNFMFIKGL*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHNFMFIKGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FKHNFMFIKGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FKHNFMFIKGL*>*(*)())((::PBYTE)hIl2Cpp + FKHNFMFIKGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FKHNFMFIKGL* Clone()
		{
			return ((::FKHNFMFIKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::LFIKNHJBDBJ* MGDACGAHKDE()
		{
			return ((::LFIKNHJBDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_MGDACGAHKDE_OFFSET))(this);
		}

		::System::Void FHEBONKJALP(::LFIKNHJBDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIKNHJBDBJ*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_FHEBONKJALP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FKHNFMFIKGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKHNFMFIKGL*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FKHNFMFIKGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKHNFMFIKGL*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FKHNFMFIKGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

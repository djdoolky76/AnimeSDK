#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNMFPBNPDM;
class FNLJCCLIOCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFNMFPBNPDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20647FE0)
#define DFNMFPBNPDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x206483C0)
#define DFNMFPBNPDM_CLONE_OFFSET UNITYSDK_OFFSET(0x20647990)
#define DFNMFPBNPDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20647910)
#define DFNMFPBNPDM_CTOR_OFFSET UNITYSDK_OFFSET(0x20647900)
#define DFNMFPBNPDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20647C10)
#define DFNMFPBNPDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20647A80)
#define DFNMFPBNPDM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20647A70)
#define DFNMFPBNPDM_FEBAAKOEDBM_OFFSET UNITYSDK_OFFSET(0x20647A50)
#define DFNMFPBNPDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20647DA0)
#define DFNMFPBNPDM_HHNOCOEPMEH_OFFSET UNITYSDK_OFFSET(0x20647A40)
#define DFNMFPBNPDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206478C0)
#define DFNMFPBNPDM_LBMOJJIDMAG_OFFSET UNITYSDK_OFFSET(0x20647A30)
#define DFNMFPBNPDM_LIABCABEGHH_OFFSET UNITYSDK_OFFSET(0x20647A20)
#define DFNMFPBNPDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206481E0)
#define DFNMFPBNPDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20648140)
#define DFNMFPBNPDM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20647A60)
#define DFNMFPBNPDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206478F0)
#define DFNMFPBNPDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20647E40)
#define DFNMFPBNPDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x20647EA0)

inline static constexpr unsigned int DFNMFPBNPDM_TypeDefinitionIndex = 29687;

	class DFNMFPBNPDM : public ::System::Object
	{
	public:
		::FNLJCCLIOCM* NCEKAFCHHJO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 PPCKJOJIPEK; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DFNMFPBNPDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFNMFPBNPDM*>**)UnitySDK::FromName("", "DFNMFPBNPDM")->GetStaticField(0x29590);
		}

		// static const ::System::Object JPPGOFEKCDI; // 0x0
		// static const ::System::Object IGBPOIIKLCM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFNMFPBNPDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNMFPBNPDM*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNMFPBNPDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFNMFPBNPDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFNMFPBNPDM*>*(*)())((::PBYTE)hIl2Cpp + DFNMFPBNPDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFNMFPBNPDM* Clone()
		{
			return ((::DFNMFPBNPDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_CLONE_OFFSET))(this);
		}

		::FNLJCCLIOCM* LIABCABEGHH()
		{
			return ((::FNLJCCLIOCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_LIABCABEGHH_OFFSET))(this);
		}

		::System::Void LBMOJJIDMAG(::FNLJCCLIOCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLJCCLIOCM*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_LBMOJJIDMAG_OFFSET))(this, a1);
		}

		::System::UInt32 HHNOCOEPMEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_HHNOCOEPMEH_OFFSET))(this);
		}

		::System::Void FEBAAKOEDBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_FEBAAKOEDBM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFNMFPBNPDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFNMFPBNPDM*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFNMFPBNPDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFNMFPBNPDM*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFNMFPBNPDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

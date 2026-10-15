#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHFBDDHCEN;
class NNFFGHJKPJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNFFGHJKPJD_AJKEBMAIMID_OFFSET UNITYSDK_OFFSET(0x1EB53E30)
#define NNFFGHJKPJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB542D0)
#define NNFFGHJKPJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB54690)
#define NNFFGHJKPJD_CDPLBMNKLDC_OFFSET UNITYSDK_OFFSET(0x1EB53E40)
#define NNFFGHJKPJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB53DD0)
#define NNFFGHJKPJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB53D10)
#define NNFFGHJKPJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB53CC0)
#define NNFFGHJKPJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB53EF0)
#define NNFFGHJKPJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB53E90)
#define NNFFGHJKPJD_FEGJHDJDICC_OFFSET UNITYSDK_OFFSET(0x1EB53E50)
#define NNFFGHJKPJD_FNHACMDCDLJ_OFFSET UNITYSDK_OFFSET(0x1EB53E20)
#define NNFFGHJKPJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB54030)
#define NNFFGHJKPJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB53C50)
#define NNFFGHJKPJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB54590)
#define NNFFGHJKPJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB544D0)
#define NNFFGHJKPJD_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1EB53E80)
#define NNFFGHJKPJD_NECKAHHFCLI_OFFSET UNITYSDK_OFFSET(0x1EB53E70)
#define NNFFGHJKPJD_NPCOIAEPGPA_OFFSET UNITYSDK_OFFSET(0x1EB53E60)
#define NNFFGHJKPJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB53CB0)
#define NNFFGHJKPJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB540B0)
#define NNFFGHJKPJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB54110)

inline static constexpr unsigned int NNFFGHJKPJD_TypeDefinitionIndex = 31625;

	class NNFFGHJKPJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>* FDFBNBLNHLK; // 0x18
		::System::UInt32 HPEJOGGPEDN; // 0x20
		::System::UInt32 JENHMINODOE; // 0x24
		::System::UInt32 MLDIHMFALEB; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::NJHFBDDHCEN*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::NJHFBDDHCEN*>**)UnitySDK::FromName("", "NNFFGHJKPJD")->GetStaticField(0x2720);
		}

		static ::Google::Protobuf::MessageParser_1<::NNFFGHJKPJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNFFGHJKPJD*>**)UnitySDK::FromName("", "NNFFGHJKPJD")->GetStaticField(0x2728);
		}

		// static const ::System::Object GNKPEGMOLPM; // 0x0
		// static const ::System::Object MFMGKGEOAFC; // 0x0
		// static const ::System::Object PMFNLNMINAP; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNFFGHJKPJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFFGHJKPJD*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNFFGHJKPJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNFFGHJKPJD*>*(*)())((::PBYTE)hIl2Cpp + NNFFGHJKPJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNFFGHJKPJD* Clone()
		{
			return ((::NNFFGHJKPJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CLONE_OFFSET))(this);
		}

		::System::UInt32 FNHACMDCDLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_FNHACMDCDLJ_OFFSET))(this);
		}

		::System::Void AJKEBMAIMID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_AJKEBMAIMID_OFFSET))(this, a1);
		}

		::System::UInt32 CDPLBMNKLDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CDPLBMNKLDC_OFFSET))(this);
		}

		::System::Void FEGJHDJDICC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_FEGJHDJDICC_OFFSET))(this, a1);
		}

		::System::UInt32 NPCOIAEPGPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_NPCOIAEPGPA_OFFSET))(this);
		}

		::System::Void NECKAHHFCLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_NECKAHHFCLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NJHFBDDHCEN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNFFGHJKPJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNFFGHJKPJD*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNFFGHJKPJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFFGHJKPJD*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNFFGHJKPJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

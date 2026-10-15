#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFJPGILAAON_AGPPHBJNGIG_OFFSET UNITYSDK_OFFSET(0x1E1753E0)
#define DFJPGILAAON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1758B0)
#define DFJPGILAAON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E175C90)
#define DFJPGILAAON_CHDOGIDFOPE_OFFSET UNITYSDK_OFFSET(0x1E175420)
#define DFJPGILAAON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E175390)
#define DFJPGILAAON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E175300)
#define DFJPGILAAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1752B0)
#define DFJPGILAAON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1754E0)
#define DFJPGILAAON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E175450)
#define DFJPGILAAON_FHJALOLBGNB_OFFSET UNITYSDK_OFFSET(0x1E175410)
#define DFJPGILAAON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E175560)
#define DFJPGILAAON_HNKDGMBOPCO_OFFSET UNITYSDK_OFFSET(0x1E1753F0)
#define DFJPGILAAON_IMMAENIPCEM_OFFSET UNITYSDK_OFFSET(0x1E1753C0)
#define DFJPGILAAON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E175270)
#define DFJPGILAAON_LMLHDNBOLOJ_OFFSET UNITYSDK_OFFSET(0x1E175430)
#define DFJPGILAAON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E175B80)
#define DFJPGILAAON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E175B10)
#define DFJPGILAAON_NFJCMLFNGAH_OFFSET UNITYSDK_OFFSET(0x1E175400)
#define DFJPGILAAON_OBCKCBFNKCJ_OFFSET UNITYSDK_OFFSET(0x1E1753D0)
#define DFJPGILAAON_OKGMLCGLFPF_OFFSET UNITYSDK_OFFSET(0x1E175440)
#define DFJPGILAAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1752A0)
#define DFJPGILAAON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E175670)
#define DFJPGILAAON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1756D0)

inline static constexpr unsigned int DFJPGILAAON_TypeDefinitionIndex = 27929;

	class DFJPGILAAON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKMDKGDBPDP; // 0x18
		::System::UInt32 LGPMJAPHMDM; // 0x20
		::System::UInt32 MJCFMEDJFEF; // 0x24
		::System::UInt32 PHMDGOBJJOI; // 0x28
		::System::UInt32 JJFPOKMOBEB; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MAFFEALPHGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DFJPGILAAON")->GetStaticField(0x2DB90);
		}

		static ::Google::Protobuf::MessageParser_1<::DFJPGILAAON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFJPGILAAON*>**)UnitySDK::FromName("", "DFJPGILAAON")->GetStaticField(0x2DB98);
		}

		// static const ::System::Object OLDPCMNKLCD; // 0x0
		// static const ::System::Object LPKMCFMMHLL; // 0x0
		// static const ::System::Object BAMCCPELMLF; // 0x0
		// static const ::System::Object OKPOOMLKLML; // 0x0
		// static const ::System::Object MILEOAFBFNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + DFJPGILAAON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFJPGILAAON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFJPGILAAON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFJPGILAAON*>*(*)())((::PBYTE)hIl2Cpp + DFJPGILAAON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFJPGILAAON* Clone()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IMMAENIPCEM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_IMMAENIPCEM_OFFSET))(this);
		}

		::System::UInt32 OBCKCBFNKCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_OBCKCBFNKCJ_OFFSET))(this);
		}

		::System::Void AGPPHBJNGIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFJPGILAAON_AGPPHBJNGIG_OFFSET))(this, a1);
		}

		::System::UInt32 HNKDGMBOPCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_HNKDGMBOPCO_OFFSET))(this);
		}

		::System::Void NFJCMLFNGAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFJPGILAAON_NFJCMLFNGAH_OFFSET))(this, a1);
		}

		::System::UInt32 FHJALOLBGNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_FHJALOLBGNB_OFFSET))(this);
		}

		::System::Void CHDOGIDFOPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFJPGILAAON_CHDOGIDFOPE_OFFSET))(this, a1);
		}

		::System::UInt32 LMLHDNBOLOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_LMLHDNBOLOJ_OFFSET))(this);
		}

		::System::Void OKGMLCGLFPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFJPGILAAON_OKGMLCGLFPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFJPGILAAON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFJPGILAAON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + DFJPGILAAON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFJPGILAAON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJPGILAAON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + DFJPGILAAON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFJPGILAAON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMHKBOKMCPC;
class HEBIIBBMNKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMHKBOKMCPC_ACAOINKFIDD_OFFSET UNITYSDK_OFFSET(0x1F2CCAE0)
#define BMHKBOKMCPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2CD0C0)
#define BMHKBOKMCPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2CD390)
#define BMHKBOKMCPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2CCAB0)
#define BMHKBOKMCPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2CC9D0)
#define BMHKBOKMCPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CC980)
#define BMHKBOKMCPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2CCC50)
#define BMHKBOKMCPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2CCB30)
#define BMHKBOKMCPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2CCE00)
#define BMHKBOKMCPC_ICBIEBJKECD_OFFSET UNITYSDK_OFFSET(0x1F2CCB20)
#define BMHKBOKMCPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2CC940)
#define BMHKBOKMCPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2CD290)
#define BMHKBOKMCPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2CD1E0)
#define BMHKBOKMCPC_NCIDOPCFPOP_OFFSET UNITYSDK_OFFSET(0x1F2CCAF0)
#define BMHKBOKMCPC_OJKOJFFGNDK_OFFSET UNITYSDK_OFFSET(0x1F2CCB00)
#define BMHKBOKMCPC_PAEAJNGCDFM_OFFSET UNITYSDK_OFFSET(0x1F2CCB10)
#define BMHKBOKMCPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2CC970)
#define BMHKBOKMCPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2CCF30)
#define BMHKBOKMCPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2CCF90)

inline static constexpr unsigned int BMHKBOKMCPC_TypeDefinitionIndex = 27014;

	class BMHKBOKMCPC : public ::System::Object
	{
	public:
		::HEBIIBBMNKG* FKAOMBKACGA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEBIGLPNIDO; // 0x20
		::System::UInt32 JMJHMCLLIJP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BMHKBOKMCPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMHKBOKMCPC*>**)UnitySDK::FromName("", "BMHKBOKMCPC")->GetStaticField(0x52030);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MBAALDMILFH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BMHKBOKMCPC")->GetStaticField(0x52038);
		}

		// static const ::System::Object PKAEHCIHHPP; // 0x0
		// static const ::System::Object DEIJGADJJIG; // 0x0
		// static const ::System::Object MDPKMIPMCLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMHKBOKMCPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMHKBOKMCPC*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMHKBOKMCPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMHKBOKMCPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMHKBOKMCPC*>*(*)())((::PBYTE)hIl2Cpp + BMHKBOKMCPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMHKBOKMCPC* Clone()
		{
			return ((::BMHKBOKMCPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACAOINKFIDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_ACAOINKFIDD_OFFSET))(this);
		}

		::System::Void NCIDOPCFPOP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_NCIDOPCFPOP_OFFSET))(this, a1);
		}

		::HEBIIBBMNKG* OJKOJFFGNDK()
		{
			return ((::HEBIIBBMNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_OJKOJFFGNDK_OFFSET))(this);
		}

		::System::Void PAEAJNGCDFM(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_PAEAJNGCDFM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ICBIEBJKECD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_ICBIEBJKECD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMHKBOKMCPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMHKBOKMCPC*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMHKBOKMCPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMHKBOKMCPC*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMHKBOKMCPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

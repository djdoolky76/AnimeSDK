#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPNGFKCALEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPNGFKCALEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DA1D0)
#define JPNGFKCALEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA4A0)
#define JPNGFKCALEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D9E20)
#define JPNGFKCALEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D9DF0)
#define JPNGFKCALEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9DE0)
#define JPNGFKCALEK_EKOLEGAFLKP_OFFSET UNITYSDK_OFFSET(0x1E7D9E70)
#define JPNGFKCALEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D9F90)
#define JPNGFKCALEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D9EB0)
#define JPNGFKCALEK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7D9EA0)
#define JPNGFKCALEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DA060)
#define JPNGFKCALEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D9DA0)
#define JPNGFKCALEK_MCOJGMEPKLM_OFFSET UNITYSDK_OFFSET(0x1E7D9E80)
#define JPNGFKCALEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DA320)
#define JPNGFKCALEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DA2E0)
#define JPNGFKCALEK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7D9E90)
#define JPNGFKCALEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9DD0)
#define JPNGFKCALEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DA090)
#define JPNGFKCALEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DA0F0)

	class JPNGFKCALEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 IIAMIHLDDPI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPNGFKCALEK")->GetStaticField(0xC6F0);
		}

		// static const ::System::Object OBOHIPEGAGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPNGFKCALEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPNGFKCALEK*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPNGFKCALEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPNGFKCALEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPNGFKCALEK* Clone()
		{
			return ((::JPNGFKCALEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EKOLEGAFLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_EKOLEGAFLKP_OFFSET))(this);
		}

		::System::Void MCOJGMEPKLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPNGFKCALEK_MCOJGMEPKLM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPNGFKCALEK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPNGFKCALEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPNGFKCALEK*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPNGFKCALEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPNGFKCALEK*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPNGFKCALEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

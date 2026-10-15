#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPJAKCKKPBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPJAKCKKPBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFDAFF0)
#define PPJAKCKKPBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDB210)
#define PPJAKCKKPBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFDAC40)
#define PPJAKCKKPBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFDAC10)
#define PPJAKCKKPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDAC00)
#define PPJAKCKKPBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFDAD70)
#define PPJAKCKKPBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFDACA0)
#define PPJAKCKKPBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFDAC90)
#define PPJAKCKKPBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFDAEE0)
#define PPJAKCKKPBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFDABC0)
#define PPJAKCKKPBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFDB0B0)
#define PPJAKCKKPBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFDB080)
#define PPJAKCKKPBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFDAC80)
#define PPJAKCKKPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFDABF0)
#define PPJAKCKKPBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFDAF10)
#define PPJAKCKKPBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFDAF70)

inline static constexpr unsigned int PPJAKCKKPBC_TypeDefinitionIndex = 31453;

	class PPJAKCKKPBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PPJAKCKKPBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPJAKCKKPBC*>**)UnitySDK::FromName("", "PPJAKCKKPBC")->GetStaticField(0x43790);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPJAKCKKPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPJAKCKKPBC*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJAKCKKPBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPJAKCKKPBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPJAKCKKPBC*>*(*)())((::PBYTE)hIl2Cpp + PPJAKCKKPBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPJAKCKKPBC* Clone()
		{
			return ((::PPJAKCKKPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPJAKCKKPBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPJAKCKKPBC*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPJAKCKKPBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPJAKCKKPBC*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPJAKCKKPBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

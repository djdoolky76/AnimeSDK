#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCAHBOAJIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFCAHBOAJIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E432DB0)
#define GFCAHBOAJIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E433080)
#define GFCAHBOAJIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E432A00)
#define GFCAHBOAJIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4329D0)
#define GFCAHBOAJIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4329C0)
#define GFCAHBOAJIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E432B70)
#define GFCAHBOAJIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E432A90)
#define GFCAHBOAJIB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E432A80)
#define GFCAHBOAJIB_GBDHEJPLLHG_OFFSET UNITYSDK_OFFSET(0x1E432A50)
#define GFCAHBOAJIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E432C40)
#define GFCAHBOAJIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E432980)
#define GFCAHBOAJIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E432F00)
#define GFCAHBOAJIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E432EC0)
#define GFCAHBOAJIB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E432A70)
#define GFCAHBOAJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4329B0)
#define GFCAHBOAJIB_PFFFCAHMPOK_OFFSET UNITYSDK_OFFSET(0x1E432A60)
#define GFCAHBOAJIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E432C70)
#define GFCAHBOAJIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E432CD0)

inline static constexpr unsigned int GFCAHBOAJIB_TypeDefinitionIndex = 34149;

	class GFCAHBOAJIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFCPCAFJHNB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GFCAHBOAJIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFCAHBOAJIB*>**)UnitySDK::FromName("", "GFCAHBOAJIB")->GetStaticField(0x12580);
		}

		// static const ::System::Object LFMAGKAHAOK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFCAHBOAJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCAHBOAJIB*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCAHBOAJIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFCAHBOAJIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFCAHBOAJIB*>*(*)())((::PBYTE)hIl2Cpp + GFCAHBOAJIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFCAHBOAJIB* Clone()
		{
			return ((::GFCAHBOAJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GBDHEJPLLHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_GBDHEJPLLHG_OFFSET))(this);
		}

		::System::Void PFFFCAHMPOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_PFFFCAHMPOK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFCAHBOAJIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFCAHBOAJIB*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFCAHBOAJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCAHBOAJIB*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFCAHBOAJIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

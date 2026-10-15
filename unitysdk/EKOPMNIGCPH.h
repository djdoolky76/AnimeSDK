#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPAGBAALHMP;
class EKOPMNIGCPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKOPMNIGCPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C7370)
#define EKOPMNIGCPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7680)
#define EKOPMNIGCPH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C6E00)
#define EKOPMNIGCPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C6D80)
#define EKOPMNIGCPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6D70)
#define EKOPMNIGCPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C7050)
#define EKOPMNIGCPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C6ED0)
#define EKOPMNIGCPH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2C6EA0)
#define EKOPMNIGCPH_FBMPMAIEJNP_OFFSET UNITYSDK_OFFSET(0x1E2C6EC0)
#define EKOPMNIGCPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C71D0)
#define EKOPMNIGCPH_GFFGGKFNOAJ_OFFSET UNITYSDK_OFFSET(0x1E2C6EB0)
#define EKOPMNIGCPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C6D30)
#define EKOPMNIGCPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C74F0)
#define EKOPMNIGCPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C7440)
#define EKOPMNIGCPH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2C6E90)
#define EKOPMNIGCPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C6D60)
#define EKOPMNIGCPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C7230)
#define EKOPMNIGCPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C7290)

inline static constexpr unsigned int EKOPMNIGCPH_TypeDefinitionIndex = 30857;

	class EKOPMNIGCPH : public ::System::Object
	{
	public:
		::BPAGBAALHMP* POGCEMLPKIN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EKOPMNIGCPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKOPMNIGCPH*>**)UnitySDK::FromName("", "EKOPMNIGCPH")->GetStaticField(0x4DD40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HHKAEOPIILH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKOPMNIGCPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKOPMNIGCPH*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKOPMNIGCPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKOPMNIGCPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKOPMNIGCPH*>*(*)())((::PBYTE)hIl2Cpp + EKOPMNIGCPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKOPMNIGCPH* Clone()
		{
			return ((::EKOPMNIGCPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BPAGBAALHMP* GFFGGKFNOAJ()
		{
			return ((::BPAGBAALHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_GFFGGKFNOAJ_OFFSET))(this);
		}

		::System::Void FBMPMAIEJNP(::BPAGBAALHMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPAGBAALHMP*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_FBMPMAIEJNP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKOPMNIGCPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKOPMNIGCPH*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKOPMNIGCPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKOPMNIGCPH*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKOPMNIGCPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

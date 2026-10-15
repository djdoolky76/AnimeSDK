#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOBAMBNCFDP;
class HODNCFNOPDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOBAMBNCFDP_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E3C9910)
#define FOBAMBNCFDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C9E10)
#define FOBAMBNCFDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA130)
#define FOBAMBNCFDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C9870)
#define FOBAMBNCFDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C9800)
#define FOBAMBNCFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C97F0)
#define FOBAMBNCFDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C9AB0)
#define FOBAMBNCFDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C9930)
#define FOBAMBNCFDP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3C9900)
#define FOBAMBNCFDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C9C30)
#define FOBAMBNCFDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C97B0)
#define FOBAMBNCFDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C9F70)
#define FOBAMBNCFDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C9EE0)
#define FOBAMBNCFDP_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E3C9920)
#define FOBAMBNCFDP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3C98F0)
#define FOBAMBNCFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C97E0)
#define FOBAMBNCFDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C9CD0)
#define FOBAMBNCFDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C9D30)

inline static constexpr unsigned int FOBAMBNCFDP_TypeDefinitionIndex = 27849;

	class FOBAMBNCFDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HODNCFNOPDA* CMDGAIOLHKP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FOBAMBNCFDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOBAMBNCFDP*>**)UnitySDK::FromName("", "FOBAMBNCFDP")->GetStaticField(0x5E2E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOBAMBNCFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOBAMBNCFDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOBAMBNCFDP*>*(*)())((::PBYTE)hIl2Cpp + FOBAMBNCFDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOBAMBNCFDP* Clone()
		{
			return ((::FOBAMBNCFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HODNCFNOPDA* ANALOEDDDHD()
		{
			return ((::HODNCFNOPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::HODNCFNOPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOBAMBNCFDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOBAMBNCFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

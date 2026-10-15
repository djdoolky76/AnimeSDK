#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKFJCPELEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFKFJCPELEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E119C10)
#define AFKFJCPELEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E119EE0)
#define AFKFJCPELEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E119860)
#define AFKFJCPELEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E119830)
#define AFKFJCPELEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E119820)
#define AFKFJCPELEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1199D0)
#define AFKFJCPELEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1198F0)
#define AFKFJCPELEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1198E0)
#define AFKFJCPELEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E119AA0)
#define AFKFJCPELEM_GNDBNPHHBKK_OFFSET UNITYSDK_OFFSET(0x1E1198C0)
#define AFKFJCPELEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1197E0)
#define AFKFJCPELEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E119D60)
#define AFKFJCPELEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E119D20)
#define AFKFJCPELEM_NIIDNCJHHOG_OFFSET UNITYSDK_OFFSET(0x1E1198B0)
#define AFKFJCPELEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1198D0)
#define AFKFJCPELEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E119810)
#define AFKFJCPELEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E119AD0)
#define AFKFJCPELEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E119B30)

inline static constexpr unsigned int AFKFJCPELEM_TypeDefinitionIndex = 30712;

	class AFKFJCPELEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 FJPOJGHDFFI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AFKFJCPELEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFKFJCPELEM*>**)UnitySDK::FromName("", "AFKFJCPELEM")->GetStaticField(0x2E8D0);
		}

		// static const ::System::Object FJAFDPJAHOP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFKFJCPELEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFKFJCPELEM*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKFJCPELEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFKFJCPELEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFKFJCPELEM*>*(*)())((::PBYTE)hIl2Cpp + AFKFJCPELEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFKFJCPELEM* Clone()
		{
			return ((::AFKFJCPELEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NIIDNCJHHOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_NIIDNCJHHOG_OFFSET))(this);
		}

		::System::Void GNDBNPHHBKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFKFJCPELEM_GNDBNPHHBKK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFKFJCPELEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFKFJCPELEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFKFJCPELEM*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKFJCPELEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFKFJCPELEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFKFJCPELEM*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFKFJCPELEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

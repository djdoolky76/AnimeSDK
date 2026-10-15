#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHLBFIOLAIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHLBFIOLAIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E938880)
#define LHLBFIOLAIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E938B50)
#define LHLBFIOLAIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E938480)
#define LHLBFIOLAIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E938450)
#define LHLBFIOLAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E938440)
#define LHLBFIOLAIA_DJBPCBPLJBK_OFFSET UNITYSDK_OFFSET(0x1E938510)
#define LHLBFIOLAIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E938640)
#define LHLBFIOLAIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E938530)
#define LHLBFIOLAIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E938710)
#define LHLBFIOLAIA_GJINBGPBEKO_OFFSET UNITYSDK_OFFSET(0x1E938500)
#define LHLBFIOLAIA_INGHOCFKLMM_OFFSET UNITYSDK_OFFSET(0x1E9384F0)
#define LHLBFIOLAIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9383D0)
#define LHLBFIOLAIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9389D0)
#define LHLBFIOLAIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E938990)
#define LHLBFIOLAIA_NIEBPCAOAHG_OFFSET UNITYSDK_OFFSET(0x1E938520)
#define LHLBFIOLAIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E938430)
#define LHLBFIOLAIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E938740)
#define LHLBFIOLAIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9387A0)

inline static constexpr unsigned int LHLBFIOLAIA_TypeDefinitionIndex = 26789;

	class LHLBFIOLAIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JKEOJBIKIKE; // 0x18
		::System::UInt32 IDDJKMCKIHO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LHLBFIOLAIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHLBFIOLAIA*>**)UnitySDK::FromName("", "LHLBFIOLAIA")->GetStaticField(0x36CB0);
		}

		// static const ::System::Object DCIKMJIGMCD; // 0x0
		// static const ::System::Object MKMJJEKAGGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHLBFIOLAIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLBFIOLAIA*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHLBFIOLAIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHLBFIOLAIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHLBFIOLAIA*>*(*)())((::PBYTE)hIl2Cpp + LHLBFIOLAIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHLBFIOLAIA* Clone()
		{
			return ((::LHLBFIOLAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_CLONE_OFFSET))(this);
		}

		::System::UInt32 INGHOCFKLMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_INGHOCFKLMM_OFFSET))(this);
		}

		::System::Void GJINBGPBEKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_GJINBGPBEKO_OFFSET))(this, a1);
		}

		::System::UInt32 DJBPCBPLJBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_DJBPCBPLJBK_OFFSET))(this);
		}

		::System::Void NIEBPCAOAHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_NIEBPCAOAHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHLBFIOLAIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHLBFIOLAIA*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHLBFIOLAIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLBFIOLAIA*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHLBFIOLAIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

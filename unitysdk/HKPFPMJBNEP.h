#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKPFPMJBNEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKPFPMJBNEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B9250)
#define HKPFPMJBNEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B9470)
#define HKPFPMJBNEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B8EA0)
#define HKPFPMJBNEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B8E70)
#define HKPFPMJBNEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B8E60)
#define HKPFPMJBNEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B8FD0)
#define HKPFPMJBNEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B8F00)
#define HKPFPMJBNEP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5B8EF0)
#define HKPFPMJBNEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B9140)
#define HKPFPMJBNEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B8E20)
#define HKPFPMJBNEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B9310)
#define HKPFPMJBNEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B92E0)
#define HKPFPMJBNEP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5B8EE0)
#define HKPFPMJBNEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B8E50)
#define HKPFPMJBNEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B9170)
#define HKPFPMJBNEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B91D0)

inline static constexpr unsigned int HKPFPMJBNEP_TypeDefinitionIndex = 35131;

	class HKPFPMJBNEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HKPFPMJBNEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKPFPMJBNEP*>**)UnitySDK::FromName("", "HKPFPMJBNEP")->GetStaticField(0x469F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKPFPMJBNEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKPFPMJBNEP*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKPFPMJBNEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKPFPMJBNEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKPFPMJBNEP*>*(*)())((::PBYTE)hIl2Cpp + HKPFPMJBNEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKPFPMJBNEP* Clone()
		{
			return ((::HKPFPMJBNEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKPFPMJBNEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKPFPMJBNEP*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKPFPMJBNEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKPFPMJBNEP*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKPFPMJBNEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCLLIAGDEP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHCLLIAGDEP_ACCFODNGIBM_OFFSET UNITYSDK_OFFSET(0x1E4852B0)
#define GHCLLIAGDEP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E485620)
#define GHCLLIAGDEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E485840)
#define GHCLLIAGDEP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E485270)
#define GHCLLIAGDEP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E485240)
#define GHCLLIAGDEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E485230)
#define GHCLLIAGDEP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4853A0)
#define GHCLLIAGDEP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4852D0)
#define GHCLLIAGDEP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E485510)
#define GHCLLIAGDEP_HPCAHPOJFCI_OFFSET UNITYSDK_OFFSET(0x1E4852C0)
#define GHCLLIAGDEP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4851F0)
#define GHCLLIAGDEP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4856E0)
#define GHCLLIAGDEP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4856B0)
#define GHCLLIAGDEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E485220)
#define GHCLLIAGDEP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E485540)
#define GHCLLIAGDEP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4855A0)

inline static constexpr unsigned int GHCLLIAGDEP_TypeDefinitionIndex = 28469;

	class GHCLLIAGDEP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGKCLFFLFHH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHCLLIAGDEP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHCLLIAGDEP*>**)UnitySDK::FromName("", "GHCLLIAGDEP")->GetStaticField(0x16B20);
		}

		// static const ::System::Object NGJDKJLONGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHCLLIAGDEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCLLIAGDEP*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCLLIAGDEP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHCLLIAGDEP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHCLLIAGDEP*>*(*)())((::PBYTE)hIl2Cpp + GHCLLIAGDEP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHCLLIAGDEP* Clone()
		{
			return ((::GHCLLIAGDEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACCFODNGIBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_ACCFODNGIBM_OFFSET))(this);
		}

		::System::Void HPCAHPOJFCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_HPCAHPOJFCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHCLLIAGDEP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCLLIAGDEP*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHCLLIAGDEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCLLIAGDEP*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHCLLIAGDEP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

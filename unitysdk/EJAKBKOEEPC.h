#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJAKBKOEEPC;
class JMOCDMHFEJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJAKBKOEEPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AF270)
#define EJAKBKOEEPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AF4F0)
#define EJAKBKOEEPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AEBD0)
#define EJAKBKOEEPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AEB80)
#define EJAKBKOEEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AEB70)
#define EJAKBKOEEPC_DAJMNFONCKE_OFFSET UNITYSDK_OFFSET(0x1E2AEC70)
#define EJAKBKOEEPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2AEE20)
#define EJAKBKOEEPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AEC80)
#define EJAKBKOEEPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AF0F0)
#define EJAKBKOEEPC_GGBDJNIKAAN_OFFSET UNITYSDK_OFFSET(0x1E2AEC60)
#define EJAKBKOEEPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2AEB00)
#define EJAKBKOEEPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AF360)
#define EJAKBKOEEPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AF2D0)
#define EJAKBKOEEPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2AEB60)
#define EJAKBKOEEPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AF180)
#define EJAKBKOEEPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AF1E0)

inline static constexpr unsigned int EJAKBKOEEPC_TypeDefinitionIndex = 28875;

	class EJAKBKOEEPC : public ::System::Object
	{
	public:
		::JMOCDMHFEJG* AHDBMOLCEGJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EJAKBKOEEPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJAKBKOEEPC*>**)UnitySDK::FromName("", "EJAKBKOEEPC")->GetStaticField(0x4A500);
		}

		// static const ::System::Object NJBJFIHBELL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJAKBKOEEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJAKBKOEEPC*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJAKBKOEEPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJAKBKOEEPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJAKBKOEEPC*>*(*)())((::PBYTE)hIl2Cpp + EJAKBKOEEPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJAKBKOEEPC* Clone()
		{
			return ((::EJAKBKOEEPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_CLONE_OFFSET))(this);
		}

		::JMOCDMHFEJG* GGBDJNIKAAN()
		{
			return ((::JMOCDMHFEJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_GGBDJNIKAAN_OFFSET))(this);
		}

		::System::Void DAJMNFONCKE(::JMOCDMHFEJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMOCDMHFEJG*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_DAJMNFONCKE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJAKBKOEEPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJAKBKOEEPC*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJAKBKOEEPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJAKBKOEEPC*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJAKBKOEEPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

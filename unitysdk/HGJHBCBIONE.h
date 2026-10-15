#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJJEOANEDDO.h"
#include "unitysdk/System/Object.h"
class HGJHBCBIONE;
class OJHHACMHFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGJHBCBIONE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57BC60)
#define HGJHBCBIONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57BFB0)
#define HGJHBCBIONE_CHICLDHDGKE_OFFSET UNITYSDK_OFFSET(0x1E57B770)
#define HGJHBCBIONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57B680)
#define HGJHBCBIONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57B5F0)
#define HGJHBCBIONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57B5E0)
#define HGJHBCBIONE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57B940)
#define HGJHBCBIONE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57B790)
#define HGJHBCBIONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57BAC0)
#define HGJHBCBIONE_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1E57B750)
#define HGJHBCBIONE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57B570)
#define HGJHBCBIONE_KGLHDJPFCHE_OFFSET UNITYSDK_OFFSET(0x1E57B780)
#define HGJHBCBIONE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57BE00)
#define HGJHBCBIONE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57BD70)
#define HGJHBCBIONE_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1E57B760)
#define HGJHBCBIONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57B5D0)
#define HGJHBCBIONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57BB10)
#define HGJHBCBIONE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57BB70)

inline static constexpr unsigned int HGJHBCBIONE_TypeDefinitionIndex = 31808;

	class HGJHBCBIONE : public ::System::Object
	{
	public:
		::OJHHACMHFKA* IANPHEMCHDG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::GJJEOANEDDO CBLIKBAGMCI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>**)UnitySDK::FromName("", "HGJHBCBIONE")->GetStaticField(0x376F0);
		}

		// static const ::System::Object CLMHGEKEEOH; // 0x0
		// static const ::System::Object ELDMCOMENBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGJHBCBIONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGJHBCBIONE*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGJHBCBIONE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>*(*)())((::PBYTE)hIl2Cpp + HGJHBCBIONE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGJHBCBIONE* Clone()
		{
			return ((::HGJHBCBIONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CLONE_OFFSET))(this);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_PAGHNFFHKEO_OFFSET))(this, a1);
		}

		::GJJEOANEDDO CHICLDHDGKE()
		{
			return ((::GJJEOANEDDO(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CHICLDHDGKE_OFFSET))(this);
		}

		::System::Void KGLHDJPFCHE(::GJJEOANEDDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJJEOANEDDO))((::PBYTE)hIl2Cpp + HGJHBCBIONE_KGLHDJPFCHE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGJHBCBIONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGJHBCBIONE*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGJHBCBIONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGJHBCBIONE*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

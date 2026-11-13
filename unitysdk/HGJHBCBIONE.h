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

#define HGJHBCBIONE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAFCCF0)
#define HGJHBCBIONE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAFD040)
#define HGJHBCBIONE_CHICLDHDGKE_OFFSET UNITYSDK_OFFSET(0x1FAFC7F0)
#define HGJHBCBIONE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAFC730)
#define HGJHBCBIONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAFC6B0)
#define HGJHBCBIONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFC6A0)
#define HGJHBCBIONE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAFC9E0)
#define HGJHBCBIONE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAFC830)
#define HGJHBCBIONE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAFCB60)
#define HGJHBCBIONE_IAGDODILOIH_OFFSET UNITYSDK_OFFSET(0x1FAFC810)
#define HGJHBCBIONE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAFC630)
#define HGJHBCBIONE_KGLHDJPFCHE_OFFSET UNITYSDK_OFFSET(0x1FAFC800)
#define HGJHBCBIONE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAFCE90)
#define HGJHBCBIONE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAFCE00)
#define HGJHBCBIONE_PAGHNFFHKEO_OFFSET UNITYSDK_OFFSET(0x1FAFC820)
#define HGJHBCBIONE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAFC690)
#define HGJHBCBIONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAFCBA0)
#define HGJHBCBIONE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAFCC00)

inline static constexpr unsigned int HGJHBCBIONE_TypeDefinitionIndex = 32721;

	class HGJHBCBIONE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OJHHACMHFKA* IANPHEMCHDG; // 0x18
		::GJJEOANEDDO CBLIKBAGMCI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGJHBCBIONE*>**)UnitySDK::FromName("", "HGJHBCBIONE")->GetStaticField(0x2C940);
		}

		// static const ::System::Object ELDMCOMENBO; // 0x0
		// static const ::System::Object CLMHGEKEEOH; // 0x0
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

		::GJJEOANEDDO CHICLDHDGKE()
		{
			return ((::GJJEOANEDDO(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_CHICLDHDGKE_OFFSET))(this);
		}

		::System::Void KGLHDJPFCHE(::GJJEOANEDDO a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJJEOANEDDO))((::PBYTE)hIl2Cpp + HGJHBCBIONE_KGLHDJPFCHE_OFFSET))(this, a1);
		}

		::OJHHACMHFKA* IAGDODILOIH()
		{
			return ((::OJHHACMHFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJHBCBIONE_IAGDODILOIH_OFFSET))(this);
		}

		::System::Void PAGHNFFHKEO(::OJHHACMHFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJHHACMHFKA*))((::PBYTE)hIl2Cpp + HGJHBCBIONE_PAGHNFFHKEO_OFFSET))(this, a1);
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

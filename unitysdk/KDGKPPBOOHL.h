#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOBLDOOICE;
class KDGKPPBOOHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDGKPPBOOHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7FF280)
#define KDGKPPBOOHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FF660)
#define KDGKPPBOOHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7FEC30)
#define KDGKPPBOOHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7FEBB0)
#define KDGKPPBOOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FEBA0)
#define KDGKPPBOOHL_DFAOABCHGDA_OFFSET UNITYSDK_OFFSET(0x1E7FECF0)
#define KDGKPPBOOHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7FEE80)
#define KDGKPPBOOHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7FED00)
#define KDGKPPBOOHL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7FECD0)
#define KDGKPPBOOHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7FF000)
#define KDGKPPBOOHL_HGHNFHPEOFH_OFFSET UNITYSDK_OFFSET(0x1E7FECE0)
#define KDGKPPBOOHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7FEB60)
#define KDGKPPBOOHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7FF470)
#define KDGKPPBOOHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7FF350)
#define KDGKPPBOOHL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7FECC0)
#define KDGKPPBOOHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7FEB90)
#define KDGKPPBOOHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7FF140)
#define KDGKPPBOOHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7FF1A0)

	class KDGKPPBOOHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BDOBLDOOICE* LFHMGDIIGMO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDGKPPBOOHL")->GetStaticField(0x10980);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DDFNOENPACP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDGKPPBOOHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDGKPPBOOHL*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDGKPPBOOHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDGKPPBOOHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDGKPPBOOHL* Clone()
		{
			return ((::KDGKPPBOOHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BDOBLDOOICE* HGHNFHPEOFH()
		{
			return ((::BDOBLDOOICE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_HGHNFHPEOFH_OFFSET))(this);
		}

		::System::Void DFAOABCHGDA(::BDOBLDOOICE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDOBLDOOICE*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_DFAOABCHGDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDGKPPBOOHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDGKPPBOOHL*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDGKPPBOOHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDGKPPBOOHL*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDGKPPBOOHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
